/**********************************************************************
** Author: Nicolas Remy
** Copyright (C) 2002-2004 The Board of Trustees of the Leland Stanford Junior
**   University
** All rights reserved.
**
** This file is part of the "math" module of the Geostatistical Earth
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

#ifndef __GSTLAPPLI_MATH_RANDOM_NUMBER_H__ 
#define __GSTLAPPLI_MATH_RANDOM_NUMBER_H__ 
 
#include <GsTLAppli/math/common.h>
#include <GsTLAppli/utils/singleton_holder.h> 
 
#include <GsTL/math/random_number_generators.h> 
 
 
/** Define a singleton for generating random numbers. Having all the random numbers 
 * generated by a single generator make controlling the random sequence easy. 
 */ 
//MATH_DECL typedef Singleton_holder<Rand48_generator> Global_random_number_generator; 
class MATH_DECL Global_random_number_generator { 
public:
  static Rand48_generator* instance(); 
 
private: 
  static Rand48_generator* instance_; 
 
  Global_random_number_generator(); 
  Global_random_number_generator(const Global_random_number_generator&); 
  Global_random_number_generator& operator=(const Global_random_number_generator&); 
};
 

/** This class is just a wrapper that makes the random number generator simgleton 
 * compliant with the GsTL requirements for a RandomNumberGenerator 
 * Any instance of a Random_number_generator uses the same "global" generator 
 */ 
class MATH_DECL Random_number_generator { 
 public: 
  typedef Rand48_generator::return_type return_type; 
   
 public: 
   return_type operator()();
   static long int called() { return calls_; }
   static void reset() { calls_ = 0;}

 private:
   static long int calls_;
}; 

/*
inline Random_number_generator::return_type 
Random_number_generator::operator()() { 
  return Global_random_number_generator::instance()->operator()(); 
} 
*/
 
 
 
 
/** A wrapper for the global random number generator that is compatible 
 * with the STL requirements 
 */ 
class MATH_DECL STL_generator { 
 public: 
  typedef int argument_type; 
  typedef argument_type return_type; 
   
 public: 
   return_type operator()( argument_type N );
   static void reset() { calls_ = 0;}
   static long int called() { return calls_; }

 private:
   static long int calls_;
}; 

/*
inline STL_generator::return_type 
STL_generator::operator()( argument_type N ) { 
  double p = Global_random_number_generator::instance()->operator()(); 
  return static_cast<argument_type>( p * double(N) ); 
} 
*/

#endif 
