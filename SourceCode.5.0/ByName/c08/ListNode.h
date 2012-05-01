#include <cstddef>
typedef desired-type-of-list-item ListItemType;

/** @class ListNode
 *  A node on the list. */
class ListNode
{
private:
   ListNode() : next(NULL) {}
   ListNode(const ListItemType& nodeItem, ListNode *ptr)
      : item(nodeItem), next(ptr) {}
   /** A data item on the list. */
   ListItemType item;
   /** Pointer to next node.    */
   ListNode     *next;

   // friend class - can access private parts
   friend class List;
}; // end ListNode
