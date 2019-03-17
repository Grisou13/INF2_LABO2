/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 -----------------------------------------------------------------------------------
 Laboratoire : <nn>
 Fichier     : Point.h
 Auteur(s)   : RICCI Thomas <thomas.ricci@heig-vd.ch>
 Date        : February 22, 2019, 10:45 AM

 But         : <à compléter>

 Remarque(s) : <à compléter>

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
   
   Point* translate(double x, double y);
   
   double abscisse() const;
   double ordonnee() const;
   
   double theta() const;

   double rho() const;
   
   friend Point operator+(const Point& lhs, const Point& rhs);
   friend Point operator+=(const Point& lhs, const Point& rhs);
   friend std::ostream& operator<<(std::ostream& out, const Point& point);
private:
   double x, y;
};

#endif /* POINT_H */

