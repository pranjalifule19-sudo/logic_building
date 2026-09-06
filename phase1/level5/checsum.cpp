#include <iostream>
using namespace std;

int main()
{

    int digit;
    cout << "Enter three digit number";
    cin >> digit;

    int first = digit / 100;        //  n/10^(digit-1) ----- 123/10^(3-1)
    int last = digit % 10;          // n%10
    int middle = (digit / 10) % 10; //  (n/10^(n/2))%10

    if (first + last == middle)
    {
        cout << "middle digit is equal to the sum of first and last digit";
    }

    else
    {
        cout << "not equals";
    }
    return 0;
}
// take three digit number and check if sum of first last digit is equals to the middle digit.