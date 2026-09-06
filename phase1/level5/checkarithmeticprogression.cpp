#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;

    if (a - b == b - c)
    {
        cout << "it is an arithmetic progresion";
    }
    else
    {
        cout << "not a arithmetic progression";
    }

    return 0;
}
// take theree number and check if it is a arithmetic progression or not.