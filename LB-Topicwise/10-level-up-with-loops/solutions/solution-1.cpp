// Write a program to find the Nth term of the Fibonacci series.

#include<iostream>
using namespace std;

int main(){
    int i,fibbo=0,n;
    cout<<"nth term of the fibonacci series"<<"\n";
    cin>>n;
    for(i=0;i<=n;i++){
        fibbo=fibbo+i;
    }
    cout<<"fibbo nth term : "<<" "<<fibbo;
}