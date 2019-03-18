/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02
 Fichier     : main.cpp
 Auteur(s)   : Thomas Ricci 
 Date        : March 15, 2019

 But         : Ce programme à pour but de tester la fonction générique de tri

 Remarque(s) : -
               
 Compilateur : gcc (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609
 -----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

#include "typeVoiture.h"
#include "Point.h"
#include "tri_g.h"

using namespace std;

//affiche un vecteur quelquonc sur la sortie standard
template <typename T>
std::ostream& operator<<(std::ostream& out, const vector<T>& v){
   out << "[";
   for(size_t i = 0; i < v.size(); ++i){
      out << v[i] << (i != (v.size()-1) ? ", " : "" );
   }
   out << "]";
   out << endl;
   return out;
}

//affiche un vecteur avec un certain format
template <typename T>
void afficherVecteur(vector<T>& v, const string& msg){
   cout << "==========================" << endl;
   cout << msg << endl;
   cout << v;
   tri(v);
   cout << "Après tri: " << endl;
   cout << v;
}

int main() {

   //trié:[1, 2, 3, 4, 4, 5, 9, 12, 61]
   vector<int> vint = { 1, 3, 4, 5, 61, 2, 4, 9, 12 };

   //trié:[aaaa, abba, autres, bbbb]
   vector<string> vstring = { "aaaa", "bbbb", "abba", "autres" };

   //trié:[Fiat, Honda, Mitsubishi]
   vector <TypeVoiture> vtypevoit = { TypeVoiture::Fiat,  TypeVoiture::Mitsubishi, 
                                      TypeVoiture::Honda };
   
   //trié:[Point(0,0), Point(1,0), Point(0,1), Point(2,1), Point(10,5), Point(0,12)]
   vector <Point> vpoint = { Point(0,0), Point(10,5), Point(0,12), 
                             Point(1,0), Point(0,1), Point(2,1) };

   vector<int> vide = { };

   vector<int> vtrier = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

   afficherVecteur(vide, "Vecteur vide: ");

   afficherVecteur(vtrier, "Vecteur pre-trier: ");

   afficherVecteur(vint, "Vecteur d'entiers: ");
   
   afficherVecteur(vtypevoit, "Vecteur de type de voiture: ");

   afficherVecteur(vstring, "Vecteur de string: ");

   afficherVecteur(vpoint, "Vecteur de point: ");
   
   cout << "Appuyer sur une touche pour continuer...";
   cin.get();
   return EXIT_SUCCESS;
}
