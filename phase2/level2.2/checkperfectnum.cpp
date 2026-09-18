#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int original = num;
    
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num %i  == 0)
        {
            sum = sum + i;
           
        }
    }
    
    
    if (sum == original)
    {

        cout << num <<" is a prfet number";
    }
    else
    {
        cout << num<<" is not a perfect number";
    }

    return 0;
}
// check if the number is a pefect number
// If the sum of all factors except the number itself equals the number, it is called a Perfect Number.