#include<iostream>
using namespace std;
void howManyStickers(float no1);
main(){
float no1;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>>no1;
howManyStickers(no1);

}
void howManyStickers(float no1){
float pro;
pro=(no1*no1)*6;
cout<<"Number of stickers needed: "<<pro;


}
