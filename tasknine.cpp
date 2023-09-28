#include<iostream>
using namespace std;
void dis(float no2);
void no_dis(float no2);
main(){

float no2;
cout<<"Enter the distance: ";
cin>>no2;

if(no2>10){
dis( no2);
}
if(no2<=10){
no_dis( no2);
}
}
void dis( float no2){
    int amount;
amount=no2*10;
cout<<"Fuel needed: "<<amount;
}

void no_dis( float no2){
    int no;
    no=100;
cout<<"Fuel needed: "<<no;
}