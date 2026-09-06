#include <iostream>
using namespace std;

int main() {
    
   int marks = 0;
   cout<<"Enter your marks:";
   cin>>marks;
    
   if(marks > 95 && marks < 100){
    cout<< "grade is A";
   }else if(marks> 75 && marks< 95){
    cout<< "grade is B";
   }else if(marks > 50 && marks< 75){
    cout<< "grade is C";
   }else{
    cout<< "grade is D";
   }

    return 0;
}