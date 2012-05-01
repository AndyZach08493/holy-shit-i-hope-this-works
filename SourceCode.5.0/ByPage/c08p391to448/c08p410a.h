/** @class EquidistantShape
 *   An abstract base class */
class EquidistantShape
{
public:
   virtual void setRadius(double newRadius) = 0;
   virtual double getRadius() const = 0;
   virtual void displayStatistics() const = 0;
}; // end EquidistantShape
