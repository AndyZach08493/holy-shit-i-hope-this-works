/** @file StackA.cpp */

#include "StackA.h"  // Stack class specification file

Stack::Stack() : top(-1)
{
}  // end default constructor

bool Stack::isEmpty() const
{
   return top < 0;
}  // end isEmpty

void Stack::push(const StackItemType& newItem)
            throw(StackException)
{
// if stack has no more room for another item
   if (top >= MAX_STACK-1)
      throw StackException("StackException: stack full on push");
   else
   {  ++top;
      items[top] = newItem;
   }  // end if
}  // end push

void Stack::pop() throw(StackException)
{
   if (isEmpty())
      throw StackException("StackException: stack empty on pop");
   else
      --top;     // stack is not empty; pop top
}  // end pop

void Stack::pop(StackItemType& stackTop) throw(StackException)
{
   if (isEmpty())
      throw StackException("StackException: stack empty on pop");
   else
   {  // stack is not empty; retrieve top
      stackTop = items[top];
      --top;     // pop top
   }  // end if
}  // end pop

void Stack::getTop(StackItemType& stackTop) const throw(StackException)
{
   if (isEmpty())
      throw StackException("StackException: stack empty on getTop");
   else
      // stack is not empty; retrieve top
      stackTop = items[top];
}  // end getTop
// End of implementation file.
