int main()
{
   MyClass<int> a;
   MyClass<double> b(5.4);

   a.setData(5);
   cout << b.getData() << endl;

   return 0;
}  // end main
