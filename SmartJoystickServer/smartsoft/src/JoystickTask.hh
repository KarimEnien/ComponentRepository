//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Christian Schlegel (schlegel@hs-ulm.de)
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------

// --------------------------------------------------------------------------
//
//  Copyright (C) 2003 Boris Kluge
//
//        schlegel@hs-ulm.de
//
//        Prof. Dr. Christian Schlegel
//        University of Applied Sciences
//        Prittwitzstr. 10
//        D-89075 Ulm
//        Germany
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// --------------------------------------------------------------------------


#ifndef _JOYSTICKTASK_HH
#define _JOYSTICKTASK_HH

#include "JoystickTaskCore.hh"

#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include "linux/joystick.h"

#include <CommBasicObjects/CommTimeStamp.hh>
#include <CommBasicObjects/CommJoystick.hh>
	
class JoystickTask  : public JoystickTaskCore
{

public:
	JoystickTask(SmartACE::SmartComponent *comp);
	virtual ~JoystickTask();
	
	virtual int on_entry();
	virtual int on_execute();
	virtual int on_exit();

	virtual int getPreviousCommObjId();
private:
	Smart::StatusCode status;
	CommBasicObjects::CommJoystick js;
	CommBasicObjects::CommTimeStamp last_push_time, now;

	static const unsigned int DATA_SIZE = 8;
	js_event js_data[DATA_SIZE];

	static const unsigned int BUFFER_SIZE = 256;
	char buffer[BUFFER_SIZE];

	int js_fd;
	fd_set js_fd_set;
	int select_status;

	bool data_changed;

};

#endif
