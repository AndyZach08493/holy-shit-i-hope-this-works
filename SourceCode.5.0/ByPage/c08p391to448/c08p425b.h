/** @file ListNodeT.h */

#include <cstddef>

template <typename T> class List;

/** @class ListNode
 *  ADT list - Pointer-based implementation -- TEMPLATE VERSION */
template <typename T>
class ListNode
{
private:
   ListNode(): next(NULL) {}
   ListNode(const T& nodeItem, ListNode *ptr)
      : item(nodeItem), next(ptr) {}
   /** A data item on the list. */
   T        item;
   /** Pointer to next node.    */
   ListNode *next;

   // friend class - can access private parts
   friend class List<T>;
}; // end ListNode
