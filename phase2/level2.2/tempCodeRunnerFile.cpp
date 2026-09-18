#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;
    int original = num;
    while (num != 0)
    {

        int digit = num % 10;
        int cube = digit * digit * digit;
        num = num / 10;

        sum += cube;
    }
    if (sum == original)
    {
        cout << "it is an armstrong number";
    }
    else
    {
        cout << "it is not an armstrong number";
    }
    return 0;
}
// check if the number is an armstrong number