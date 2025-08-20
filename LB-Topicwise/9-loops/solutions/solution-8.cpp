
#include<iostream>
using namespace std;

int main(){
    int num,i;
    cout<<"Enter a No";
    cin>>num;
    for(i=2;i<=num-1;i++){
            if(num%i==0){
               break;
            }
        }
    
if(i==num){
     cout<<"prime";
        }
else {
     cout<<"it is a not prime no ";
        }
}