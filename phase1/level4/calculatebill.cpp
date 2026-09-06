#include <iostream>
using namespace std;

int main()
{

    float unit = 0;
    int rate = 0;
    cout << "enter unit and rate : ";
    cin >> unit >> rate;

    int bills = unit * rate;
    if (unit < 10000)
    {
        cout << bills << "  is your electricity bill";
    }
    else
    {
        cout << "your bill cannot calculate";
    }

    return 0;
}
// take a electricity units and calculate bill as per slabs/diffrent rate(using if-else).