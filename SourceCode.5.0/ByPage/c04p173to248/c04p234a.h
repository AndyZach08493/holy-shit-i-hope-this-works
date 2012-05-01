namespace std
{
   template<> struct greater<string*>
   {
      // override operator() to create a function object
      bool operator() (string *s1, string *s2)
      {
	 return (*s1) > (*s2);
      }  // end operator()
   }; // end std::greater
}  // end std namespace
