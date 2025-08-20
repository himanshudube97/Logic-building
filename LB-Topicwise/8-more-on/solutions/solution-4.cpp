// Write a program to print the first N odd natural numbers.

#include<iostream>
using namespace std;

int main(){
    int i,oddNoTill;
    cout<<"Enter No of Natural No you want to print";
    cin>>oddNoTill;
    for(i=1;i<=oddNoTill*2;i=i+2){
        cout<<i<<"\n";
        
    }
}
