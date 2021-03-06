/**********************************************************************
** Author: Nicolas Remy
** Copyright (C) 2002-2004 The Board of Trustees of the Leland Stanford Junior
**   University
** All rights reserved.
**
** This file is part of the "grid" module of the Geostatistical Earth
** Modeling Software (GEMS)
**
** This file may be distributed and/or modified under the terms of the 
** license defined by the Stanford Center for Reservoir Forecasting and 
** appearing in the file LICENSE.XFREE included in the packaging of this file.
**
** This file may be distributed and/or modified under the terms of the
** GNU General Public License version 2 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.gnu.org/copyleft/gpl.html for GPL licensing information.
**
** Contact the Stanford Center for Reservoir Forecasting, Stanford University
** if any conditions of this licensing are not clear to you.
**
**********************************************************************/

#ifndef __GSTLAPPLI_GRID_PROPERTY_H__ 
#define __GSTLAPPLI_GRID_PROPERTY_H__ 
 


#include <GsTLAppli/grid/common.h>
#include <GsTLAppli/utils/gstl_types.h> 
#include <GsTLAppli/utils/gstl_messages.h> 
//#include <GsTLAppli/grid/grid_model/grid_property_set.h> 
#include <GsTLAppli/grid/grid_model/grid_region.h> 
 
#include <string> 
#include <fstream> 
#include <set>
 
class PropertyAccessor; 
class PropertyValueProxy; 
class GsTLGridPropertyGroup; 
 



/** A GsTLGridProperty contains 3 types of information: 
 *    \li one flag to indicate if the node contains a data value 
 *    \li a data value 
 *    \li one flag to indicate if the data value is a "hard data" 
 */ 
class GRID_DECL GsTLGridProperty { 
 
 public: 
  typedef float property_type; 
  static const float no_data_value; 
 
 public: 
  GsTLGridProperty( GsTLInt size, const std::string& name, 
		    property_type default_value = no_data_value ); 
  GsTLGridProperty( GsTLInt size, const std::string& name,
				const std::string& in_filename, property_type default_value = no_data_value );
  virtual ~GsTLGridProperty();
     
  /** Tells whether the ith element of the property array is informed,
  * ie contains a value.
  */
  inline bool is_informed( GsTLInt i ) const; 

  /** Erase the value of the ith element
  */
  inline void set_not_informed( GsTLInt i ); 
   
  /** Tells whether the ith element of the property array is a hard-datum
  */
  inline bool is_harddata( GsTLInt i ) const; 

  /** If \a flag is true, the ith value will be considered a hard-data.
  */
  inline void set_harddata( bool flag, GsTLInt i ); 
   
  /** Changes the value of the ith element to \a val.
  */
  inline void set_value( property_type val, GsTLInt id ); 

  /** Returns the value of the ith element.
  */
  inline property_type get_value( GsTLInt id ) const; 

  //inline property_type get_value_no_check( GsTLInt id ) const; 
 
  /** Returns the total number of values in the property array
  */
  inline GsTLInt size() const; 
 
  /** Get direct access to the data array. This function is to be used
  * for speed optimization only. If the property is currently stored on the
  * disk rather than in RAM (see functions \c swap_to_disk() and 
  * \c swap_to_memory() ), the function returns a null pointer.
  */
#ifdef SGEMS_ACCESSOR_LARGE_FILE

  inline std::vector<float*> data();
  inline const std::vector<float*> data() const;

  //virtual float** data()=0;
  //virtual const float* const* data() const=0 ;
#else
  inline property_type* data(); 
  inline const property_type* data() const; 
#endif
  /** Returns the name of the property
  */
  inline std::string name() const { return name_; } 
  inline void rename( const std::string& new_name ) { name_ = new_name; } 

  /** Sends the property to the disk: instead of keeping the property values 
  * in RAM, they are stored on the disk. This function is useful to save RAM.
  * Accessing the property values from the disk is slower than from RAM, hence
  * the property should be sent to RAM (see \c swap_to_memory() ) if performance  
  * is an issue
  */
  void swap_to_disk() const; 

  /** Loads the property to RAM. It doesn't do anything if the property is 
  * already in RAM
  */
  void swap_to_memory() const; 
  
  /** Return true if the property is loaded to RAM, false if stored on disk
  */
  bool is_in_memory() const;

  class iterator; 
  class const_iterator;
  iterator begin( bool skip = true ) { return iterator( this, 0, skip ); } 
  iterator end() { return iterator( this, size(), true ); } 
  const_iterator begin( bool skip = true ) const { return const_iterator( this, 0, skip ); }
  const_iterator end() const { return const_iterator( this, size(), true ); }

  /** Returns if location id is inside the active regions
  */
  inline bool is_inside_region(GsTLInt id) const;

  /** Set the active region
  */
  inline void set_region(const GsTLGridRegion* region);
  inline const GsTLGridRegion* get_region();
  inline const GsTLGridRegion* get_region() const;

  /** Manage the property group
  */
  bool has_group_membership() const;
  std::vector< std::pair<std::string,std::string> > group_pair_name_type() const;
  std::vector<std::string > group_names() const;
  std::vector<std::string > group_types() const;
  std::vector< GsTLGridPropertyGroup*>& groups();
  bool add_group_membership(GsTLGridPropertyGroup* group);
  bool remove_group_membership(GsTLGridPropertyGroup* group);
  bool remove_group_membership(const std::string& group_name);
  int number_group_membership() const;



 protected: 
  mutable PropertyAccessor* accessor_;   
  std::string name_; 

  const GsTLGridRegion* region_;
  std::vector<GsTLGridPropertyGroup*> groups_;
  

   
 private: 
  GsTLGridProperty( const GsTLGridProperty& rhs ); 
  GsTLGridProperty& operator = ( const GsTLGridProperty& rhs ); 
 
  friend class GsTLGridProperty::const_iterator;
  friend class GsTLGridProperty::iterator;
  friend class PropertyValueProxy;

  //-------- 
 public: 

   // Iterator nested class
  class GRID_DECL iterator { 
    friend class GsTLGridProperty::const_iterator;
  public: 
    // STL requirement for an iterator 
    typedef std::forward_iterator_tag iterator_category; 
    //    typedef PropertyValueProxy value_type; 
    typedef GsTLGridProperty::property_type value_type; 
    typedef int difference_type; 
    typedef value_type* pointer; 
    typedef value_type& reference; 
   
  public: 
    iterator( GsTLGridProperty* prop, GsTLInt id, bool skip = true ); 
    inline PropertyValueProxy operator * (); 
    inline float operator * () const; 
    inline iterator& operator ++ (); 
    inline iterator& operator ++ (int); 
    inline bool operator == ( const iterator& it ) const; 
    inline bool operator != ( const iterator& it ) const; 
    inline iterator& operator = ( const iterator& it ); 
 
  private: 
    GsTLGridProperty* prop_; 
    GsTLInt id_; 
    GsTLInt max_id_; 
    bool skip_uninformed_;
  }; 


     // Const Iterator nested class
  class GRID_DECL const_iterator {    
  public: 
    // STL requirement for an iterator 
    typedef std::forward_iterator_tag iterator_category; 
    //    typedef PropertyValueProxy value_type; 
    typedef GsTLGridProperty::property_type value_type; 
    typedef int difference_type; 
    typedef value_type* pointer; 
    typedef value_type& reference; 
   
  public: 
    const_iterator( const GsTLGridProperty* prop, GsTLInt id, bool skip = true ); 
    const_iterator( iterator it );
    inline float operator * () const ;
    inline const_iterator& operator ++ (); 
    inline const_iterator& operator ++ (int); 
    inline bool operator == ( const const_iterator& it ) const ; 
    inline bool operator != ( const const_iterator& it ) const ; 
    inline const_iterator& operator = ( const const_iterator& it ); 
 
  private: 
    const GsTLGridProperty* prop_; 
    GsTLInt id_; 
    GsTLInt max_id_; 
    bool skip_uninformed_;
  }; 

}; 
 
 
 
 
//====================================== 
/** 
 */ 
class GRID_DECL PropertyAccessor { 
 public: 
  virtual ~PropertyAccessor() {} 
   
  virtual float get_property_value( GsTLInt id ) = 0; 
  virtual void set_property_value( float val, GsTLInt id ) = 0; 
  virtual bool get_flag( int flag_id, GsTLInt id ) = 0; 
  virtual void set_flag( bool flag, int flag_id, GsTLInt id ) = 0; 
   
#ifdef SGEMS_ACCESSOR_LARGE_FILE
  //virtual float** data()=0;
  //virtual const float* const* data() const=0 ;
  virtual std::vector<GsTLGridProperty::property_type*> data()=0;
  virtual const std::vector<GsTLGridProperty::property_type*> data() const=0 ;
#else
  virtual float* data()=0;
  virtual const float* data() const =0;
#endif
  virtual bool* flags( int flag_id ) = 0; 
  virtual const bool* flags( int flag_id ) const = 0; 
   
  virtual GsTLInt size() const = 0; 
}; 
 
 
/** Warning: this implementation currently only supports 1 set of flags. 
 */ 
class GRID_DECL MemoryAccessor : public PropertyAccessor { 
 public: 
  #ifdef SGEMS_ACCESSOR_LARGE_FILE
  static const int MEM_SIZE_ARRAY=1048576;
  #endif

  MemoryAccessor( GsTLInt size ); 
  MemoryAccessor( GsTLInt size, float default_value ); 
  MemoryAccessor( GsTLInt size, std::fstream& stream ); 
  virtual ~MemoryAccessor(); 
 
  virtual float get_property_value( GsTLInt id ) ; 
  virtual void set_property_value( float val, GsTLInt id ); 
  virtual bool get_flag( int flag_id, GsTLInt id ) ; 
  virtual void set_flag( bool flag, int flag_id, GsTLInt id ); 
 
#ifdef SGEMS_ACCESSOR_LARGE_FILE
  virtual std::vector<float*> data();
  virtual const std::vector<float*> data() const;
//  virtual float** data();
//  virtual const float* const* data() const ;
#else
  virtual float* data();
  virtual const float* data() const ;
#endif

 // virtual float* data(); 
  virtual bool* flags( int flag_id ); 
  //virtual const float* data() const ; 
  virtual const bool* flags( int flag_id ) const; 
 
  virtual GsTLInt size() const { return size_; } 
 
  void write_to_file() const; 

 
 protected: 

#ifdef SGEMS_ACCESSOR_LARGE_FILE
// the data are store in arrrays of size of 1e6 values
  std::vector<float*> values_;
  std::vector<float*> new_data_structure(int size);
  int last_array_length_;
#else
  float* values_; 
#endif

  bool* flags_; 
  GsTLInt size_; 
}; 
 
 
/** Warning: this implementation currently only supports 1 set of flags. 
 * The data are stored in the following format: 
 *  - all the property values 
 *  - all the flags 
 */ 
class GRID_DECL DiskAccessor : public PropertyAccessor { 
 public: 
  DiskAccessor( GsTLInt size, const std::string& filename,  
		            const float* prop, const bool* flags = 0 ); 
#ifdef SGEMS_ACCESSOR_LARGE_FILE
  DiskAccessor( GsTLInt size, const std::string& filename,  
    const std::vector<float*> prop, const bool* flags = 0 );
#endif
  DiskAccessor( GsTLInt size, const std::string& filename,
							 const std::string& in_filename, const bool* flags = 0 );
  virtual ~DiskAccessor(); 
   
  virtual float get_property_value( GsTLInt id ) ; 
  virtual void set_property_value( float val, GsTLInt id ); 
  virtual bool get_flag( int flag_id, GsTLInt id ); 
  virtual void set_flag( bool flag, int flag_id, GsTLInt id ); 
 
#ifdef SGEMS_ACCESSOR_LARGE_FILE

inline 
std::vector<float*> data() { 
  std::vector< float*> vec;
  return vec; 
}

const std::vector< float*> data() const { 
  std::vector< float*> vec;
  return vec;
}
 /*
  virtual float** data(){ return 0; }
  virtual const float* const* data() const { return 0; }
  */
#else
  virtual float* data(){ return 0; }
  virtual const float* data() const { return 0; }
#endif
 // virtual float* data() {return 0; } 
  virtual bool* flags( int flag_id ) { return 0; } 
//  virtual const float* data() const { return 0; } 
  virtual const bool* flags( int flag_id ) const { return 0; } 
 
  virtual GsTLInt size() const { return size_; } 
 
  // This function is dangerous because the stream is then shared with whoever 
  // requested it. 
  std::fstream& stream(); 
 

 protected: 
  void open_cache_stream();
  void close_cache_stream();

  /// dumps the content of the buffers to the file 
  virtual void flush( bool leave_stream_open = false ); 
 
  /** read a part of the file into the buffer.  
   * @params start is the index of the first property value to be put into 
   * the buffer.  
   */ 
  virtual void bufferize_values( GsTLInt start ); 
  virtual void bufferize_flags( GsTLInt start ); 
 
  /** deletes the cache file from the filesystem. 
   */ 
  virtual int delete_cache_file(); 
 
  /** Returns the name of the cache file for property prop_name.  
   */ 
  static std::string cache_filename( const std::string& prop_name ); 
 
 protected: 
  std::fstream cache_stream_; 
  std::string cache_filename_; 
 
  std::pair<int, int> val_bound_indexes_; 
  std::pair<int, int> flags_bound_indexes_; 
  bool val_buffer_modified_; 
  bool flags_buffer_modified_; 
  float* val_buffer_; 
  bool* flags_buffer_; 
  const int buffer_size_; 
  GsTLInt size_; 
  long int flags_position_begin_; 
}; 
 
 
 
//--------------------------- 
class GRID_DECL PropertyValueProxy { 
  friend class GsTLGridProperty::iterator; 
   
 public: 
   operator float() { return prop_->accessor_->get_property_value(id_); }// return prop_->get_value( id_ ); } 
  PropertyValueProxy& operator = ( float val ) {  
    prop_->set_value( val, id_ ); return *this; 
  } 
  PropertyValueProxy& operator = ( const PropertyValueProxy& p ) { 
    prop_ = p.prop_; 
    id_ = p.id_; 
    return *this; 
  } 
   
  bool operator < ( const PropertyValueProxy& p ) const { 
    return prop_->get_value(id_) < p.prop_->get_value(id_);
  }    
 
  bool operator < ( const float val ) const { 
    return prop_->get_value(id_) < val;
  } 

 private: 
  GsTLGridProperty* prop_; 
  GsTLInt id_; 
 
  explicit PropertyValueProxy( GsTLGridProperty* prop, GsTLInt id ) 
    : prop_(prop), id_(id) {} 
}; 
 
/** Comparator to store  GsTLGridProperty pointer in STL container
 *
 */ 
struct compareGsTLGridProperty
{
  bool operator()(const GsTLGridProperty* p1,const GsTLGridProperty* p2) const
  {
    return p1->name() < p2->name();
  }
};

 /*
class GRID_DECL GsTLGridPropertyGroup {
public:
  typedef std::set<GsTLGridProperty*, compareGsTLGridProperty> property_set;
  GsTLGridPropertyGroup(){}
  GsTLGridPropertyGroup(std::string name):name_(name), type_("Undefined"), group_info_(""){}
  virtual ~GsTLGridPropertyGroup(){}

  virtual std::string name() {return name_;}
  virtual std::string type() {return type_;}

  int size() {return properties_.size();}

  bool add_property(GsTLGridProperty*);
  bool remove_property(GsTLGridProperty*);

  std::vector<GsTLGridProperty::property_type> get_vector_data( int node_id );

  property_set::iterator begin_property(){ return properties_.begin(); }
  property_set::iterator end_property() {  return properties_.end(); }

  std::string get_group_info() { return group_info_;}
  void set_group_info(const std::string& info_str) { group_info_ = info_str;};

protected :
  property_set properties_;
  std::string name_;
  std::string type_;

  std::string group_info_;
};
*/

 
//================================================= 
//   Definition of inline functions 
 
 
//--------------------------- 
//  GsTLGridProperty 
 
inline  
GsTLInt GsTLGridProperty::size() const {  
  return accessor_->size();  
} 
 
inline  
bool GsTLGridProperty::is_informed( GsTLInt id ) const { 
  if( id < 0 || id >= size() ) return false; 
  return ( accessor_->get_property_value( id ) != no_data_value ); 
} 
 
inline  
void GsTLGridProperty::set_not_informed( GsTLInt id ) { 
  accessor_->set_property_value( no_data_value, id ); 
} 
 
inline  
bool GsTLGridProperty::is_harddata( GsTLInt id ) const { 
  return accessor_->get_flag( 0, id ); 
} 
 
inline  
void GsTLGridProperty::set_harddata( bool flag, GsTLInt id ) { 
  accessor_->set_flag( flag, 0, id ); 
} 
 
inline  
void GsTLGridProperty::set_value( property_type val, GsTLInt id ) { 
  accessor_->set_property_value( val, id ); 
} 
 
inline GsTLGridProperty::property_type 
GsTLGridProperty::get_value( GsTLInt id ) const { 
  appli_assert( accessor_->get_property_value( id ) != no_data_value ); 
  return accessor_->get_property_value( id ); 
} 

/*inline GsTLGridProperty::property_type 
GsTLGridProperty::get_value_no_check( GsTLInt id ) const { 
  //appli_assert( accessor_->get_property_value( id ) != no_data_value ); 
  return accessor_->get_property_value( id ); 
} */

#ifdef SGEMS_ACCESSOR_LARGE_FILE

inline 
std::vector<float*> GsTLGridProperty::data()  { 
  return accessor_->data(); 
} 

inline 
const std::vector< float*> GsTLGridProperty::data() const { 
  return accessor_->data(); 
} 
/*
inline 
GsTLGridProperty::property_type** GsTLGridProperty::data()  { 
  return accessor_->data(); 
} 

inline 
const GsTLGridProperty::property_type* const* GsTLGridProperty::data() const { 
  return accessor_->data(); 
  }
  */
 
#else
inline 
GsTLGridProperty::property_type* GsTLGridProperty::data()  { 
  return accessor_->data(); 
} 

inline 
const GsTLGridProperty::property_type* GsTLGridProperty::data() const { 
  return accessor_->data(); 
} 
#endif
/*
inline 
GsTLGridProperty::property_type* GsTLGridProperty::data()  { 
  return accessor_->data(); 
} 

inline 
const GsTLGridProperty::property_type* GsTLGridProperty::data() const { 
  return accessor_->data(); 
} 
*/ 
 
inline 
bool GsTLGridProperty::is_inside_region(GsTLInt id) const {
  if(!region_) return true;
  return region_->is_inside_region( id );
}


inline 
void GsTLGridProperty::set_region(const GsTLGridRegion* region){
  region_ = region;
}

inline 
const GsTLGridRegion* GsTLGridProperty::get_region(){
  return region_;
}

inline 
const GsTLGridRegion* GsTLGridProperty::get_region() const{
  return region_;
}

/*
inline 
bool GsTLGridProperty::has_group_membership() const{
  return groups_.empty();
}
inline 
std::vector< std::pair<std::string,std::string> > GsTLGridProperty::group_ids() const{

}
inline 
std::vector<std::string > GsTLGridProperty::group_names() const{
  std::vector<std::string> names;
  std::vector< const GsTLGridPropertyGroup* >::const_iterator it = groups_.begin();
  for(; it != groups_.end(); ++it) {
    names.push_back( it->name() );
  }
  return names;
}

inline 
std::vector<std::string > GsTLGridProperty::group_types() const{
  std::vector<std::string> types;
  std::vector< const GsTLGridPropertyGroup* >::const_iterator it = groups_.begin();
  for(; it != groups_.end(); ++it) {
    types.push_back( it->type() );
  }
  return types;
}

inline 
const std::vector<const GsTLGridPropertyGroup*>& GsTLGridProperty::groups() const {
  return groups_;
}

inline 
bool GsTLGridProperty::add_group_membership(GsTLGridPropertyGroup* group) {
  std::vector< const GsTLGridPropertyGroup* >::iterator it = groups_.begin();
  std::string gname = group->name();
  for(; it != groups_.end(); ++it) {
    if(gname == it->name()) return false;
  }  
  groups_.push_back(group);
  return true;
}

inline bool 
GsTLGridProperty::remove_group_membership(GsTLGridPropertyGroup* group){
  std::vector< const GsTLGridPropertyGroup* >::iterator it = groups_.begin();
  std::string gname = group->name();
  for(; it != groups_.end(); ++it) {
    if(gname == it->name()) {
      groups_.erase(it);
      return true;
    }
  }  
  return false;
}
*/

//  end of GsTLGridProperty 
//--------------------------- 
 

//---------------------------------- 
//  GsTLGridProperty::iterator 
 
inline PropertyValueProxy  
GsTLGridProperty::iterator::operator * () { 
  return PropertyValueProxy( prop_, id_ ); 
} 
 
inline float
GsTLGridProperty::iterator::operator * () const { 
//  return prop_->get_value( id_ ); 
  return prop_->accessor_->get_property_value( id_ );
} 

inline GsTLGridProperty::iterator&  
GsTLGridProperty::iterator::operator ++ () { 
  id_++;
  if(id_ < max_id_ && skip_uninformed_) {
    while( !prop_->is_inside_region(id_) || !prop_->is_informed( id_ ) ) {
      id_++; 
      if( id_ == max_id_ ) break; 
    }
  } else if( id_ < max_id_ && !skip_uninformed_){ 
    while( !prop_->is_inside_region(id_) ) { 
      id_++; 
      if( id_ == max_id_ ) break; 
    } 
  } 
  //while( !prop_->is_informed( ++id_ ) && id_ < max_id_ ) {} 
  return *this; 
} 
 
inline GsTLGridProperty::iterator& 
GsTLGridProperty::iterator::operator ++ (int) { 
  id_++; 
  if(id_ < max_id_ && skip_uninformed_) {
    while( !prop_->is_inside_region(id_) || !prop_->is_informed( id_ ) ) {
      id_++; 
      if( id_ == max_id_ ) break; 
    }
  } else if( id_ < max_id_ && !skip_uninformed_){ 
    while( !prop_->is_inside_region(id_) ) { 
      id_++; 
      if( id_ == max_id_ ) break; 
    } 
  } 
  return *this; 
} 
 
inline bool  
GsTLGridProperty::iterator::operator == ( const iterator& it ) const { 
  return (prop_ == it.prop_) && (id_ == it.id_);  
} 
inline bool 
GsTLGridProperty::iterator::operator != ( const iterator& it ) const { 
  return (prop_ != it.prop_) || (id_ != it.id_);  
} 
 
inline GsTLGridProperty::iterator& 
GsTLGridProperty::iterator::operator = ( const iterator& it ) { 
  prop_ = it.prop_; 
  id_ = it.id_; 
  return *this; 
} 
 
 


inline float  
GsTLGridProperty::const_iterator::operator * () const { 
//  return prop_->get_value( id_ ); 
  return prop_->accessor_->get_property_value( id_ );
} 

inline GsTLGridProperty::const_iterator&  
GsTLGridProperty::const_iterator::operator ++ () { 
  id_++; 
  if(id_ < max_id_ && skip_uninformed_) {
    while( !prop_->is_inside_region(id_) || !prop_->is_informed( id_ ) ) {
      id_++; 
      if( id_ == max_id_ ) break; 
    }
  } else if( id_ < max_id_ && !skip_uninformed_){ 
    while( !prop_->is_inside_region(id_) ) { 
      id_++; 
      if( id_ == max_id_ ) break; 
    } 
  } 
  return *this; 
/*
  id_++; 
  if( id_ < max_id_ && skip_uninformed_ ) { 
    while( !prop_->is_informed( id_ ) ) { 
      id_++; 
      if( id_ == max_id_ ) break; 
    } 
  } 
  //while( !prop_->is_informed( ++id_ ) && id_ < max_id_ ) {} 
  return *this; 
  */
} 
 
inline GsTLGridProperty::const_iterator& 
GsTLGridProperty::const_iterator::operator ++ (int) { 
  id_++; 
  if(id_ < max_id_ && skip_uninformed_) {
    while( !prop_->is_inside_region(id_) || !prop_->is_informed( id_ ) ) {
      id_++; 
      if( id_ == max_id_ ) break; 
    }
  } else if( id_ < max_id_ && !skip_uninformed_){ 
    while( !prop_->is_inside_region(id_) ) { 
      id_++; 
      if( id_ == max_id_ ) break; 
    } 
  } 
  return *this; 
} 
 
inline bool  
GsTLGridProperty::const_iterator::operator == ( const const_iterator& it ) const { 
  return (prop_ == it.prop_) && (id_ == it.id_);  
} 
inline bool 
GsTLGridProperty::const_iterator::operator != ( const const_iterator& it ) const { 
  return (prop_ != it.prop_) || (id_ != it.id_);  
} 
 
inline GsTLGridProperty::const_iterator& 
GsTLGridProperty::const_iterator::operator = ( const const_iterator& it ) { 
  prop_ = it.prop_; 
  id_ = it.id_; 
  return *this; 
} 
 
 
#endif 
