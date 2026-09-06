#include <iostream>
using namespace std;

int main() {
    
    int num =0;
    cout<<"Enter a day number";
    cin>>num;

    if(num>1 && num< 7){
        cout<<"weekdays";
    }else{
        cout<<"weekends";
    }

    return 0;
}
//take day number and print wheather it is weekday orr weekend.