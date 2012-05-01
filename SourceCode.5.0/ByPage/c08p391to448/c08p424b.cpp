template <typename T>
NewClass<T>::NewClass()
{
}  // end default constructor

template <typename T>
NewClass<T>::NewClass(T initialData)
   : theData(initialData)
{
}  // end constructor

template <typename T>
void NewClass<T>::setData(T newData)
{
   theData = newData;
}  // end setData

template <typename T>
T NewClass<T>::getData()
{
   return theData;
}  // end getData
