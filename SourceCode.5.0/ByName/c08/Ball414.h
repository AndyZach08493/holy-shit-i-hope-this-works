class Sphere
{
public:
// constructors and operations as before

   friend void readSphereData(Sphere& s);
   friend void writeSphereData(Sphere& s);
private:
   double theRadius;  // the sphere's radius
}; // end Sphere

class Ball : public Sphere
{
public:
   Ball();
   Ball(double initialRadius,
        const string initialName);
   void getName(string& currentName) const;
   void setName(const string& newName);
   void resetBall(double newRadius,
                  const string newName);
   void displayStatistics() const;
private:
   string theName;  // the ball's name
}; // end Ball
