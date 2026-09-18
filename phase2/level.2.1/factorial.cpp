#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter the number: ";
    cin >> num;
    int factorial = 1;
    
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    cout << "factorial of " << num << " is " << factorial;

    return 0;
}
// print the factorial of the number.