class BasicADT  // abstract base class
{
public:
   virtual ~BasicADT();  // destructor
   virtual bool isEmpty() const = 0;
   virtual int getLength() const = 0;
}; // end BasicADT
