#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << sum << " ";

    return 0;
}
// print the sum of n natural numbers