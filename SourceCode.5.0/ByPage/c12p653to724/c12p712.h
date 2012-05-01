/** @file HashMap.h
 * The HashMap is derived from the STL vector and map. */

#include <vector>
#include <map>

using namespace std;

template <typename Key, typename T, typename Hash>
class HashMap : private vector<map<Key, T> >
{
public:

   /** Constructor
    * @pre The HashMap is empty.
    * @post The HashMap is initialized to hold maxBuckets. The Hash
    *       template parameter is assigned to the hash variable. */
   HashMap(const int maxBuckets);

   /** Overloads the subscript operator for the HashMap class
    * @pre The HashMap contains a hash for type T.
    * @post The value of a hashed key is returned. */
   T& operator[](Key& key);

   /** Hashes the key to find the vector index. Finds the map
    *  element using the key as the index.
    * @pre The HashMap contains a hash for type T.
    * @post An iterator to the (key, item) pair is returned. If the
    *       item is not in the map, the iterator points to the end
    *       of the map. */
   map<Key, T>::const_iterator findItem(const Key& key);

   /** Hashes the key to find the vector index. Inserts the (key,
    *  item) pair into the map at that index.
    * @pre The HashMap contains a hash for the type T.
    * @post The (key, item) pair is inserted at the hashed
    *       index. */
   void insert(const Key& key, const T& item);

   /** Removes the item with the Key k in the hash table.
    * @pre The HashMap contains a hash for the type T.
    * @post The (key, item) pair at the hashed index is
    *       removed. The number of items removed is returned
    *       (either 0 or 1). */
   int erase(const Key& k);

   /** The hash function object. */
   Hash hash;
}; // end HashMap

#include "HashMap.cpp"
// End of header file
