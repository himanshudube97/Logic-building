// Write a program to print the first N even natural numbers in reverse order.

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    while(n>0){
       cout<<n*2<<"\n";
       n--;
    }
}