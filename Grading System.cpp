#include <iostream>
using namespace std;

int main(){
    float mtt,edc,cds,dcld,nt,avg;
    cout<<"Enter the Marks of MTT: ";
    cin>>mtt;
    cout<<"Enter the Marks of EDC: ";
    cin>>edc;
    cout<<"Enter the Marks of CDS: ";
    cin>>cds;
    cout<<"Enter the Marks of DCLD: ";
    cin>>dcld;
    cout<<"Enter the Marks of NT: ";
    cin>>nt;
    avg=(mtt+edc+cds+dcld+nt)/5;
    cout<<"The Avg of the Marks is: "<<avg;
    cout<<"\nThe Grade is: ";
    if(avg>=90){
        cout<<"A Grade";
    }
    else if(avg>=80 and avg<90){
        cout<<"B Grade";
    }
    else if(avg>=70 and avg<80){
        cout<<"C Grade";
    }
    else if(avg>=60 and avg<70){
        cout<<"D Grade";
    }
    else if(avg>=50 and avg<60){
        cout<<"Pass Class";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}
