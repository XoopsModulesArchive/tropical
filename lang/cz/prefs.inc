<?php
/********************************************************
	lang/eng/prefs.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

//TRANSLATORS:  Uncomment next line for all non-English languages!!
include("../lang/eng/prefs.inc");

$prefHeaderStrings[0] = "Nastaven�";
$prefHeaderStrings[1] = "Hlavn�";
$prefHeaderStrings[3] = "Identity";
$prefHeaderStrings[2] = "Vzhled";

											
$prefsStrings["0.0"] = "V�choz� identita";
$prefsStrings["0.1"] = "Jm�no: ";
$prefsStrings["0.2"] = "Email: ";
$prefsStrings["0.3"] = "Zm�ny m��ete prov�d�t na str�nce \"%s\".";
$prefsStrings["0.4"] = "Neuvedeno";
$prefsStrings["1.0"] = "N�rodn� nastaven�";
$prefsStrings["1.1"] = "Jazyk rozhran�: ";
$prefsStrings["1.2"] = "Znakov� sada: ";
$prefsStrings["1.3"] = "�asov� z�na: ";
$prefsStrings["1.4"] = "Zobrazen� �asu: ";
$prefsStrings["1.5"] = array(12=>"12 hod. �as", 24=>"24 hod. �as");
$prefsStrings["2.0"] = "Nastaven� pohledu seznam";
$prefsStrings["2.1"] = "Zobrazit a� ";
$prefsStrings["2.2"] = " polo�ek";
$prefsStrings["2.3"] = "Zobrazit velikost";
$prefsStrings["2.4"] = "T��dit podle: ";
$prefsStrings["2.5"] = "";
$prefsStrings["2.6"] = "Po�ad� �azen�: ";
$prefsStrings["2.7"] = "";
$prefsStrings["2.8"] = "Nastaven� seznamu schr�nek";
$prefsStrings["2.9"] = "���ka seznamu";
$prefsStrings["2.10"] = "Kontrolovat nov� zpr�vy ka�d�ch %n vte�in";
$prefsStrings["2.11"] = "Zobrazit panel n�stroj� %m";
$prefsStrings["2.12"] = array("b"=>"dole", "t"=>"naho�e", "bt"=>"naho�e i dole");
$prefsStrings["2.13"] = "P�euspo��dat sloupce: ";
$prefsStrings["2.14"] = "klepn�te sem";
$prefsStrings["3.0"] = "Nastaven� automatick�ho ukl�d�n�";
$prefsStrings["3.1"] = "Ukl�dat odeslan� zpr�vy.";
$prefsStrings["3.2"] = "Ukl�dat odeslan� do schr�nky: ";
$prefsStrings["3.3"] = "";
$prefsStrings["3.4"] = "Automaticky vypr�zdnit ko�";
$prefsStrings["3.5"] = "P�esunout vymazan� do schr�nky: ";
$prefsStrings["3.6"] = "";
$prefsStrings["3.7"] = "Ko�enov� slo�ka: ";
$prefsStrings["3.8"] = "Jin�";
$prefsStrings["3.9"] = "Skr�t neaktivovan� schr�nky";
$prefsStrings["3.10"] = "Zobrazit kv�tu %m";
$prefsStrings["3.11"] = array(""=>"nezobrazovat", "m"=>"v seznamu zpr�v", "f"=>"v seznamu schr�nek");
$prefsStrings["4.0"] = "Nastaven� zobrazen� zpr�vy";
$prefsStrings["4.1"] = "Zobrazovat v r�me�ku";
$prefsStrings["4.2"] = "Obarvovat odsazen�";
$prefsStrings["4.3"] = "Zapnut� t�chto voleb m��e zpomalit syst�m.";
$prefsStrings["4.4"] = "P�ev�d�t URL na odkazy";
$prefsStrings["4.5"] = "Zobrazovat HTML zpr�vy";
$prefsStrings["4.6"] = "Zobrazovat obr�zky ve zpr�v�";
$prefsStrings["4.7"] = "Zobrazovat naviga�n� odkazy";
$prefsStrings["4.8"] = "Neozna�ovat zpr�vy p�i proch�zen�";
$prefsStrings["5.0"] = "Podpis";
$prefsStrings["5.1"] = "Zobrazovat podpisy";
$prefsStrings["5.2"] = "";
$prefsStrings["6.0"] = "Vytv��en� zpr�v";
$prefsStrings["6.1"] = "Zobrazit kontakty";
$prefsStrings["6.2"] = "Zobrazit CC/BCC polo�ky";
$prefsStrings["6.3"] = "Zav��t po odesl�n�";
$prefsStrings["6.4"] = "Vytvo�en� zpr�v uvnit� r�me�ku";
$prefsStrings["7.0.0"] = "Nastaven� disku &amp; schr�nek";
$prefsStrings["7.0.1"] = "Nastaven� kv�ty";
$prefsStrings["7.1"] = "Zobraz po�et nep�e�ten�ch zpr�v";
$prefsStrings["7.2"] = "Obnovit seznam schr�nek ka�d�ch %n vte�in";

$pref_col_title = "Uspo��d�n� sloupc�";
$pref_colstr["order"] = "Po�ad�";
$pref_colstr["field"] = "Polo�ka";
$pref_col_label['c'] = "Za�krt�vac� pol��ko";
$pref_col_label['a'] = "P��lohy";
$pref_col_label['m'] = "P��znaky/stav";

$sort_fields=array("DATE"=>"Datumu", "SUBJECT"=>"P�edm�tu", "SIZE"=>"Velikosti");
$sort_orders=array("ASC"=>"Vzestupn�", "DESC"=>"Sestupn�");

$prefsButtonStrings = array( 0=> "Ulo�it", 1=>"Pou��t", 2=> "Zru�it", 3=> "V�choz� nastaven�");

$prefs_new_user = "Zd� se �e jste se sem p�ihl�sili poprv�...v�tejte!<br>";
$prefs_new_user .= "Pros�m projd�te si n�sleduj�c� nastaven�, pot� klepn�te na \"Pou��t\"";
?>