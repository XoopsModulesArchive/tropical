<?php
/********************************************************
	lang/si/folders.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

	//TRANSLATORS:  Uncomment next line for all non-English languages!!
	//include("../lang/eng/folders.inc");

	$fl_str["folders"] = "Mape";
	$fl_str["manage"] = "Urejanje map";
	
	$sentbox=$my_prefs["sent_box_name"];
	$trashname=$my_prefs["trash_name"];
	$defaults["INBOX"] = "Prejeto";
	$defaults[$sentbox] = "Poslano";
	$defaults[$trashname] = "Smeti";
	$fstr["reload"] = "reload";
	$fstr["expunge"] = "expunge";

?>