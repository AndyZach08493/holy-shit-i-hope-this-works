double* oldArray = anArray;          // copy pointer to array
anArray = new double[2 * arraySize]; // double array size
for (int index = 0; index < arraySize; ++index)
   anArray[index] = oldArray[index]; // copy old array
delete [] oldArray;                  // deallocate old array
