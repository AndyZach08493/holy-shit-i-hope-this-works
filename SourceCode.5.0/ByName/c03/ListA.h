/** @file ListA.h */

const int MAX_LIST = 10;
typedef int ListItemType;

//const int MAX_LIST = maximum-size-of-list;
//typedef desired-type-of-list-item ListItemType;

/** @class List
 * ADT list - array-based implementation */
class List
{
public:
   /** Default constructor */
   List();
   // Destructor is supplied by compiler

// list operations:
   /** Determines whether a list is empty.
    * @pre None.
    * @post None.
    * @return True if the list is empty; otherwise returns false. */
   bool isEmpty() const;

   /** Determines the length of a list.
    * @pre None.
    * @post None.
    * @return The number of items that are currently in the list. */
   int getLength() const;

   /** Inserts an item into the list at position index.
    * @pre 1 <= index <= getLength() + 1.
    * @post If insertion is successful, newItem is at position index
    *       in the list, and other items are renumbered accordingly,
    *       and success is true; otherwise success is false.
    * @param index  The list position at which to insert newItem.
    * @param newItem  The ListItemType to insert into the list.
    * @param success  Error condition indicator. */
   void insert(int index, const ListItemType& newItem, bool& success);

   /** Deletes an item from the list at a given position.
    * @pre 1 <= index <= getLength().
    * @post If 1 <= index <= getLength(), the item at position index
    *       in the list is deleted, other items are renumbered
    *       accordingly, and success is true; otherwise success is
    *       false.
    * @param index  The list position to delete from.
    * @param success Error condition indicator. */
   void remove(int index, bool& success);

   /** Retrieves a list item by position.
    * @pre 1 <= index <= getLength().
    * @post If 1 <= index <= getLength(), dataItem is the value of the
    *       desired item and success is true; otherwise success is
    *       false.
    * @param index  The list position to retrieve from.
    * @param dataItem  The ListItemType retrieved from the list.
    * @param success  Error condition indicator. */
   void retrieve(int index, ListItemType& dataItem,
		 bool& success) const;

private:
   /** array of list items */
   ListItemType items[MAX_LIST];

   /** number of items in list */
   int          size;

   /** Converts the position of an item in a list to the correct index
    *  within its array representation.
    * @pre 1 <= index <= getLength().
    * @param index  The list position to translate.
    * @return The array index corresponding to list position index. */
   int translate(int index) const;
}; // end List
// End of header file.
