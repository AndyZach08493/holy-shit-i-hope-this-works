/** Determines whether a sequence of flights between two cities
 *  exists. Nonrecursive stack version.
 * @pre originCity and destinationCity both exist in the Map.
 * @post None.
 * @param originCity  Number of the origin city.
 * @param destinationCity  Number of the destination city.
 * @return True if a sequence of flights exists from originCity to
 *         destinationCity; otherwise returns false. Cities visited
 *         during the search are marked as visited in the flight
 *         map.
 * @note Uses a stack for the city numbers of a potential
 *       path. Calls unvisitAll, markVisited, and getNextCity. */
bool Map::isPath(int originCity, int destinationCity)
{
   Stack aStack;
   int   topCity, nextCity;
   bool  success;

   unvisitAll();  // clear marks on all cities

   // push origin city onto aStack, mark it visited
   try
   {  aStack.push(originCity);
      markVisited(originCity);

      aStack.getTop(topCity);
      while (!aStack.isEmpty() && (topCity != destinationCity))
      {  // Loop invariant: The stack contains a directed path
	 // from the origin city at the bottom of the stack to
	 // the city at the top of the stack

	 // find an unvisited city adjacent to the city on the
	 // top of the stack
	 success = getNextCity(topCity, nextCity);

	 if (!success)
	    aStack.pop();  // no city found; backtrack

	 else                // visit city
	 {  aStack.push(nextCity);
            markVisited(nextCity);
	 }  // end if

	 if(!aStack.isEmpty())
	    aStack.getTop(topCity);
      }  // end while

      if (aStack.isEmpty())
	 return false;  // no path exists
      else
	 return true;   // path exists
   }
   catch (StackException e)
   {  cout << e.what() << endl;
   }  // end try
}  // end isPath
