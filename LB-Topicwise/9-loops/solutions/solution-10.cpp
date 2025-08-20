#include<iostream>
using namespace std;

int main(){
    int num=342,rev=0,last_digit;
    while(num){
        last_digit=num%10;
        num=num/10;
        rev=last_digit+rev*10;
    }
    cout<<"reverse of that no is"<<rev;
}