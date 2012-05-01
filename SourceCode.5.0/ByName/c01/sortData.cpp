class SortData
{
public:
   SortData()
   {
      data[0] = 2; data[1] = 3; data[2] = 1;
   }  // end constructor
   void sortData()
   {
      cout << "SortData::sortData has been called.\n";
      data[0] = 1; data[1] = 2; data[2] = 3;
   }  // end sortData
   void dump()
   {
      for (int i = 0; i < 3; ++i)
	 cout << "data[" << i << "] = " << data[i] << endl;
   }  // end dump
private:
   int data[3];
}; // end SortData

int main()
{
   SortData t;
   t.dump();
   t.sortData();
   t.dump();

   return 0;
}  // end main
