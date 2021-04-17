#ifndef extClockType_H
#define extClockType_H

#include "clockType.h"

class extClockType: public clockType
{
    private:
    int utc;
    int hr;
    int min;
    int sec;
    public:
    void setTime(int hours, int minutes, int seconds, int timezone);
    void getTime(int& hours, int& minutes, int& seconds, int& timezone) const;
    bool equalTime(const extClockType& otherClock) const;
    void printTime() const;
    extClockType(){}
    extClockType(int hours, int minutes, int seconds, int timezone);
   ~extClockType(){}

};
#endif