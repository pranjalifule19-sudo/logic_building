#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;
    for (int i = 2; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum << " ";

    return 0;
}
//print the sum of all even number to the n