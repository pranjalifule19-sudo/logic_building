#include <iostream>
using namespace std;

int main() {
    
    char alpha;
    cout<<"Enter a character :";
    cin>>alpha;

    
    if(alpha >= 'a' && alpha <= 'm'){
        cout<<"character is lies between a and m ";
    }
    else{
        cout<<"character is lies between n and z ";
    }

    return 0;
}