#include <iostream>
#ifndef MYTIME_H
#define MYTIME_H
using namespace std;
class MyTime{
private:
   int second;
   int minute;
   int hour;
public:
    MyTime();
    MyTime(int , int , int );
    void setTime(int , int , int );
    void setHour(int );
    int getHour();
    void setMinute(int );
    int getMinute();
    void setSecond(int );
    int getSecond();
    string toString();
    MyTime nextSecond( );
    MyTime nextMinute( );
    MyTime nextHour() ;
};
#endif // MYTIME_H












