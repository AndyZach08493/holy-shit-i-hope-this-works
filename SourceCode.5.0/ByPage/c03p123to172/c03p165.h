/** @file ListAexcept.h */

#include "ListException.h"
#include "ListIndexOutOfRangeException.h"
const int MAX_LIST = maximum-size-of-list;
typedef desired-type-of-list-item ListItemType;

/** @class List
 * ADT list - Array-based implementation with exceptions */
class List
{
public:
   List();
   // destructor is supplied by compiler

   /** @throw None. */
   bool isEmpty() const;

   /** @throw None. */
   int getLength() const;

   /** @throw ListIndexOutOfRangeException  If index < 1 or index >
    *         getLength() + 1.
    *  @throw ListException  If newItem cannot be placed in the list
    *         because the array is full. */
   void insert(int index, const ListItemType& newItem)
      throw(ListIndexOutOfRangeException, ListException);

   /** @throw ListIndexOutOfRangeException  If index < 1 or index >
    *         getLength(). */
   void remove(int index)
      throw(ListIndexOutOfRangeException);

   /** @throw ListIndexOutOfRangeException  If index < 1 or index >
    *         getLength(). */
   void retrieve(int index, ListItemType& dataItem) const
        throw(ListIndexOutOfRangeException);

private:
   /** array of list items */
   ListItemType items[MAX_LIST];

   /** number of items in list */
   int          size;

   int translate(int index) const;
}; // end List
// End of header file.
