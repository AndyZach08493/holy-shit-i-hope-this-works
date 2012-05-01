class KeyedItem
{
public:
   KeyedItem() {}
   KeyedItem(const KeyType& keyValue)
      : searchKey(keyValue) {}
   KeyType getKey() const  // returns search key
   {
      return searchKey;
   }  // end getKey
private:
   KeyType searchKey;
}; // end KeyedItem
