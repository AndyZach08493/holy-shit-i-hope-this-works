/** @file TableA.h */

#include "KeyedItem.h"  // definition of KeyedItem
                        // and KeyType
#include "TableException.h"

const int MAX_TABLE = maximum-size-of-table;

typedef KeyedItem TableItemType;
typedef void (*FunctionType)(TableItemType& anItem);

/** @class Table
 *  ADT table.
 *  Sorted array-based implementation.
 *  Assumption: A table contains at most one item with a
 *              given search key at any time. */
class Table
{
public:
   /** Default constructor. */
   Table();
   // copy constructor is supplied by the compiler
   virtual ~Table(); /** Destructor. */

// Table operations:
// Precondition for all operations:
// No two items of the table have the same search key.
// The table's items are sorted by search key.

   /** Determines whether a table is empty.
    * @return True if the table is empty; otherwise returns
    *         false. */
   virtual bool tableIsEmpty() const;

   /** Determines the length of a table.
    * @return The number of items in the table. */
   virtual int tableLength() const;

   /** Inserts an item into a table in its proper sorted order
    *  according to the item's search key.
    * @pre The item to be inserted into the table is newItem, whose
    *      search key differs from all search keys presently in the
    *      table.
    * @post If the insertion is successful, newItem is in its
    *       proper order in the table.
    * @throw TableException  If the item cannot be inserted. */
   virtual void tableInsert(const TableItemType& newItem)
      throw(TableException);

   /** Deletes an item with a given search key from a table.
    * @pre searchKey is the search key of the item to be deleted.
    * @post If the item whose search key equals searchKey existed
    *       in the table, the item is deleted.
    * @throw TableException  If the item does not exist. */
   virtual void tableDelete(KeyType searchKey)
      throw(TableException);

   /** Retrieves an item with a given search key from a table.
    * @pre searchKey is the search key of the item to be
    *      retrieved.
    * @post If the retrieval is successful, tableItem contains the
    *       retrieved item.
    * @throw TableException  If the item does not exist. */
   virtual void tableRetrieve(KeyType searchKey,
			      TableItemType& tableItem) const
      throw(TableException);

   /** Traverses a table in sorted search-key order, calling
    *  function visit() once for each item.
    * @pre The function represented by visit() exists outside of
    *      the ADT implementation.
    * @post visit()'s action occurs once for each item in the
    *       table.
    * @note visit() can alter the table. */
   virtual void traverseTable(FunctionType visit);

protected:
   /** Sets the private data member size to newSize. */
   void setSize(int newSize);

   /** Sets items[index] to newItem. */
   void setItem(const TableItemType& newItem, int index);

   /** Finds the position of a table item or its insertion point.
    * @pre searchKey is the value of the search key sought in the
    *      table.
    * @return The index (between 0 and size - 1) of the item in the
    *         table whose search key equals searchKey. If no such
    *         item exists, returns the position (between 0 and
    *         size) that the item would occupy if inserted into the
    *         table. The table is unchanged. */
   int position(KeyType searchKey) const;

private:
   /** Table items. */
   TableItemType items[MAX_TABLE];
   /** Table size. */
   int           size;

   /** Searches a particular portion of the private array items for
    *  a given search key by using a binary search.
    * @pre 0 <= first, last < MAX_TABLE, where MAX_TABLE = max size
    *      of the array, and the array items[first..last] is sorted
    *      in ascending order by search key.
    * @return If searchKey is in the array, returns the index of
    *         the array element that contains searchKey; otherwise
    *         returns the index (between first and last) of the
    *         array element that the item would occupy if inserted
    *         into the array in its proper order. The array is
    *         unchanged. */
   int keyIndex(int first, int last, KeyType searchKey) const;

}; // end Table
// End of header file.
