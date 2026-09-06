#include <iostream>
using namespace std;

int main()
{
    int day1, month1, day2, month2;

    cout << "Enter first date (day month): ";
    cin >> day1 >> month1;

    cout << "Enter second date (day month): ";
    cin >> day2 >> month2;

    if (month1 < month2)
    {
        cout << "date " << day1 << " of month " << month1 << " comes first in the calender";
    }
    else if (month1 > month2)
    {
        cout << "date " << day2 << " of month " << month2 << " comes first in the calender";
    }
    else
    {

        if (day1 < day2)
        {
            cout << "date " << day1 << " of month " << month1 << " comes first in the calender";
        }
        else if (day1 > day2)
        {
            cout << "date " << day2 << " of month " << month2 << " comes first in the calender";
        }
        else
        {
            cout << "Both dates are same";
        }
    }

        return 0;
    }
    // take two dates (date and month)and determine which one comes first in the calender.