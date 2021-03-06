<?php
include("../lang/eng/dates.inc"); // <-- do not delete
/********************************************************
	lang/jp/dates.inc
	(C) 2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/
$lang_months[1] = "����";
$lang_months[2] = "����";
$lang_months[3] = "����";
$lang_months[4] = "����";
$lang_months[5] = "����";
$lang_months[6] = "����";
$lang_months[7] = "����";
$lang_months[8] = "����";
$lang_months[9] = "����";
$lang_months[10] = "������";
$lang_months[11] = "������";
$lang_months[12] = "������";

$lang_datetime["short_mon"] = $lang_months;			

$lang_datetime["dsow"] = array ("��","��","��","��","��","��","��");
$lang_datetime["dsowl"] = array ("��","��","��","��","��","��","��");
$lang_datetime["dsow_short"] = array ("��","��","��","��","��","��","��");

$lang_datetime["today"] = "���� %t";
$lang_datetime["lastweek"] = "%t (%w)";
$lang_datetime["thisyear"] = "%m��%d��";
$lang_datetime["prevyears"] = "%yǯ%m��%d��";
$lang_datetime["monthyear"] = "%yǯ%m";
$lang_datetime["dsow_short"] = $lang_datetime["dsow"];
$lang_datetime["verbal"] = "%yǯ%m%d��";  	//e.g. "Jan 1, 1900"
$lang_datetime["verbal_short"] = "%m%d��";  	//e.g. "Jan 1"
$lang_datetime["hour_system"] = 12;			// 12 or 24
$lang_datetime["ampm"]["am"] = "am";
$lang_datetime["ampm"]["pm"] = "pm";
$lang_datetime["time_format"] = "%h:%m%a";	// %h=hour, %m=minutes, %a="am:pm"
$lang_datetime["hour_format"] = "%h%a";

?>