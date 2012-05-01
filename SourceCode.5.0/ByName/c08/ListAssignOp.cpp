List& List::operator=(const List& rhs)
{
   // check for assignment to self
   if (this != &rhs)
   {  removeAll();    // deallocate left-hand side
      copyListNodes(rhs); // copy list nodes
      size = rhs.size;    // copy size of list
   }  // end if
   return *this;
}  // end operator=
