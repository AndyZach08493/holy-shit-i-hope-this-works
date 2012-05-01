/** @file HashMap.cpp */

template <typename Key, typename T, typename Hash>
HashMap<Key, T, Hash>::HashMap(int maxBuckets)
{
   hash = Hash();
   resize(maxBuckets + 1);
}  // end constructor

template <typename Key, typename T, typename Hash>
T& HashMap<Key, T, Hash>::operator[](Key& key)
{
   return at(hash(key))[key];
}  // end operator[]

template <typename Key, typename T, typename Hash>
map<Key, T>::const_iterator HashMap<Key, T, Hash>::findItem(const Key& key)
{
   map<Key, T>::const_iterator it;
   int index = hash(key);
   it = at(index).find(key);

   return it;
} // end findItem

template <typename Key, typename T, typename Hash>
void HashMap<Key, T, Hash>::insert(const Key& key,
                                    const T& item)
{
   int index = hash(key);
   at(index).insert(make_pair(key, item));
}  // end insert

template <typename Key, typename T, typename Hash>
int HashMap<Key, T, Hash>::erase(const Key& key)
{
   int index = hash(key);
   return at(index).erase(key);
}  // end erase
// End of implementation file
