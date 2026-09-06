#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;

    if (b / a == c / b)
    {
        cout << "it is a geometric progression";
    }
    else
    {
        cout << "not an geometric progression";
    }

    return 0;
}
// take three numbers and check if they are in geometric progression