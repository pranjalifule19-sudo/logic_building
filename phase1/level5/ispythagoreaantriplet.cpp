#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter tree numbers : ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        int sum = b * b + c * c;
        if (sum == a * a)
        {
            cout << " it is a pythagorian triplet";
        }
        else
        {
            cout << "not a pythagorian triplet";
        }
    }
    else if (b > a && b > c)
    {
        int sum = a * a + c * c;
        if (sum == b * b)
        {
            cout << "it is a pythagorian triplet";
        }
        else
        {
            cout << "not a pythagorian triplet";
        }
    }
    else if (c > a && c > b)
    {
        int sum = a * a + b * b;
        if (sum == c * c)
        {
            cout << "it is a pythagorian triplet";
        }
        else
        {
            cout << "not a pythagorian triplet";
        }
    }
    else
    {
        cout << "not a pythagorian triplet";
    }

    return 0;
}
// take 3  number and check if they form pythagorean triplet