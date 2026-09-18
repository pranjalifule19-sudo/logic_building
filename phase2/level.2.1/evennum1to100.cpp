#include <iostream>
using namespace std;

int main()
{

    int even;
    for (int i = 2; i <= 100; i++)
    {

        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
//print even numbers from 1 to 100
