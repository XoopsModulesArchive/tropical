<?php
/********************************************************
	lang/eng/compose.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

//TRANSLATORS:  Uncomment next line for all non-English languages!!
include("../lang/eng/compose.inc");

$composeHStrings[0] = "P�edm�t";
$composeHStrings[1] = "Od";
$composeHStrings[2] = "Komu";
$composeHStrings[3] = "Kopie";
$composeHStrings[4] = "Skryt� kopie";
$composeHStrings[5] = "Datum";


$composeStrings[0] = "Vytvo�en� zpr�vy";
$composeStrings[1] = "Odeslat zpr�vu";
$composeStrings[2] = "P�ipojit";
$composeStrings[3] = "P�ipojit podpis";
$composeStrings[4] = "P��loha";
$composeStrings[5] = "Kontakty";
$composeStrings[6] = "Skr�t kontakty";
$composeStrings[7] = "Text zpr�vy:";
$composeStrings[8] = "P�idat";
$composeStrings[9] = "Dne %d, napsal %s:\n";
$composeStrings[10] = "--- P�vodn� zpr�va ---\n";
$composeStrings[11] = "Zav��t okno";

$composeStrings[12] = "Kontrola pravopisu";
$composeStrings[13] = "Opravit pravopis";
$composeStrings[14] = "Beze zm�n";
$composeStrings[15] = "Mo�n� chyby p�i kontrole pravopisu";
$composeStrings[16] = "Zm�ny v pravopisu";
$composeStrings[17] = "ignorovat";
$composeStrings[18] = "smazat";

$composeStrings["title"] = "Vytvo�en� zpr�vy";

$composeErrors[0] = "Pole P�edm�t je pr�zdn�. Pros�m vlo�te P�edm�t nebo op�t klepn�te na \"".$composeStrings[1]."\" pro odesl�n� zpr�vy.";
$composeErrors[1] = "Pole \"Od\" je pr�zdn�. Pros�m vlo�te svou emailovou adresu.";
$composeErrors[2] = "Pole \"Komu\" je pr�zdn�. Pros�m vlo�te emailovou adresu p��jemce.";
$composeErrors[3] = "Upload souboru selhal.";
$composeErrors[4] = "��dn� soubory .";
$composeErrors[5] = "Kv�li prevenci p�ed SPAMem, m��ete odeslat zpr�vu %1 lidem (celkem %2 na jedno p�ihl�en�) ka�d�ch %3 vte�in.";

$composeErrors[6] = "Kontrola pravopisu neshledala ��dn�ch chyb.";
$composeErrors[7] = "Kontrola pravopisu pro uveden� jazyk nen� dostupn�.";
$composeErrors[8] = "(pou�it� slovn�k: %s)";
?>