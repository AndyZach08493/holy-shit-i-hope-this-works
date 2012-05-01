#include "Sphere.h"

enum Color {RED, BLUE, GREEN, YELLOW};

class ColoredSphere : public Sphere
{
public:
   ColoredSphere(Color initialColor);
   ColoredSphere(Color initialColor,
                 double initialRadius);
   void setColor(Color newColor);
   Color getColor() const;
private:
   Color c;
}; //end ColoredSphere
