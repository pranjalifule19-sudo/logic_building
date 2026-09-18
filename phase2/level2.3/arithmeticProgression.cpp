#include <iostream>
using namespace std;

int main()
{

    int a, d, n;
    cout << "Enter first term: ";
    cin >> a;
    cout << "Enter common difference: ";
    cin >> d;
    cout << "Enter the last term: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cout << a << " ";
        a = a + d;
    }
    return 0;
}
// print first n numbers of arithmetic progression