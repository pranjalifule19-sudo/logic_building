#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number of any digits: ";
    cin >> num;

    int product = 1;
   
    while (num > 0) //we dont know the number of iteration
    {
        int digit = num % 10;        //to extract the last digit
        product = product * digit;   
        num = num / 10;             //remove last number so the loop can iterate through remaining numbers
    }
    cout << "product of the number is = " << product;

    return 0;
}
// print a product of the digits of given number