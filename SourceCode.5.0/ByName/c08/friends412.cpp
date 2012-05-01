void readSphereData(Sphere& s)
{
   cout << "Enter sphere radius: ";
   cin >> s.theRadius;
}  // end readSphereData

void writeSphereData(Sphere& s)
{
   cout << "The radius of the sphere is "
        << s.theRadius << endl;
}  // end writeSphereData
