
// Write a program to print the first N natural numbers in reverse order.


#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter No of Natural No you want to print in reverse";
    cin>>n;
    for(i=n;i>=1;i--){
        cout<<i<<"\n";
    }
}
