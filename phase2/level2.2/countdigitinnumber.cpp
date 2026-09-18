#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count = 0;

    while (num != 0)
    {
        num = num / 10; //remove last digit in each iteration
        count++;         //count that removed digit
    }
    cout << "Number of digits = " << count;

    return 0;
}
// count the number of digits in given number
