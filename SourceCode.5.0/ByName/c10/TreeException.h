/** @file TreeException.h */

#include <stdexcept>
#include <string>

using namespace std;

/** @class TreeException
 *  Exception class for the ADT binary tree */
class TreeException : public logic_error
{
public:
   TreeException(const string & message = "")
                        : logic_error(message.c_str())
   { }  // end constructor
}; // end TreeException
