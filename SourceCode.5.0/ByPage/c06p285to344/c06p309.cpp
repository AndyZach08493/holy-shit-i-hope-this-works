/** @file StackL.cpp */

#include "StackL.h"    // header file

Stack::Stack()
{
}  // end default constructor

Stack::Stack(const Stack& aStack)
   : aList(aStack.aList)
{
}  // end copy constructor

Stack::~Stack()
{
}  // end destructor

bool Stack::isEmpty() const
{
   return aList.isEmpty();
}  // end isEmpty

void Stack::push(const StackItemType& newItem)
            throw(StackException)
{
   try
   {
      aList.insert(1, newItem);
   }  // end try
   catch (ListException e)
   {
      throw StackException("StackException: cannot push item.");
   }  // end catch
   catch (ListIndexOutOfRangeException e)
   {
      throw StackException("StackException: cannot push item.");
   }  // end catch
}  // end push

void Stack::pop() throw(StackException)
{
   try
   {
      aList.remove(1);
   }  // end try
   catch (ListIndexOutOfRangeException e)
   {
      throw StackException("StackException: stack empty on pop");
   }  // end catch
}  // end pop

void Stack::pop(StackItemType& stackTop) throw(StackException)
{
   try
   {
      aList.retrieve(1, stackTop);
      aList.remove(1);
   }  // end try
   catch (ListIndexOutOfRangeException e)
   {
      throw StackException("StackException: stack empty on pop");
   }  // end catch
}  // end pop

void Stack::getTop(StackItemType& stackTop) const throw(StackException)
{
   try
   {
      aList.retrieve(1, stackTop);
   }  // end try
   catch (ListIndexOutOfRangeException e)
   {
      throw StackException("StackException: stack empty on getTop");
   }  // end catch
}  // end getTop
// End of implementation file.
