//this is the class where exception is handled. if exception occurs , then these blocks of code handles the error.
#include<stdexcept>
using namespace std;
class RangeErrorException: public runtime_error
{
public:
    RangeErrorException():runtime_error("attempted to enter value out of range"){}


};
