#include <iostream>
using namespace std;

int main() {
    
   string password;
   char ch;
   cout<<"Enter a password : ";
   cin>>password;
      
    bool digit = false;

      for(char ch : password) {
        if(ch >= '0' && ch <= '9') {
            digit = true;
            break;
    }
}
    if(password.length() >= 8 && digit)
    {
        cout << "Valid Password";
    }
        else{

            cout << "Invalid Password";
        }
    return 0;
}
//take password string and check basic rules(length>=8 and must contain atleast 1 digit)