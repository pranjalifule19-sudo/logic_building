#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    // int sum = 0;
    // int original = num;

    // this logic is for only 3 digit number

    // while (num != 0)
    // {

    //     int digit = num % 10;
    //     int cube = digit * digit * digit;
    //     num = num / 10;

    //     sum += cube;
    // }
    // if (sum == original)
    // {
    //     cout << "it is an armstrong number";
    // }
    // else
    // {
    //     cout << "it is not an armstrong number";
    // }

    // code for any digit number

    int original = num;
    int temp = num;
    int sum = 0;
    int digits = 0;
    

    // first count digits

    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    // calculating sum for armstrong number

    temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        int power =1;

        for (int i = 0; i < digits; i++)
        {

            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == original)
    {
        cout << "it is an armstrong number";
    }
    else
    {
        cout << "not an armstrong number";
    }

    return 0;
}
// check if the number is an armstrong number