#include<iostream>
using namespace std;
void calculateFuel(float no1);
main(){
float no1;
cout<<"Enter the distance: ";
cin>>no1;
calculateFuel(no1);
}
void calculateFuel(float no1){
float pro;
pro=no1*10;
cout<<"Fuel needed: "<<pro;
}
