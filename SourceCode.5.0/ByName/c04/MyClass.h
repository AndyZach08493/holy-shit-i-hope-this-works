template <typename T> class MyClass
{
public:
   MyClass();
   MyClass(T initialData);

   void setData(T newData);
   T getData();
private:
   T theData;
}; // end MyClass
