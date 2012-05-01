void List::insert(int index, const ListItemType& newItem)
   throw(ListIndexOutOfRangeException, ListException)
{
   if (size >= MAX_LIST)
      throw ListException(
	 "ListException: List full on insert");

   if (index >= 1 && index <= size+1)
   {
       for (int pos = size; pos >= index; --pos)
         items[translate(pos+1)] = items[translate(pos)];
      // insert new item
      items[translate(index)] = newItem;
      ++size;  // increase the size of the list by one
   }
   else  // index out of range
      throw ListIndexOutOfRangeException(
       "ListIndexOutOfRangeException: Bad index on insert");
   // end if
}  // end insert
