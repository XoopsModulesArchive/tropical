<?php
/******************************
 # Tropical Mail
 #       
 # Created by KaotiK
/******************************/


$modversion['name'] = "Tropical Mail";
$modversion['version'] = 0.5;
$modversion['description'] = "Add 1 cup of webmailfx, 1 cup of iloha mail, shake well and serve cold. This is Phase 1 of this project.";
$modversion['author'] = "KaotiK";
$modversion['credits'] = "KaotiK and Flyingtux";
$modversion['help'] = "";
$modversion['license'] = "GPL see LICENSE";
$modversion['official'] = 0;
$modversion['image'] = "images/tropical.png";
$modversion['dirname'] = "tropical";

$modversion['sqlfile']['mysql'] = "sql/mysql.sql";

$modversion['tables'][0] = "tropical_users";
$modversion['tables'][1] = "tropical_contacts";
$modversion['tables'][2] = "tropical_bookmarks";
$modversion['tables'][3] = "tropical_sessions";
$modversion['tables'][4] = "tropical_colors";
$modversion['tables'][5] = "tropical_prefs";
$modversion['tables'][6] = "tropical_user_log";
$modversion['tables'][7] = "tropical_calendar";
$modversion['tables'][8] = "tropical_identities";
$modversion['tables'][9] = "tropical_cache";

// Admin things
$modversion['hasAdmin'] = 1;
$modversion['adminindex'] = "admin/index.php";
$modversion['adminmenu'] = "admin/menu.php";

// Menu
$modversion['hasMain'] = 1;
$modversion['sub'][1]['name'] = "Accounts";
$modversion['sub'][1]['url'] = "index.html";
?>
