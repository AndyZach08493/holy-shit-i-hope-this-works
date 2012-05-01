#ifndef QUEEN_H
#define QUEEN_H

class Board; // declaration of Board class

/** @class Queen
 * The Queen class. */
class Queen
{
public:
   /** Puts queen in upper left corner of board. */
   Queen();
   /** Places Queen in supplied location. */
   Queen(int inRow, int inCol);

   /** @return Column number.  */
   int getCol() const;
   /** @return Row number.     */
   int getRow() const;
   /** Moves queen to next row.*/
   void nextRow();

   /** Determines whether the queen is under attack by another queen.
    * @return If there is a queen in the same row or the same
    *         diagonal, returns true; otherwise, returns false. */
   bool isUnderAttack() const;

   /** Saves a pointer to the board for all queens. */
   static void setBoard(const Board *bPtr);

private:
   /** Row (or prospective row) of queen if it is on the board. */
   int row;
   /** Column (or prospective column) of queen if it is on the board. */
   int col;

   /** All queens share the same board. */
   static const Board *boardPtr;
}; // end Queen

#endif
