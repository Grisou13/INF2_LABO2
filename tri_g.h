/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02
 Fichier     : tri_g.h
 Auteur(s)   : RICCI Thomas <thomas.ricci@heig-vd.ch>
 Date        : March 15, 2019

 But         : Fonction générique pour trier un vector quelquonc

 Remarque(s) : 

 Compilateur : gcc (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609
 -----------------------------------------------------------------------------------
 */
#include <vector>

#ifndef TRI_G_H
#define TRI_G_H

/*
 * Tri un vecteur en bubble sort
 * Modifie le vecteur d'entrée en le triant par ordre croissant
 * Les éléments du vecteurs doivent implementer l'oprateur ">"
*/
template <typename T>
void tri(std::vector<T>& v){
   //bubble sort
   int i, j;
   for (i = 0; i < (int)v.size() - 1; i++)    
      for (j = 0; j < (int)v.size() - i - 1; j++) 
         if (v[j] > v[j+1])
            std::swap(v[j], v[j+1]);
}

#endif