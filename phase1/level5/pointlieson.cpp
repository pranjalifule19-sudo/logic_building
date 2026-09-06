#include <iostream>
using namespace std;

int main() {
    
    int num1,num2 = 0;
    cout<<"Enter the x and y coordinates : ";
    cin>>num1>>num2;

    if((num1 == 0 && num2 >0)|| (num1 == 0 && num2 < 0))
    {
        cout<< " point lies on y axis";
    }
    else if((num2 == 0 && num1 < 0) ||(num2 == 0 && num1 > 0))
    {
        cout<<" point lies on x axis";

    }else if(num1==0 && num2 == 0){

        cout<<"point lies on origin";
    }else {
        cout<<"lies between the quadrant";
    }

    return 0;
}
//take  a coordinate (x,y) and check if the point lies on x-axis,y-axis or on the origin.