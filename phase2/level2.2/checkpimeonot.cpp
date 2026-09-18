#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count = 0;

    for (int i = 2; i <= num; i++)
    {

        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        cout << num << " is a prime number ";
    }
    else
    {
        cout << num << " is not a prime number";
    }
    return 0;
}
// check if a number is pime or not