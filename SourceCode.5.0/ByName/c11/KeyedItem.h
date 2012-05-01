#include <string>

using namespace std;

typedef string KeyType;

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
