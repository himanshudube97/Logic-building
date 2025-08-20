// Write a program to calculate the sum of first N even natural numbers.

#include<iostream>
using namespace std;

int main(){
    int i,n,sum=0;
    cout<<"enter a no";
    cin>>n;
    for(i=0;i<=n*2;i=i+2){
        sum=sum+i;
    }
    cout<<"total sum is " <<sum;
}