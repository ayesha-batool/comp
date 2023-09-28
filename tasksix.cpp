#include<iostream>
using namespace std;
void eligible(int no1);
void not_eligible(int no1);
main(){
int no1;
cout<<"Enter your score: ";
cin>>no1;


if(no1>50){
eligible(no1);
}
if(no1<=50){
not_eligible(no1);
}


}
void eligible(int no1){
cout<<" Pass";
}

void not_eligible(int no1){
cout<<"Fail";
}