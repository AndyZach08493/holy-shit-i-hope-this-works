int main()
{
   int x1, x2, x3, i;
   char name[8];

   for (cin >> x1 >> x2 >> x3;
	x1 != 0;
	cin >> x1 >> x2 >> x3)
   {  for (i = 0; i < 8; ++i)
	 cin >> name[i];

      cout << x1 << x2 << x3 << endl;

      for (i = 0; i < 8; ++i)
	 cout << name[i];
      cout << endl;
   }  // end for
   return 0;
}  // end main
