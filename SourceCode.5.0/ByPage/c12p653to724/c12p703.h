/** @file KeyedItem.h
 * Provides basis for classes that need a search key value. */

typedef desired-type-of-search-key KeyType;

class KeyedItem
{
public:
   KeyedItem() {}
   KeyedItem(const KeyType& keyValue)
             : searchKey(keyValue) {}
   KeyType getKey() const // returns search key
   {  return searchKey;
   }  // end getKey
private:
   KeyType searchKey;
}; // end KeyedItem
