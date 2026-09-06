#include <iostream>
using namespace std;

int main() {
    int x,y;

    cout<< "Enter x,y coordates: ";
    cin>> x>>y;

    if(x < 0 && y < 0){
        cout<< "point lies in third quadrant";
    }
    else if(x>0 && y< 0){
        cout<< "point lies in 4th quadrant ";
    }
    else if(x > 0 && y >0){
        cout<< "point lies in 1st quadrant";
    }
    else if(x < 0 && y > 0){
        cout<< "point lies in 2nd quadrant";
    }
    else{
        cout<<"invalid point";
    }
    
    return 0;
}
//take(x,y)coordinates and determine which quadrant the point is lie.