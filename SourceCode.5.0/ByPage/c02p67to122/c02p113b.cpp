/** Writes a character string backward.
 * @pre The string s contains size characters, where size >= 0.
 * @post None.
 * @param s  The string to write backward.
 * @param size  The length of s. */
void writeBackward(string s, int size)
{
   if (size > 0)
   {  // write last character
      cout << s.substr(size-1, 1);
      writeBackward(s, size-1);  // write rest
   }  // end if
}  // end writeBackward
