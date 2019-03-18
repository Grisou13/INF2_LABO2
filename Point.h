/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02
 Fichier     : Point.h
 Auteur(s)   : RICCI Thomas <thomas.ricci@heig-vd.ch>
 Date        : March 15, 2019

 But         : Modélise un point du plan.

 Remarque(s) : 

 Compilateur : gcc (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609
 -----------------------------------------------------------------------------------
 */

#include <string>
#include <iostream>
#ifndef POINT_H
#define POINT_H

class Point {
public:
   Point(double x, double y);
      
   double abscisse() const;
   double ordonnee() const;
   
   double theta() const;
   double rho() const;

   // opérateurs de comnparaison
   friend bool operator==(const Point& lhs, const Point& rhs);
   friend bool operator<(const Point& lhs, const Point& rhs);
   friend bool operator<=(const Point& lhs, const Point& rhs);
   friend bool operator>(const Point& lhs, const Point& rhs);
   friend bool operator>=(const Point& lhs, const Point& rhs);
   friend bool operator!=(const Point& lhs, const Point& rhs);

   friend std::ostream& operator<<(std::ostream& out, const Point& point);
private:
   double x, y;
};

#endif


