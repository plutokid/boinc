// The contents of this file are subject to the BOINC Public License
// Version 1.0 (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://boinc.berkeley.edu/license_1.0.txt
//
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
// License for the specific language governing rights and limitations
// under the License.
//
// The Original Code is the Berkeley Open Infrastructure for Network Computing.
//
// The Initial Developer of the Original Code is the SETI@home project.
// Portions created by the SETI@home project are Copyright (C) 2002
// University of California at Berkeley. All Rights Reserved.
//
// Contributor(s):
//

#include "boinc_db.h"
#include "sched_config.h"
#include "synch.h"
#include "server_types.h"

extern SCHED_CONFIG config;
extern GUI_URLS gui_urls;
extern key_t sema_key;
extern int g_pid;
extern void lock_sema();
extern void unlock_sema();

extern void send_message(char*, int);
extern int open_database();
