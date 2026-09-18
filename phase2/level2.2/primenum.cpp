#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;
    bool isprime = false;

    for (int i = 2; i <= num; i++)
    {

        for (int i = 2; i < num; i++)
        {

            if (num % i == 0)
            {

                isprime = true;
            }
        }
    }
    if (isprime)
    {

        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
    return 0;
}
// print all the prime number fom 1 to 100