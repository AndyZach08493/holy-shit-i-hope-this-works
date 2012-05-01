/** @file Heap.h */

const int MAX_HEAP = maximum-size-of-heap;

#include "HeapException.h"
#include "KeyedItem.h"  // definition of KeyedItem

typedef KeyedItem HeapItemType;

/** @class Heap
 * ADT heap. */
class Heap
{
public:
   Heap();  /** Default constructor. */
   // copy constructor is supplied by the compiler
   virtual ~Heap(); /** Destructor. */

// Heap operations:

   /** Determines whether a heap is empty.
    * @pre None.
    * @post None.
    * @return True if the heap is empty; otherwise returns
    *         false. */
   virtual bool heapIsEmpty() const;

   /** Inserts an item into a heap.
    * @pre newItem is the item to be inserted.
    * @post If the heap was not full, newItem is in its proper
    *       position.
    * @throw HeapException If the heap is full. */
   virtual void heapInsert(const HeapItemType& newItem)
      throw(HeapException);

   /** Retrieves and deletes the item in the root of a heap. This
    *  item has the largest search key in the heap.
    * @pre None.
    * @post If the heap was not empty, rootItem is the retrieved
    *       item, the item is deleted from the heap.
    * @throw HeapException If the heap is empty. */
   virtual void heapDelete(HeapItemType& rootItem)
      throw(HeapException);

protected:
   /** Converts the semiheap rooted at index root into a heap. */
   void heapRebuild(int root);

private:
   HeapItemType items[MAX_HEAP];  /** Array of heap items. */
   int          size;             /** Number of heap items. */
}; // end Heap
// End of header file.
