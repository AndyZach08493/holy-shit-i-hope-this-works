List::~List()
{
   while (!isEmpty())
      remove(1);
}  // end destructor
