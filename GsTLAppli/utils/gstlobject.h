/**********************************************************************
** Author: Nicolas Remy
** Copyright (C) 2002-2004 The Board of Trustees of the Leland Stanford Junior
**   University
** All rights reserved.
**
** This file is part of the "utils" module of the Geostatistical Earth
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

#ifndef __GSTLAPPLI_UTILS_GSTLOBJECT_H__ 
#define __GSTLAPPLI_UTILS_GSTLOBJECT_H__ 
 
#include <GsTLAppli/utils/common.h>
#include <string> 
 
/* This class is not used anymore and will be removed from the code
* in a future release.
*/
class UTILS_DECL GsTLObject { 
public: 
    GsTLObject() {} 
    GsTLObject(const std::string& name) { name_ = name;} 
    virtual ~GsTLObject() {} 
 
    const std::string& name() const { 
        return name_; 
    } 
 
    void set_name(const std::string& name) { 
        name_ = name; 
    } 
 
protected: 
    std::string name_; 
}; 
 
 
#endif 
