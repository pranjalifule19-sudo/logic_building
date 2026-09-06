#include <iostream>
using namespace std;

int main() {
    int num = 0;

    cout<<"Enter an integer :";
    cin>>num;

    int end = num %10;

    if(num%7 == 0){
        cout<<"an integer is multiple of 7";
    }
    else if(end == 7){
        cout<< "an integer is end on 7";
    }
    else{
        cout<< "not satisfied any condition";
    }
   
    return 0;
}
//check if a number is multiple of 7 or end on 7 .