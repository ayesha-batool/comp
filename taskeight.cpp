#include<iostream>
using namespace std;
void dicount(string day,int no2);
void no_discount(string day,int no2);
main(){
string day;
cout<<"Enter the day of purchase: ";
cin>>day;

int no2;
cout<<"Enter the total purchase amount: $";
cin>>no2;



if(day=="Sunday"){
dicount( day, no2);
}
if(day!="Sunday"){
no_discount( day,no2);
}


}
void dicount(string day,int no2){
    int amount;
 int pro;
 pro=no2*0.1;
amount=no2-pro;
cout<<"Payable Amount: $"<<amount;
}

void no_discount(string day,int no2){
cout<<"Payable Amount: $"<<no2;
}