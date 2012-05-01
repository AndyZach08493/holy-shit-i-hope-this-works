class Sphere
{
public:
// constructors:
   Sphere();
   Sphere(double initialRadius);
   // copy constructor and destructor supplied
   // by the compiler

// Sphere operations:
   void setRadius(double newRadius);
   double getRadius() const;
   double getDiameter() const;
   double getCircumference() const;
   double getArea() const;
   double getVolume() const;
   virtual void displayStatistics() const;

private:
   double theRadius;  // the sphere's radius
}; // end Sphere
