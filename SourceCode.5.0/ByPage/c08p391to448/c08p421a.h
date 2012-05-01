class SortedList
{
public:
// constructors and destructor:
   SortedList();
   SortedList(const SortedList& sList);
   virtual ~SortedList();

// sorted List operations:
   virtual bool sortedIsEmpty() const;
   virtual int  sortedGetLength() const;
   virtual void sortedInsert(const ListItemType& newItem)
      throw(ListException);
   virtual void sortedRemove(const ListItemType& anItem)
      throw(ListException);
   virtual void sortedRetrieve(int index,
			       ListItemType& anItem) const
      throw(ListIndexOutOfRangeException);
   virtual int locatePosition(const ListItemType& anItem,
                              bool& isPresent);

private:
   List aList;
}; // end SortedList
