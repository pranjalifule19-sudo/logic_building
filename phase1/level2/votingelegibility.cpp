#include <iostream>
using namespace std;

int main() {
    
  int age = 0;
  cout<< "Enter your age : ";
  cin>> age;

  if(age > 18){
    cout<< "You are eligible";
  }else{
    cout<< " You are not elegible";
  }

    return 0;
}