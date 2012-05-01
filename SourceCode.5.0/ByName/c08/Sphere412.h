class Sphere
{
public:
// constructors and operations as before
   friend void readSphereData(Sphere& s);
   friend void writeSphereData(Sphere& s);
private:
   double theRadius;  // the sphere's radius
}; // end Sphere
