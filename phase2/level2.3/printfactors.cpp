#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter number: ";
    cin >> num;

    int factors = 1;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            factors = i;
            cout << factors<<endl;
        }
    }

    return 0;
}
// print all factors of the given number
