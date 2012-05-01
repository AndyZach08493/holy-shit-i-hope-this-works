/** Writes a character string backward, iterative version.
 * @pre The string s contains size characters, where size >= 0.
 * @param s The string to write backward.
 * @param size The length of s.
 * @post None. */
void writeBackward(string s, int size)
{
   while (size > 0)
   {  cout << s.substr(size-1, 1);
      --size;
   } // end while
} // end writeBackward
