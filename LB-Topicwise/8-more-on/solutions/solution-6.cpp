// Write a program to print the first N even natural numbers.
#include<iostream>
using namespace std;
int main(){
    int i=0, n;
    cin>>n;
    while(i<n*2){
       cout<<i<<"\n";
       i=i+2;

    }
}