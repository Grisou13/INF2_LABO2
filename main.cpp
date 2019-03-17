/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02
 Fichier     : main.cpp
 Auteur(s)   : Thomas Ricci 
 Date        : 15.03.2019

 But         : Ce programme a pour but de tester la fonction générique de tri

 Remarque(s) : -
               
 Compilateur : - GCC-g++ (Ubuntu 16.04) 5.4.0
 -----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

#include "voiture.h"
#include "Point.h"

using namespace std;

template <typename T>
std::ostream& operator<<(std::ostream& out, const vector<T>& v){
   out << "[";
   T last = v.back();
   for(T a : v){
      
      out << (a) << (a != last ? ", " : "" );
   }
   out << "]";
   out << endl;
   return out;
}
//override pour les type de voiture car c'est un type énuméré
/*template <>
std::ostream& operator<<(std::ostream& out, const vector<TypeVoiture>& v){
   out << "[";
   TypeVoiture last = v.back();
   for(TypeVoiture a : v){
      
      out << NomType[(size_t)a] << (a != last ? ", " : "" );
   }
   out << "]";
   out << endl;
   return out;
}*/

std::ostream& operator<<(std::ostream& out, const TypeVoiture& type){
   out << NomType[(size_t)type];
   return out;
}

bool operator>(const Point& lhs, const Point& rhs){
   return lhs.rho() > rhs.rho();
}
bool operator!=(const Point& lhs, const Point& rhs){
   return lhs.rho() != rhs.rho();
}

template <typename T> 
void tri(vector<T>& v){
   //bubble sort
   size_t i, j;
   for (i = 0; i < v.size() - 1; i++)    
      for (j = 0; j < v.size()-i-1; j++) 
         if (v[j] > v[j+1])
            swap(v[j], v[j+1]);
}

int main() {
   vector<int> vint = {1,3,4,5,61,2,4,9,12};
   vector<string> vstring= {"ta mere", "la pute", "de", "roumanie"};
   vector <TypeVoiture> vtypevoit = { TypeVoiture::Fiat,  TypeVoiture::Mitsubishi, TypeVoiture::Honda };
   vector <Point> vpoint = { Point(0,0), Point(10,5), Point(0,12), Point(1,0), Point(0,1), Point(2,1) };
   cout << vint;
   tri(vint);
   cout << vint;
   
   cout << vtypevoit;
   tri(vtypevoit);
   cout << vtypevoit;

   cout << vstring;
   tri(vstring);
   cout << vstring;

   cout << vpoint;
   tri(vpoint);
   cout << vpoint;
   
   // cout << "Appuyer sur une touche pour continuer...";
   // cin.get();
   return EXIT_SUCCESS;
}
