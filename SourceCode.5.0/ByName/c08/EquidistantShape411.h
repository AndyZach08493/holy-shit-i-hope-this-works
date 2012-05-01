class EquidistantShape  // abstract base class
{
public:
   void setRadius(double newRadius);
   double getRadius() const;
   virtual void displayStatistics() const = 0;

private:
   double theRadius;
}; // end EquidistantShape
