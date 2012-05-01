int *p, *q;

p = new int;        // Allocate a cell of type int.

*p = 1;             // Assign a value to the new cell.

q = new int;        // Allocate a cell of type int.

*q = 2;             // Assign a value to the new cell.

cout << *p << " "   // Output line contains: 1 2
     << *q << endl; // These values are in the
                    // cells to which p and q point.

*p = *q + 3;        // The value in the cell to which
                    // q points, 2 in this case, and 3
                    // are added together. The result is
                    // assigned to the cell to which
                    // p points.

cout << *p << " "   // Output line contains: 5 2
     << *q << endl;

p = q;              // p now points to the same cell as q.
                    // The cell p formerly pointed to is
                    // lost; it cannot be referenced.

cout << *p << " "   // Output line contains: 2 2
     << *q << endl;

*p = 7;             // The cell to which p points (which
                    // is also the cell to which q points)
                    // now contains the value 7.

cout << *p << " "   // Output line contains: 7 7
     << *q << endl;

p = new int;        // This changes what p points to,
                    // but not what q points to.

delete p;           // Return to the system the cell to
                    // which p points.

p = NULL;           // Set p to NULL, a good practice
                    // following delete.

q = NULL;           // The cell to which q previously
                    // pointed is now lost. You cannot
                    // reference it.
