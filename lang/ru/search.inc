<?php
include("../lang/eng/search.inc"); // <-- do not delete
/********************************************************
	lang/eng/search.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

	//TRANSLATORS:
	//in the follow arrays, translate key, not value
	//i.e.  translate "From" not "FROM".
	$search_fields=array("select"=>"-", "��"=>"FROM", "����"=>"TO", "����"=>"SUBJECT","����� ������"=>"BODY");
	$search_dates=array("�� �����"=>"ignore", "�"=>"ON", "�����"=>"SINCE", "��"=>"BEFORE");

	$search_str["title"] = "�����";
	$search_str["str"] = "����� � ����� %folders <br>\n";
	$search_str["str"] .= "��� ���� %fields �������� %value <br>\n";
	$search_str["str"] .= "� ���� %dateops %m/%d/%y <br>\n";
	$search_str["submit"] = "������";
?>