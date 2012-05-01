/** @file KeyedItem.h */
typedef desired-type-of-search-key KeyType;

/**  @class KeyedItem
 *   Search key class for the ADT binary search tree. */
class KeyedItem
{
public:
   KeyedItem() {}
   KeyedItem(const KeyType& keyValue)
      : searchKey(keyValue) {}
   KeyType getKey() const
   {  return searchKey;
   }  // end getKey
private:
   KeyType searchKey;
}; // end KeyedItem
