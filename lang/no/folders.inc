<?php
include("../lang/eng/folders.inc"); // <-- do not delete
/********************************************************
	lang/no/folders.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

	Translated by Tor Olsen <tor@monet.no>
********************************************************/

#	echo "<p><b>Mapper</b>\n";
#	echo "<br>[<a href=\"edit_folders.php?user=".$user."\" target=\"list2\">H�ndtere mapper</a>]";
#	echo "<br><br>";
	$fl_str["folders"] = "Mapper";
	$fl_str["manage"] = "H�ndter mapper";

	$sentbox=$my_prefs["sent_box_name"];
	$trashname=$my_prefs["trash_name"];
	$defaults["INBOX"] = "Innboks";
	$defaults[$sentbox] = "Sendt";
	$defaults[$trashname] = "S�ppel";
	$fstr["reload"] = "last nytt";
	$fstr["expunge"] = "t�m";

?>