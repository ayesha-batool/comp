#include<iostream>
using namespace std;
void inchesToFeet(float no1);
main(){
float no1;
cout<<"Enter the measurement in inches: ";
cin>>no1;
inchesToFeet(no1);

}
void inchesToFeet(float no1){
float pro;
pro=no1/12;
cout<<"Equivalent in feet: "<<pro;




}
