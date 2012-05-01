/** Reads and organizes income statistics.
 * @param incomeData  A TableType of income statistics.
 * @pre The calling program gives directions and prompts the
 *      user. Each input line contains exactly two integers in the
 *      form <tt>G N</tt>, where <tt>N</tt> is the number of people
 *      with an income in the <tt>G</tt>-thousand-dollar group and
 *      <tt>LOW_END <= G <= HIGH_END</tt>. An input line with values
 *      of zero for both <tt>G</tt> and <tt>N</tt> terminates the
 *      input.
 * @post <tt>incomeData[G - LOW_END]</tt> = total number of people
 *       with an income in the <tt>G</tt>-thousand-dollar group. The
 *       values read are displayed. If either <tt>G</tt> or <tt>N</tt>
 *       is erroneous (either <tt>G < LOW_END</tt>, <tt>G >
 *       HIGH_END</tt>, or <tt>N < 0</tt>), the function ignores the
 *       data line and continues.
 * @return Returns <tt>false</tt> if either <tt>G</tt> or <tt>N</tt>
 *         are erroneous (either <tt>G < LOW_END</tt>, <tt>G >
 *         HIGH_END</tt>, or <tt>N < 0</tt>) for any data line
 *         read. In this case, the calling program should take
 *         action. The return value is <tt>true</tt> if the data is
 *         error free. */
bool readData(TableType incomeData)
{
   int group, number;  // input values
   bool dataCorrect = true;  // no data error found as yet

   for (group = LOW_END; group <= HIGH_END; ++group)
      incomeData[index(group)] = 0;

   for (cin >> group >> number;
	(group != 0) || (number != 0);
	cin >> group >> number) {
      // Invariant: group and number are not both 0
      cout << "Input line specifies that income group "
	   << group << "\ncontains " << number
	   << " people.\n";

      if ((group >= LOW_END) && (group <= HIGH_END) &&
	  (number >= 0))
	 // input data is valid -- add it to tally
	 incomeData[index(group)] += number;

      else
	 // error in input data: set error flag and
	 // ignore input line
	 dataCorrect = false;
   }  // end for
   return dataCorrect;
}  // end readData
