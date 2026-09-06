#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<< "Enter three numbers";
    cin>>a>>b>>c;
     
    if(a+b>c && b+c>a && a+c>b){
        if(a==b && b==c){
            cout<< "isoscelen triangle";
        }
        else if(a==b && b==c && a==c){
            cout<< "equilateral triangle";
        }
        else{
            cout<< "scelen triangle";
        }
    }

    return 0;
}