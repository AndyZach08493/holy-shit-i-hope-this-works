template <typename T>
class NewClass
{
public:
   NewClass();
   NewClass(T initialData);

   void setData(T newData);
   T getData();

private:
   T theData;
}; // end NewClass
