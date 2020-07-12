<?php
include("../lang/eng/main.inc"); // <-- do not delete
/********************************************************
	lang/tw/main.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>
	Simplified Chinese (GB2312), for use in China, 
	Singapore & Malaysia Chinese communities
	Translator: Danny Lin <danny@groopie.com>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

function formatStatusString($num, $folder, $type){
	$str="";
	if ($type=="delete"){
		$str = "ɾ�� $num ���ʼ�".($num>1?"":"");
	}else if ($type == "move"){
		$str = "���� $num ���ʼ�".($num>1?"":"")." �� $folder";
	}
	
	return $str;
}

$mainStrings[0] = "�Ķ����� %p ��/�� %n ��";
$mainStrings[1] = " ���ʼ�";
$mainStrings[2] = "��һ��";
$mainStrings[3] = " ��";
$mainStrings[4] = "��һ��";
$mainStrings[5] = " ��";
$mainStrings[6] = "�������";
$mainStrings[7] = "�ռ���";
$mainStrings[8] = "�ļ���";
$mainStrings[9] = "����";
$mainStrings[10] = "ɾ��";
$mainStrings[11] = "��ջ���վ";
$mainStrings[12] = "�ļ�";
$mainStrings[13] = "����";
$mainStrings[14] = "��С";
$mainStrings[15] = "δ����";
$mainStrings[16] = "��ʾ";
$mainStrings[17] = "�������";
$mainStrings[18] = "���";
$mainStrings[19] = "ȡ��";


$mainErrors[0] = "���ʼ�����û���κ��ʼ���";
$mainErrors[1] = "���ʼ�����û���κ��ʼ���";
$mainErrors[2] = "�޷������ʼ�������վ";
$mainErrors[3] = "�޷�����ʼ�Ϊ��ɾ����";
$mainErrors[4] = "�޷������ʼ���";
$mainErrors[5] = "��δָ������վ";
$mainErrors[6] = "�޷���ջ���վ";
$mainErrors[7] = "��ȷʵҪ��������� %f �е��ʼ���";



?>