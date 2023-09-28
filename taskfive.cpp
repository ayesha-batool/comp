#include<iostream>
using namespace std;
void eligible(int no1);
void not_eligible(int no1);
main(){
int no1;
cout<<"Enter your age: ";
cin>>no1;


if(no1>=18){
eligible(no1);
}
if(no1<18){
not_eligible(no1);
}


}
void eligible(int no1){
cout<<"You are eligible to vote.";
}

void not_eligible(int no1){
cout<<"You are not eligible to vote.";
}