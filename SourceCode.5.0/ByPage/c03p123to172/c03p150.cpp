/** @file Sphere.cpp */

#include <iostream>
#include "Sphere.h"   // header file

using namespace std;

Sphere::Sphere() : theRadius(1.0)
{
}  // end default constructor

Sphere::Sphere(double initialRadius)
{
   if (initialRadius > 0)
      theRadius = initialRadius;
   else
      theRadius = 1.0;
}  // end constructor

void Sphere::setRadius(double newRadius)
{
   if (newRadius> 0)
      theRadius = newRadius;
   else
      theRadius = 1.0;
}  // end setRadius

double Sphere::getRadius() const
{
   return theRadius;
}  // end getRadius

double Sphere::getDiameter() const
{
   return 2.0 * theRadius;
}  // end getDiameter

double Sphere::getCircumference() const
{
   return PI * getDiameter();
}  // end getCircumference

double Sphere::getArea() const
{
   return 4.0 * PI * theRadius * theRadius;
}  // end getArea

double Sphere::getVolume() const
{
   double radiusCubed = theRadius * theRadius * theRadius;
   return (4.0 * PI * radiusCubed)/3.0;
}  // end getVolume

void Sphere::displayStatistics() const
{
   cout << "\nRadius = " << getRadius()
        << "\nDiameter = " << getDiameter()
        << "\nCircumference = " << getCircumference()
        << "\nArea = " << getArea()
        << "\nVolume = " << getVolume() << endl;
}  // end displayStatistics
// End of implementation file.
