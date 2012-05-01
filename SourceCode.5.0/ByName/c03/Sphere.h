/** @file Sphere.h */

const double PI = 3.14159;

/** @class Sphere Sphere.h "Sphere.h"
 * Definition of a class of Spheres. */
class Sphere
{
public:
   /** Default constructor: Creates a Sphere and initializes its
    *  radius to a default value.
    * @pre None.
    * @post A Sphere of radius 1 exists. */
   Sphere();

   /** Constructor: Creates a Sphere and initializes its radius.
    * @pre initialRadius is the desired radius.
    * @post A Sphere of radius initialRadius exists.
    * @param initialRadius  The given radius. */
   Sphere(double initialRadius);

   /** Sets (alters) the radius of an existing Sphere.
    * @pre newRadius is the desired radius.
    * @post The Sphere's radius is newRadius.
    * @param newRadius  The new radius. */
   void setRadius(double newRadius);

   /** Determines a Sphere's radius.
    * @pre None.
    * @post None.
    * @return The radius. */
   double getRadius() const;

   /** Determines a Sphere's diameter.
    * @pre None.
    * @post None.
    * @return The diameter. */
   double getDiameter() const;

   /** Determines a Sphere's circumference.
    * @pre PI is a named constant.
    * @post None.
    * @return The circumference. */
   double getCircumference() const;

   /** Determines a Sphere's surface area.
    * @pre PI is a named constant.
    * @post None.
    * @return The surface area. */
   double getArea() const;

   /** Determines a Sphere's volume.
    * @pre PI is a named constant.
    * @post None.
    * @return The volume. */
   double getVolume() const;

   /** Displays statistics of a Sphere.
    * @pre None.
    * @post Displays the radius, diameter, circumference, area, and
    *       volume. */
   void displayStatistics() const;

private:
   /** The Sphere's radius */
   double theRadius;
};  // end Sphere
// End of header file.
