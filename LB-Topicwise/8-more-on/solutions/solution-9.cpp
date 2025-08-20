// Write a program to print cubes of the first N natural numbers.
#include<iostream>

using namespace std;

int main(){
    int i=1,n;
    cin>>n;
    while(i<=n){
        cout<<i*i*i;
        i++;
    }


}