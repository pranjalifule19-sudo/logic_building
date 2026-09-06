#include <iostream>
#include <string>
using namespace std;

int main() {
    
   char ch;
   cout<< "Enter any character :";
   cin>>ch;
   if(ch == 'a'|| ch == 'e'|| ch == 'i' ||ch == 'o'|| ch =='u'){
    cout<< "vovels";
   }else{
    cout<<"constant";
   }

    return 0;
}