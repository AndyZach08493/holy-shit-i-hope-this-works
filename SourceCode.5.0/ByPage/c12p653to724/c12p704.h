/** @file ChainNode.h.
 * Provides the chain node definition for the hash table. */

#include "KeyedItem.h"

class ChainNode
{
private:
   ChainNode(const KeyedItem & nodeItem,
             ChainNode *nextNode = NULL)
      : item(nodeItem), next(nextNode) {}
   KeyedItem  item;
   ChainNode *next;

   friend class HashTable;
}; // end ChainNode
