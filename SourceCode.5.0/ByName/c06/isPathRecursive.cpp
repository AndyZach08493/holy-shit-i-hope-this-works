bool Map::isPath(int originCity, int destinationCity)
{
   int  nextCity;
   bool success, done;

   // mark the current city as visited
   markVisited(originCity);

   // base case: the destination is reached
   if (originCity == destinationCity)
      return true;

   else  // try a flight to each unvisited city
   {  done = false;
      success = getNextCity(originCity, nextCity);

      while (success && !done)
      {  done = isPath(nextCity, destinationCity);
         if (!done)
            success = getNextCity(originCity, nextCity);
      }  // end while

      return done;
   }  // end if
}  // end isPath
