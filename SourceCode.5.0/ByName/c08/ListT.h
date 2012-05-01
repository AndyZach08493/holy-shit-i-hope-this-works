/** @file ListT.h */

#include "ListNodeT.h"
#include "ListException.h"
#include "ListIndexOutOfRangeException.h"

/** @class List
 *  ADT list - Pointer-based implementation -- TEMPLATE VERSION */
template <typename T>
class List
{
public:
// constructors and destructor:
   List();
   List(const List<T> & aList);
   virtual ~List();
   // List operations:
   virtual bool isEmpty() const;
   virtual int  getLength() const;
   virtual void insert(int index, const T& newItem)
      throw(ListIndexOutOfRangeException, ListException);
   virtual void remove(int index)
      throw(ListIndexOutOfRangeException);
   virtual void retrieve(int index, T& dataItem) const
      throw(ListIndexOutOfRangeException);
protected:
   void setSize(int newSize);
   ListNode<T> *getHead() const;
   void setHead(ListNode<T> *newHead);
   T getNodeItem(ListNode<T> *ptr) const;
   ListNode<T> *getNextNode(ListNode<T> *ptr) const;
private:
   int          size;
   ListNode<T> *head;

   ListNode<T> *find(int position) const;
}; // end List

#include "ListT.cpp"
