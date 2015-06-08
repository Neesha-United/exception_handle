#include <iostream>
#include "MyTime.h"
#include "RangeErrorException.h"
using namespace std;

int main()
{
    int hour, minute, second;
    MyTime myTime;
   while
        (cout<<"Enter Time in the given format ie. Hour:Minute:second  ")
    {


    cin>>hour>>minute>>second;
    try{
        myTime.setTime(hour, minute, second);//time is set here if exception occurs than catch will handle it.
         break;//if everything is correct then the loop gets break and continues with other operation.
    }
    catch(RangeErrorException &RangeErrorException)//if exception occurs, then it will display the error message and the user have to input the value within the range.
    {
        cout<<"Exception error: "<<RangeErrorException.what()<<endl;//if exception occurs then it will perform the task in specified function.

    }
   }
    myTime.nextSecond();
    cout<<"Time on next Second :: "<<myTime.toString()<<endl;

     myTime.nextMinute();
     cout<<"Time on next  Minute :: "<<myTime.toString()<<endl;

     myTime.nextHour();
     cout<<"Time on  next hour :: "<<myTime.toString()<<endl;



}
