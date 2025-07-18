#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;
    if(a>0){
        cout<<"The Number is Positive";
    }
    else if(a<0){
        cout<<"The Number is Negative";
    }
    else{
        cout<<"The Number is Zero";
    }
    return 0;
}
