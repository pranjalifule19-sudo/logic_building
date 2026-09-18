#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int original = num;
    int sum = 0;

    while (num > 0)
    {

        int digit = num % 10;
        num = num / 10;
        int factorial = 1;

        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }
        sum += factorial;
    }
    if (sum == original)
    {
        cout << "strong number";
    }
    else
    {
        cout << "not a  strong number";
    }

    return 0;
}
// check if a number is a strong number(sum of factorial of digits = number)