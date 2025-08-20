// Write a program to print the first N odd natural numbers in reverse order.
// Write a program to print the first 10 odd natural numbers in reverse order.
#include<iostream>
using namespace std;

int main(){
    // int i=10;
    // while(i>=1){
    //     printf("%d\n",2*i-1);
    //     i--;
// }
    int n;
    cin>>n;
    while(n){
        cout<<2*n-1;
        n--;
    }
}