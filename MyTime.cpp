#include <iostream>
#include "MyTime.h"
#include "RangeErrorException.h"
#include <sstream>
using namespace std;
MyTime::MyTime(){}

MyTime::MyTime(int hour, int minute, int second)
    {
        setTime(hour, minute, second);
    }
    void MyTime::setTime(int hour, int minute, int second)
    {
         setHour(hour);
         setMinute(minute);
         setSecond(second);

        }
        void MyTime::setHour(int hour)
        {
            if (hour>=0 && hour<=23)
            {
                this->hour=hour;
            }
            else{
                throw RangeErrorException();
            }
        }
        int MyTime::getHour()
        {
            return hour;
        }
            void MyTime::setMinute(int minute)
            {
                if(minute>=0 && minute<=59)
                {
                    this->minute=minute;
                }
                else{
                    throw RangeErrorException();//if condition is not fulfilled, RangeErrorException function is called which carries exception message.
                }
               }
               int MyTime::getMinute()
               {
                   return minute;
               }
               void MyTime::setSecond(int second)
               {
                   if(second>=0 && second<=59){
                    this->second=second;
                   }
                   else{
                    throw RangeErrorException();
                   }
               }
                   int MyTime::getSecond()
                   {
                       return second;
                   }

               string MyTime:: toString()
               {
                   stringstream hour, minute, second;
                   hour<<getHour();
                   minute<<getMinute();
                   second<<getSecond();
                   return hour.str()+":"+ minute.str()+":"+second.str();//since hour, minute and second is integer, therefore stringstream is used to convert integers to string.

               }
MyTime MyTime::nextSecond()

{
    if (++second==60)//checks if next second is 60 or not if the next second ie if input is 59, next second will be 60
    {
        setSecond(0);//when next second is 60, it resets the second ie make it zero.
        minute++;//since after 60 seconds, one minute is completed, therefore after second reaches 60, minute is added by 1.
        if(minute==60)
        {
            setMinute(0);//similar to second
            hour++;//after completion of 60 minute hour is increased by 1.
        }
        if(hour==24)//hour is measured from 0-23, if it reaches 24, then hour gets reset.
        {
            setHour(0);
        }

    }
    else
    {
        setSecond(second++);//if none condition is met, then second gets increased by 1.

    }
    return MyTime();//the time gets reset in MyTime and is returned
}
MyTime MyTime::nextMinute()
{
    if(++minute==60)
    {
        setMinute(0);
        hour++;
    }
    else{
        setMinute(minute++);
    }
    return MyTime();
}
MyTime MyTime:: nextHour()
{
    if(++hour==24)
    {
        setHour(0);

    }
    else{
        setHour(hour++);
    }
    return MyTime();
}










