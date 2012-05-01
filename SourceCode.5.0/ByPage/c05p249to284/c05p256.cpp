bool Board::placeQueens(Queen *queenPtr)
{
   // Base case.  Trying to place Queen in a non-existent column.
   if (queenPtr->getCol() >= BOARD_SIZE)
   {  delete queenPtr;
      return true;
   }  // end if

   bool isQueenPlaced = false;

   while (!isQueenPlaced && queenPtr->getRow() < BOARD_SIZE)
   {  // If the queen can be attacked, then try moving it to the
      // next row in the current column.
      if (queenPtr->isUnderAttack())
	 queenPtr->nextRow();
      // Else put this queen on the board and try putting a new
      // queen in the first row of the next column.
      else
      {  setQueen(queenPtr);
         Queen *newQueenPtr = new Queen(0, queenPtr->getCol() + 1);
         isQueenPlaced = placeQueens(newQueenPtr);
         // If it wasn't possible to put the new Queen in the next
	 // column, backtrack by deleting the new Queen and
	 // removing the last Queen placed and moving it down one
	 // row.
	 if (!isQueenPlaced)
	 {  delete newQueenPtr;
            removeQueen();
	    queenPtr->nextRow();
	 }  // end if
      }  // end if
   }  // end while
   return isQueenPlaced;
}  // end placeQueens
