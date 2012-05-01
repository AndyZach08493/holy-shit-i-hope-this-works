// insert the new node pointed to by newPtr before
// the node pointed to by cur
newPtr->next = cur;
newPtr->precede = cur->precede;
cur->precede = newPtr;
newPtr->precede->next = newPtr;
