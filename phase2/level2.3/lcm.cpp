#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two number : ";
    cin >> a >> b;

    int lcm;
    int start;
    if (a < b)
    {
        start = a;
    }
    else
    {
        start = b;
    }
    for (int i = start;; i++)
    {

        if (i % a == 0 && i % b == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}