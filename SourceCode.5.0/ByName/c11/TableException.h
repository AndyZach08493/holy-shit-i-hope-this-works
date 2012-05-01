/** @file TableException.h */

#include <stdexcept>
#include <string>

using namespace std;

/** @class TableException
 * Exception class for the ADT Table. */
class TableException : public logic_error
{
public:
   TableException(const string & message = "")
      : logic_error(message.c_str())
   { }  // end constructor
}; // end TableException
