#include <iostream>
#include "extClockType.h"

using namespace std;

void extClockType::setTime(int hours, int minutes, int seconds, int timezone)
{
	if (0 <= hours && hours < 24)
	    hr = hours;
	else 
	    hr = 0;

	if (0 <= minutes && minutes < 60)
	    min = minutes;
	else 
	    min = 0;

	if (0 <= seconds && seconds < 60)
	    sec = seconds;
	else 
	    sec = 0;
   if (-12 <= utc && utc <= 12)
      utc = timezone;
   else
      timezone = 8;
}
void extClockType::getTime(int& hours, int& minutes, int& seconds, int& timezone) const
{
	hours = hr;
	minutes = min;
	seconds = sec;
   timezone = utc;
}
void extClockType::printTime() const
{
	if (hr < 10)
	    cout << "0";
	cout << hr << ":";

	if (min < 10)
	    cout << "0";
	cout << min << ":";

	if (sec < 10)
	   cout << "0";
	cout << sec;

   cout << " UTC ";
   if (utc >= 0)
      cout << "+ ";
   cout << utc;
}
bool extClockType::equalTime(const extClockType& otherClock) const
{
	return (hr == otherClock.hr 
		    && min == otherClock.min 
		    && sec == otherClock.sec && utc == otherClock.utc);
}
extClockType::extClockType(int hours, int minutes, int seconds, int timezone)
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else 
        hr = 0;

    if (0 <= minutes && minutes < 60)
        min = minutes;
    else 
        min = 0;

    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else 
        sec = 0;
    if (-12 <= utc && utc <= 12)
         utc = timezone;
    else
        timezone = 0;
}
