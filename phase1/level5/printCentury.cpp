#include <iostream>
using namespace std;

int main()
{

    int year;
    cout << "Enter a year : ";
    cin >> year;

    int century;

    if (year % 100 == 0)
    {
        century = year / 100;
    }
    else
    {
        century = (year / 100) + 1;
    }

    cout << century << "th century is the coresponding century of year " << year;

    return 0;
}
// take a year and prrint the coresponding century(eg.19th century and 20th centuary).