#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter a number: ";
    cin >> number;

    int last = number % 10;
    int middle = (number / 100) % 10;
    int mid = (number / 10) % 10;
    int first = number / 1000;

    int sum = (last + middle + mid + first);
    int product = (last * middle * mid * first);

    if (sum > product)
    {
        cout << "the sum of " << number << " is greater than its product";
    }
    else
    {
        cout << "its product is greater than the number";
    }
    return 0;
}
// take a number from(1-9999)and check if its sum is greater than its product.