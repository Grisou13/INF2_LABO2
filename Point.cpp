/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 -----------------------------------------------------------------------------------
 Laboratoire : <nn>
 Fichier     : Point.cpp
 Auteur(s)   : RICCI Thomas <thomas.ricci@heig-vd.ch>
 Date        : February 22, 2019, 10:45 AM

 But         : <à compléter>

 Remarque(s) : <à compléter>

 Compilateur : gcc (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609
 -----------------------------------------------------------------------------------
 */


#include "Point.h"
#include <sstream>
#include <cmath>

#define PI 3.14159265

using namespace std;
Point::Point(double x, double y): x(x), y(y) {
   
}


Point* Point::translate(double x, double y){
   this->x += x;
   this->y += y;
   return this;
}

Point operator +(const Point& lhs, const Point& rhs){
   lhs += rhs;
   return lhs;
}
Point operator +=(const Point& lhs, const Point& rhs){
   Point t(0,0);
   t.x = lhs.x + rhs.x;
   t.y = lhs.y + rhs.y;
   return t;
}

double Point::theta() const{
   if(x > 0 && y >= 0){
      return atan(y/x);
   }
   else if(x > 0 && y < 0){
      return atan(y/x) + 2*PI;
   }
   else if(x < 0){
      return atan(y/x) + PI;
   }
   else if(y < 0){
      return - PI / 2;
   }
   
   return PI / 2;
}

double Point::rho() const{
   return hypot(x, y);
}

double Point::abscisse() const{
   return x;
}

double Point::ordonnee() const{
   return y;
}

ostream& operator<<(std::ostream& out, const Point& point){
   out << "Point(" << point.x << "," << point.y << ")";
   return out;
}


