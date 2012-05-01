/** @file List.h */

#include "ListNode.h"   // as specified in previous section,
                        // also specifies ListItemType
#include "ListException.h"
#include "ListIndexOutOfRangeException.h"
#include "BasicADT.h"

/** @class List
 *  ADT list - Uses ListNode and BasicADT. */
class List : public BasicADT
{
public:
// constructors and destructor:
   List();
   List(const List& aList);
   virtual ~List();

// list operations:
   virtual bool isEmpty() const;
   virtual int getLength() const;
   virtual void insert(int index, const ListItemType& newItem)
      throw(ListIndexOutOfRangeException, ListException);
   virtual void remove(int index)
      throw(ListIndexOutOfRangeException);
   virtual void retrieve(int index,
			 ListItemType& dataItem) const
      throw(ListIndexOutOfRangeException);

protected:
   /** Sets size */
   void setSize(int newSize);
   /** @return head pointer */
   ListNode *getHead() const;
   /** Sets head pointer */
   void setHead(ListNode *newHead);

   /** @return The list item of a node in the linked list */
   ListItemType getNodeItem(ListNode *ptr) const;

   /** @return The next pointer of a node in the linked list */
   ListNode *getNextNode(ListNode *ptr) const;

private:
   /** Number of items in the list */
   int      size;
   /** Pointer to the linked list */
   ListNode *head;

   ListNode *find(int index) const;
}; // end List
