#include <iostream>
using namespace std;

int main()
{
    int a, r, n;
    cout << "Enter first term: ";
    cin >> a;
    cout << "Enter common ratio: ";
    cin >> r;
    cout << "Enter the last term: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        a = a * r;
    }

    return 0;
}
// print first n terms of geometric progression