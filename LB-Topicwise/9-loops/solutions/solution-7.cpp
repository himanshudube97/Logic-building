// Write a program to count digits in a given number.

#include<iostream>
using namespace std;

int main(){
     int count=0,num;
     cout<<"enter a no to count it";
     cin>>num;
     while(num){
        num=num/10;
        count++;

     }
     cout<<"count of no"<<count;

}