/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02
 Fichier     : Point.cpp
 Auteur(s)   : RICCI Thomas <thomas.ricci@heig-vd.ch>
 Date        : March 15, 2019

 But         : Implementation de la classe Point

 Remarque(s) : 

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

bool operator==(const Point& lhs, const Point& rhs){
    return (lhs.x == rhs.x) and (lhs.y == rhs.y);
}
bool operator<(const Point& lhs, const Point& rhs){
    return lhs.rho() < rhs.rho();
}
bool operator<=(const Point& lhs, const Point& rhs){
    return !(lhs > rhs);
}
bool operator>(const Point& lhs, const Point& rhs){
    return rhs < lhs;
}
bool operator>=(const Point& lhs, const Point& rhs){
    return !(lhs < rhs);
}
bool operator!=(const Point& lhs, const Point& rhs){
    return !(lhs == rhs);
}
