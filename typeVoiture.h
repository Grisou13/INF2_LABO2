/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02
 Fichier     : typeVoiture.h
 Auteur(s)   : RICCI Thomas <thomas.ricci@heig-vd.ch>
 Date        : March 15, 2019

 But         : 

 Remarque(s) : 

 Compilateur : gcc (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609
 -----------------------------------------------------------------------------------
 */
#include <string>

#ifndef VOITURE_H
#define VOITURE_H

enum class TypeVoiture { Fiat, Honda, Mitsubishi, Audi, BMW };

std::string const NomType[] = { "Fiat", "Honda", "Mitsubishi", "Audi", "BMW" };
std::ostream& operator<<(std::ostream& out, const TypeVoiture& type);

#endif