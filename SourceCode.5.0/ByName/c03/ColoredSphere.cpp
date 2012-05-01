ColoredSphere::ColoredSphere(Color initialColor)
   : Sphere()
{
   c = initialColor;
}  // end constructor

ColoredSphere::ColoredSphere(Color initialColor,
                             double initialRadius)
   : Sphere(initialRadius)
{
   c = initialColor;
}  // end constructor

void ColoredSphere::setColor(Color newColor)
{
   c = newColor;
}  // end setColor

Color ColoredSphere::getColor() const
{
   return c;
}  // end getColor
