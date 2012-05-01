class Ball : public Sphere
{
public:
// constructors:
   Ball();

   /** Creates a ball with radius initialRadius and
    * name initialName. */
   Ball(double initialRadius,
        const string& initialName);

   // copy constructor and destructor supplied
   // by the compiler

// additional or revised operations:
   /** Determines the name of a ball. */
   void getName(string& currentName) const;

   /** Sets (alters) the name of an existing ball. */
   void setName(const string& newName);

   /** Sets (alters) the radius and name of an existing
    *  ball to newRadius and newName, respectively. */
   void resetBall(double newRadius,
                  const string& newName);

   /** getArea redefines the Sphere::getArea method. */
   double getArea() const;  // cross-sectional area

   // displayStatistics omitted

private:
   /** the ball's name */
   string theName;
}; // end Ball
