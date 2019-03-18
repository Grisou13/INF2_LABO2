/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02
 Fichier     : typeVoiture.cpp
 Auteur(s)   : RICCI Thomas <thomas.ricci@heig-vd.ch>
 Date        : March 15, 2019

 But         : 

 Remarque(s) : 

 Compilateur : gcc (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609
 -----------------------------------------------------------------------------------
 */

#include <iostream>
#include "typeVoiture.h"

using namespace std;
// Affiche un Type de voiture
ostream& operator<<(ostream& out, const TypeVoiture& type){
   out << NomType[(size_t)type];
   return out;
}