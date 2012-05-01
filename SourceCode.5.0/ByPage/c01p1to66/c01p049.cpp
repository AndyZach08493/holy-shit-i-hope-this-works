/** Ten-thousand dollar income. */
const int LOW_END    = 10;
/** 100-thousand dollar income. */
const int HIGH_END   = 100;
const int TABLE_SIZE = HIGH_END - LOW_END + 1;
typedef int TableType[TABLE_SIZE];

/** @return The array index that corresponds to group number. */
int index(int group)
{
   return group - LOW_END;
}  // end index

/** Reads and organizes income statistics.
 * @param incomeData  A TableType of income statistics.
 * @pre  The calling module gives directions and prompts user. Input
 *       data is error-free and each input line is in the form
 *       <tt>G N</tt>, where <tt>N</tt> is the number of people with
 *       an income in the <tt>G</tt>-thousand-dollar group and
 *       <tt>LOW_END <= G <= HIGH_END</tt>. An input line with values
 *       of zero for both <tt>G</tt> and <tt>N</tt> terminates the
 *       input.
 * @post <tt>incomeData[G - LOW_END]</tt> = total number of people
 *       with an income in the <tt>G</tt>-thousand-dollar group for
 *       each <tt>G</tt> read. The values read are displayed. */
void readData(TableType incomeData)
{
   int group, number; // input values

   // clear array
   for (group = LOW_END; group <= HIGH_END; ++group)
      incomeData[index(group)] = 0;

   for (cin >> group >> number;
	(group != 0) || (number != 0);
	cin >> group >> number) {
      // Invariant: group and number are not both 0
      //    cout << "Income group " << group << " contains "
      //	 << number << " people.\n";
      incomeData[index(group)] += number;
   }  // end for
}  // end readData
