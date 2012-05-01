/** @file Board.h */

#ifndef BOARD_H
#define BOARD_H

#include "Queen.h"
#include <vector>
#include <iostream>

using namespace std;

static const int BOARD_SIZE = 8;

/** The Board class. */
class Board
{
public:
   /** Supplies the Queen class with a pointer to the board. */
   Board();
   /** Clears the board and removes pointer from queens. */
   ~Board();

   /** Clears board.   */
   void clear();
   /** Displays board. */
   void display() const;

   /** Initiates the Eight Queens problem. */
   void doEightQueens();

   /** @return The number of queens on the board. */
   int getNumQueens() const;

   /** @return A pointer to the queen at the designated index. */
   const Queen *getQueen(int index) const;

private:

   /** Determines whether there is a queen in position (inRow,
    *  inCol). */
   bool isQueen(int inRow, int inCol) const;

   /** Attempts to place queens on board starting with the
    *  designated queen. */
   bool placeQueens(Queen *queenPtr);

   /** Removes the last queen on the board, but does not delete
    *  it. */
   void removeQueen();

   /** Places a queen on the board. */
   void setQueen(const Queen *queenPtr);

  /** Array of queens on the board. */
   vector<const Queen *> queens;
}; // end Board

#endif

