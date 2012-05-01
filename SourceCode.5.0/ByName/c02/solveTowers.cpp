/** Produces a solution to the Towers of Hanoi puzzle.
 * @pre count is nonnegative.
 * @post None.
 * @param count is the number of disks on the source pole before
 *        starting to solve the puzzle.
 * @param source represents the pole holding all count disks before
 *        starting to solve the puzzle.
 * @param destination represents the pole where all count disks
 *        will end up after solving the puzzle.
 * @param spare represents the extra pole that is used while moving
 *        disks from source to destination. */
void solveTowers(int count, char source, char destination,
		 char spare)
{
   if (count == 1)
   {   cout << "  Move top disk from pole " << source
	    << " to pole " << destination << endl;
   }
   else
   {  solveTowers(count-1, source, spare, destination); // X
      solveTowers(1, source, destination, spare);       // Y
      solveTowers(count-1, spare, destination, source); // Z
   }  // end if
}  // end solveTowers
