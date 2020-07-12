<?php
/********************************************************

    conf/db_conf.php
    
	PURPOSE:
		Provide central location for configuring DB-related variables.
		This file replaces (or will replace) the mysqlrc.inc file.

********************************************************/

//kaotik add
$xoopsOption['nocommon'] = 1;
include '../../../mainfile.php';
//kaotik

//kaotik change
// DB connection/login info
$DB_HOST=XOOPS_DB_HOST;
$DB_USER=XOOPS_DB_USER;
$DB_PASSWORD=XOOPS_DB_PASS;

// database name
// ***REQUIRED***
$DB_NAME=XOOPS_DB_NAME;

// database brand
// ***REQUIRED***
$DB_TYPE="MySQL";

// Users table name
// ***REQUIRED***
$DB_USERS_TABLE = XOOPS_DB_PREFIX."_tropical_users";

// Sessions table name
// ***REQUIRED***
$DB_SESSIONS_TABLE = XOOPS_DB_PREFIX."_tropical_sessions";

// Contacts table name
$DB_CONTACTS_TABLE = XOOPS_DB_PREFIX."_tropical_contacts";

// Prefs table name
$DB_PREFS_TABLE = XOOPS_DB_PREFIX."_tropical_prefs";

// Colors table name
$DB_COLORS_TABLE = XOOPS_DB_PREFIX."_tropical_colors";

// Identities table name
$DB_IDENTITIES_TABLE = XOOPS_DB_PREFIX."_tropical_identities";

// Calendars table name
$DB_CALENDAR_TABLE = XOOPS_DB_PREFIX."_tropical_calendar";

// Bookmarks table name
$DB_BOOKMARKS_TABLE = XOOPS_DB_PREFIX."_tropical_bookmarks";

// Bookmarks table name
//		Optional: Comment out to use file based backend
$DB_CACHE_TABLE = XOOPS_DB_PREFIX."_tropical_cache";
//kaotik

// Log table name
//		Optional: Comment out to use file based backend
//$DB_LOG_TABLE = XOOPS_DB_PREFIX."_tropical_user_log";

// Use persistent connections
//		Optional: Set to 'true' to enable
$DB_PERSISTENT = false;

?>
