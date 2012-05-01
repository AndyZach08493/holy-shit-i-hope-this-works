/** @file TableH.h */

#include "TableException.h"
#include "ChainNode.h"

typedef KeyedItem TableItemType;

/** @class HashTable
 * ADT table.
 * Hash table implementation.
 * Assumption: A table contains at most one item with a
 *             given search key at any time. */
class HashTable
{
public:
// constructors and destructor:
   HashTable();
   HashTable(const HashTable& table);
   virtual ~HashTable();

// table operations:
   virtual bool tableIsEmpty() const;
   virtual int tableGetLength() const;
   virtual void tableInsert(const TableItemType& newItem)
      throw(TableException);
   virtual void tableDelete(KeyType searchKey)
      throw(TableException);
   virtual void tableRetrieve(KeyType searchKey,
			      TableItemType& tableItem) const
      throw(TableException);

protected:
   /** Hash function. */
   int hashIndex(KeyType searchKey) const;

private:
   /** Size of hash table. */
   static const int HASH_TABLE_SIZE = 101;
   typedef ChainNode * HashTableType[HASH_TABLE_SIZE];

   /** Hash table. */
   HashTableType table;
   /** Size of ADT table. */
   int           size;
}; // end HashTable
// End of header file.
