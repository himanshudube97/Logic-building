#include<iostream>
using namespace std;

//my sir ji method
int main(){
    int a,b,L;
    cout<<"enter a ";
    cin>>a;
    cout<<"enter b ";
    cin>>b;
    for(L=a>b?a:b; L<=a*b; L++){
        cout<<"LCM is :"<<L;
        break;
    }

//2nd method
    int i=2,c,flag,lcm;
    while(a>1||b>1){
        if(a%i==0){
            a=a/i;
            flag=1;
        }
        if(b%i==0){
            b=b/i;
            flag=1;
        }
        if (flag==1){
            lcm=lcm*i;
        }
        else{
            i++;
        }
    }
    cout<<"lcm is"<<lcm;



}