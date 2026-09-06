#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3;
    cout << "Enter three numbers : ";
    cin >> num1 >> num2 >> num3;

    if ((num1 > num2 && num1 < num3)
        || (num1 > num3 && num1 < num2))
        {
            cout << num1 << " is the median ";
        }
    else if ((num2 > num1 && num2 < num3)
        || (num2 > num3 && num2 < num1))
        {
            cout << num2 << " is the median";
        }
    else
    {
        cout << num3 << " is a median";
    }
    
    return 0;
}
// take three numbers and print the median value (neither maximum nor minimum).