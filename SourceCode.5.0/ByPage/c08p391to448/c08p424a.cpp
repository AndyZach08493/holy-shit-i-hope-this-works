int main()
{
   NewClass<int>     first;
   NewClass<double>  second(4.8);

   first.setData(5);
   cout << second.getData() << endl;

}  // end main
