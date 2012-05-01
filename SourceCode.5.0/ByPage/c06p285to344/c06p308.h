/** @file StackL.h */

#include "StackException.h"
#include "ListP.h"     // list operations

typedef ListItemType StackItemType;

/** @class Stack
 * ADT stack - ADT list implementation. */
class Stack
{
public:
// constructors and destructor:
   /** Default constructor. */
   Stack();
   /** Copy constructor.    */
   Stack(const Stack& aStack);
   /** Destructor.          */
   ~Stack();

// Stack operations:
   bool isEmpty() const;
   void push(const StackItemType& newItem) throw(StackException);
   void pop() throw(StackException);
   void pop(StackItemType& stackTop) throw(StackException);
   void getTop(StackItemType& stackTop) const throw(StackException);

private:
   /** List of stack items. */
   List aList;
}; // end Stack
// End of header file.
