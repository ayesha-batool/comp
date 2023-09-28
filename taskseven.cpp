#include<iostream>
using namespace std;
void even(int no1);
void odd(int no1);
main(){
int no1;
cout<<"Enter a number: ";
cin>>no1;


if(no1%2==0){
even(no1);
}
if(no1%2!=0){
odd(no1);
}


}
void even(int no1){
cout<<"Number "<<no1<<" is even";
}

void odd(int no1){
cout<<"Number "<<no1<<" is odd";
}