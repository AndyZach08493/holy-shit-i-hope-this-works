Ball::Ball() : Sphere()
{
   setName("");
}  // end default constructor

Ball::Ball(double initialRadius,
           const string& initialName)
           : Sphere(initialRadius)
{
   setName(initialName);
}  // end constructor

void Ball::getName(string& currentName) const
{
   currentName = theName;
}  // end getName

void Ball::setName(const string& newName)
{
   theName = newName;
}  // end setName

void Ball::resetBall(double newRadius,
                     const string& newName)
{
   setRadius(newRadius);
   setName(newName);
}  // end resetBall

void Ball::displayStatistics() const
{
   cout << "Statistics for a " << theName << ":";
   Sphere::displayStatistics();
}  // end displayStatistics
