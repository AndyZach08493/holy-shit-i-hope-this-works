/** @file HeapException.h */

#include <stdexcept>
#include <string>

using namespace std;

/** @class HeapException
 * Exception class for the ADT heap. */
class HeapException : public logic_error
{
public:
   HeapException(const string & message = "")
                 : logic_error(message.c_str())
   { }  // end constructor
}; // end HeapException
