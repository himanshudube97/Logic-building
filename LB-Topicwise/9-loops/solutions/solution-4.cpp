// Write a program to calculate the sum of squares of first N natural numbers.

#include<iostream>
using namespace std;

int main(){
    int sum=0,i,n;
    cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+i*i;
    }

    cout<<sum;
    
}