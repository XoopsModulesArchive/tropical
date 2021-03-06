<?php
include("../lang/eng/prefs.inc"); // <-- do not delete
/********************************************************
	lang/hu/prefs.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

$prefHeaderStrings[0] = "Be�ll�t�sok";
$prefHeaderStrings[1] = "�ltal�nos";
$prefHeaderStrings[2] = "Szinek";
$prefHeaderStrings[3] = "Azonos�t�k";

											
$prefsStrings["0.0"] = "Szem�lyes adatok";
$prefsStrings["0.1"] = "N�v: ";
$prefsStrings["0.2"] = "Email: ";
$prefsStrings["0.3"] = "A \"%s\" oldal megv�ltoztathat�.";
$prefsStrings["0.4"] = "Nincs megadva";
$prefsStrings["1.0"] = "Nemzetk�zi";
$prefsStrings["1.1"] = "Nyelv: ";
$prefsStrings["1.2"] = "Karakterk�szlet: ";
$prefsStrings["1.3"] = "Id�z�na: ";
$prefsStrings["1.4"] = "�ra be�ll�t�s: ";
$prefsStrings["1.5"] = array(12=>"12 �r�s", 24=>"24 �r�s");
$prefsStrings["2.0"] = "Megjelen�t�si v�laszt�sok";
$prefsStrings["2.1"] = "Mutasson ";
$prefsStrings["2.2"] = " �zenetet";
$prefsStrings["2.3"] = "M�ret mutat�sa";
$prefsStrings["2.4"] = "Sorrend: ";
$prefsStrings["2.5"] = "";
$prefsStrings["2.6"] = "Rendez�s: ";
$prefsStrings["2.7"] = "";
$prefsStrings["2.8"] = "Mapp�k list�j�nak mutat�sa";
$prefsStrings["2.9"] = "Mappa lista sz�less�ge";
$prefsStrings["2.10"] = "�j �zenetek keres�se %n m�sodpercenk�nt";
$prefsStrings["2.11"] = "Eszk�zt�r mutat�sa: %m";
$prefsStrings["2.12"] = array("b"=>"lent", "t"=>"fent", "bt"=>"lent �s fent is");
$prefsStrings["2.13"] = "Oszlopok �trendez�se: ";
$prefsStrings["2.14"] = "kattints ide";
$prefsStrings["3.0"] = "Automatikus ment�s be�ll�t�sa";
$prefsStrings["3.1"] = "K�ld�tt �zenetek ment�se.";
$prefsStrings["3.2"] = "K�ld�tt �zenetek ment�se az al�bbi mapp�ban: ";
$prefsStrings["3.3"] = "";
$prefsStrings["3.4"] = "szemetes automatikus �r�t�se ";
$prefsStrings["3.5"] = "T�r�lt �zenetek �thelyez�se: ";
$prefsStrings["3.6"] = "";
$prefsStrings["3.7"] = "Alap-mappa: ";
$prefsStrings["3.8"] = "Egy�b";
$prefsStrings["3.9"] = "Feliratkoz�s n�lk�li mapp�k elrejt�se";
$prefsStrings["3.10"] = "Kv�ta mutat�sa %m";
$prefsStrings["3.11"] = array(""=>"ne mutassa", "m"=>"mutassa az �zenetekn�l", "f"=>"mutassa a mapp�kn�l");
$prefsStrings["4.0"] = "�zenet megtekint�si v�laszt�sok";
$prefsStrings["4.1"] = "Keretben megtekinteni";
$prefsStrings["4.2"] = "Id�z�s szinez�se";
$prefsStrings["4.3"] = "Ez a v�laszt�s lelass�tja a rendszert.";
$prefsStrings["4.4"] = "URL cimekb�l linkek k�sz�t�se";
$prefsStrings["4.5"] = "HTML �zenet mutat�sa ";
$prefsStrings["4.6"] = "K�p bels� mutat�sa";
$prefsStrings["4.7"] = "Navig�ci�s linkek mutat�sa";
$prefsStrings["4.8"] = "Ne jel�lje ki a leveleket visszl�p�skor";
$prefsStrings["5.0"] = "Al��r�s";
$prefsStrings["5.1"] = "Alap�rtelmezett al��r�s hozz�ad�sa";
$prefsStrings["5.2"] = "";
$prefsStrings["6.0"] = "�j �zenet";
$prefsStrings["6.1"] = "C�mjegyz�k mutat�sa";
$prefsStrings["6.2"] = "CC/BCC mez�k mutat�sa";
$prefsStrings["6.3"] = "Bez�r�s k�ld�s ut�n";
$prefsStrings["6.4"] = "�zenet szerkeszt�s ugyanabban az ablakban";
$prefsStrings["7.0.0"] = "Lemez �s mapa be�ll�t�sok";
$prefsStrings["7.0.1"] = "Kv�ta be�ll�t�sok";
$prefsStrings["7.1"] = "Olvasatlan �zenetek sz�m�nak mutat�sa";
$prefsStrings["7.2"] = "Mappa lista friss�t�se %n m�sodpercenk�nt";


$sort_fields=array("DATE"=>"D�tum", "SUBJECT"=>"T�ma", "SIZE"=>"M�ret");
$sort_orders=array("ASC"=>"Felfele", "DESC"=>"Lefele");

$prefsButtonStrings = array( 0=> "Naprak�sz �llapotba hoz", 1=>"Alkalmaz", 2=> "T�r�l", 3=> "Alap�rtelmezett �rt�kek");

$prefs_new_user = "Ugy t�nik, hogy el�sz�r jelentkezett be... �dv�z�lj�k!<br>";
$prefs_new_user .= "K�rj�k, hogy menjen v�gig az al�bbi be�ll�t�sokon, majd nyomja meg az \"Alkalmaz\" gombot!";
?>