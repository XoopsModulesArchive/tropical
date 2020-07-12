<?php
include("../lang/eng/search.inc"); // <-- do not delete
/********************************************************
	lang/eng/search.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>
	Traditional Chinese (BIG5), for use in Taiwan, 
	Hong Kong, and Overseas Chinese communities
	Translator: Danny Lin <danny@groopie.com>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

	//TRANSLATORS:
	//in the follow arrays, translate key, not value
	//i.e.  translate "From" not "FROM".
	$search_fields=array("���"=>"-", "�H��H"=>"FROM", "����H"=>"TO", "�H����D"=>"SUBJECT","�H�󥻤�"=>"BODY");
	$search_dates=array("����"=>"ignore", "����"=>"ON", "�b�������"=>"SINCE", "�b������e"=>"BEFORE");

	$search_str["title"] = "�j�M";
	$search_str["str"] = "�j�M��<b>%folders</b>�H��X��<br>\n";
	$search_str["str"] .= "�b<b>%fields</b>��줤�]�t<b>%value</b>�r��<br>\n";
	$search_str["str"] .= "�åB�o�H�����<b>%dateops %y�~%m��%d��</b> ���H��<br>\n";
	$search_str["submit"] = "�ߧY�j�M";
?>