class Sphere : public EquidistantShape
{
public:
   Sphere();
   Sphere(double initialRadius);
   Sphere(const Sphere& aSphere);
   virtual ~Sphere();

   virtual void setRadius(double newRadius);
   virtual double getRadius() const;
   virtual double getDiameter() const;
   virtual double getCircumference() const;
   virtual double getArea() const;
   virtual double getVolume() const;
   virtual void displayStatistics() const;

private:
   double theRadius;
}; // end Sphere
