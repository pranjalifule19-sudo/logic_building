#include <iostream>
using namespace std;

int main() {
    char ch;

    cout<<"enter a character : ";
    cin>>ch;

    if(ch >= 'a' && ch <='z'){
        cout<<ch<<" is a letter";
    }else if(ch <= '9' && ch >= '0'){
        cout<<ch <<" is a digit";
    }else{
        cout<<"neither";
    }
    return 0;
}
//take a character or check if it is a letter ,a digit ,or neither.
