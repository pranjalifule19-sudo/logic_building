#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>> num;

    if(num > -9 && num < 9)
    {
        cout<< num << " is a single digit integer";
    }
    else if(num > 99 && num < 99)
    {
        cout<< num<< "is a double digit integer";
    }
    else
    {
        cout<< num << " is a multi digit integer";
    }

    return 0;
}
//check wheather a integer is single digit ,doubledigit ,or multidigit.