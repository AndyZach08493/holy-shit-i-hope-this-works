// node for wait list of people waiting for certain titles
struct WaitNode
{  string    who;
   WaitNode *next;
}; // end WaitNode

// node for inventory list of stock items
struct StockNode
{  string     title;
   int        have, want;
   WaitNode * waitHead, *waitTail;
   StockNode *next;
}; // end StockNode
