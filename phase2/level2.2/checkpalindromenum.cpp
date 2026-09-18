#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int original = num; //whenever we have to compare original number, make the copy of the original number
    int reverse = 0;

    while (num != 0)
    {

        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (reverse == original)
    {
        cout << "it is a palindrome number";
    }
    else
    {
        cout << "Not a palindrome number";
    }

    return 0;
}
// check if the number is a palindrome