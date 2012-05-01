// Exercise 15

void recurse(int x, int y)
{
   if (y > 0)
   {  ++x;
      --y;
      cout << x << " " << y << endl;
      recurse(x, y);
      cout << x << " " << y << endl;
   }  // end if
}  // end recurse
