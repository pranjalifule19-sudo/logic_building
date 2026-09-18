#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int reverse = 0;
    while (num != 0)
    {
                                            //for 12345
        int digit = num % 10;             //extract last digit , 5
        reverse = reverse * 10 + digit;   //0*10+5 = 5 then  5*10+4= 54  and so on till num!= 0
        num = num / 10;                      //remove last digit
    }
    cout << reverse;

    return 0;
}
// print the reverse of the given number