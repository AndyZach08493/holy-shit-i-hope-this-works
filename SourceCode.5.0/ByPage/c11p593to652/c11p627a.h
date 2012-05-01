/** @file PQueueException.h */

#include <stdexcept>
#include <string>

using namespace std;

/** @class PQueueException
 * Exception class for the ADT priority queue. */
class PQueueException : public logic_error
{
public:
   PQueueException(const string & message = "")
      : logic_error(message.c_str())
   { }  // end constructor
}; // end PQueueException
