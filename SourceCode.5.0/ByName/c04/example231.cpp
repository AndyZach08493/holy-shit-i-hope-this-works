list<int> myList;
list<int>::iterator curr;

// right now, the list is empty;
// start the iterator at the beginning of myList
curr = myList.begin();
// test for empty list
if (curr == myList.end())
   cout << "The list is empty" << endl;

// insert five items into the list myList
for (int j = 0; j < 5; j++)
   // places item j at the front of the list
   curr = myList.insert(curr, j);

// now output each item in the list starting with the
// first item in the list; keep moving the iterator
// to the next item in the list until the end of
// the list is reached
for (curr = myList.begin(); curr != myList.end(); curr++)
   cout << *curr << " ";
cout << endl;
