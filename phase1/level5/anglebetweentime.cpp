#include <iostream>
#include<cmath>
using namespace std;

int main()
{

    int minute, hour;
    cout << "Enter time(hour and minute): ";
    cin >> hour >> minute;

    double HourAngle = 30 * hour + 0.5 * minute;
    double minuteAngle = 6 * minute;

    double angle = abs(HourAngle - minuteAngle);

    if (angle > 180)
    {
        angle = 360 - angle;
    } 
        cout << angle;
    
        return 0;
    }
// take time in minute and hour and print angle between the time
