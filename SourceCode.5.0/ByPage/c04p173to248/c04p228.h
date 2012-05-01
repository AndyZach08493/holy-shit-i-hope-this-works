// stock list
class StockList
{
public:
   ...
private:
   // node for wait list of people waiting for certain titles
   struct WaitNode
   {  string    who;
      WaitNode *next;
   }; // end WaitNode

   // stock item
   class StockItem
   {
   public:
      ...
   private:
      string title;
      int    have, want;
   }; // end StockItem

   // node for inventory list of stock items
   struct StockNode
   {  StockItem  item;
      WaitNode  *waitHead, *waitTail;
      StockNode *next;
   }; // end StockNode

   // pointer to first stock node on the list
   StockNode *head;
}; // end StockList
