// Write a program to calculate the factorial of a number.

#include<iostream>
using namespace std;

int main(){
    int i,fact,calcFact=1;
    cout<<"enter whose factorial to be calculated";
    cin>>fact;
    for(i=fact;fact>0;fact=fact-1){
        calcFact=calcFact*fact;
    }
    cout<<"factorial is "<<calcFact;
}