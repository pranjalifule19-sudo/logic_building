#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;

    for (int i = 1; i <= num; i++)
    {

        if (num % i == 0)
        {

            sum += i;
        }
    }
    cout << sum;

    return 0;
}
//print the sum of the factors of a number