#include<iostream>
using namespace std;
void multiples(int no1, int no2,char opr);
void sub(  int no1, int no2,char opr);
main(){
float no1;
cout<<"Enter 1st number: ";
cin>>no1;

float no2;
cout<<"Enter 2nd number: ";
cin>>no2;

char opr;
cout<<"Enter an operator (+, -, *, /): ";
cin>>opr;
if(opr =='*'){
multiples(no1,no2,opr);
}
if(opr =='-'){
sub(no1,no2,opr);
}


}
void multiples(int no1,   int no2,char opr){
   
   int mul=no1*no2;
cout<<"Multiplication: "<<mul;
}

void sub(  int no1, int no2,char opr){
int sub=no1-no2;
cout<<"Subtraction: "<<sub;
}