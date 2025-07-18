#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the coordinate of Object(Only x coordinate): ";
    cin>>x;
    cout<<"Enter the coordinate of Object(Only y coordinate): ";
    cin>>y;
    if(x>0 and y>0){
        cout<<"The Object is in 1st Quadrant";
    }
    else if(x>0 and y<0){
        cout<<"The Object is in 4th Quadrant";
    }
    else if(x<0 and y>0){
        cout<<"The Object is in 2nd Quadrant";
    }
    else if(x<0 and y<0){
        cout<<"The Object is in 3rd Quadrant";
    }
    else{
        cout<<"The Object is on Origin";
    }
    return 0;
}