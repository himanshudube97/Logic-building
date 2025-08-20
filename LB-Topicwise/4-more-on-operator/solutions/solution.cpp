#include<iostream>
using namespace std;

// Write a program to input a three-digit number and display the sum of the digits.
int main(){
    int threeDigitNumber,sum=0;
    cout<<"enter the three digit number";
    cin>>threeDigitNumber;
    sum= (threeDigitNumber/100)+((threeDigitNumber/10)%10)+(threeDigitNumber%10);
    cout<<"sum of the digits is "<<sum;
    return 0;
 
}

// Write a program to find the ASCII code of the character '+'.
int main(){
    char character='+';
    cout<<int(character);
    return 0;
}
// Write a program to print the size of an int, a float, a char, and a double type variable.
int main(){
    int a;
    float b;
    char c;
    double d;
    cout<<"size of int is "<<sizeof(a)<<endl;
    cout<<"size of float is "<<sizeof(b)<<endl;
    cout<<"size of char is "<<sizeof(c)<<endl;
    cout<<"size of double is "<<sizeof(d)<<endl;
    return 0;
}

// Write a program to make the last digit of a number stored in a variable as zero.
// Example: If x=2345, then make it x=2340.
int main(){
    int x;
    cout<<"enter the number";
    cin>>x;
    x=(x/10)*10;
    cout<<"number after making last digit zero is "<<x;
    return 0;
}

// Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
// Example: If number=234 and digit=9, then the resulting number is 2349.

int main(){
    int number,digit;
    cout<<"enter the number";
    cin>>number;
    cout<<"enter the digit";
    cin>>digit;
    number=(number*10)+digit;
    cout<<"resulting number is "<<number;
    return 0;
}


// Assume the price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.

int main(){
    double inr,usd;
    cout<<"enter the amount in INR";
    cin>>inr;
    usd=inr/84.23;
    cout<<"amount in USD is "<<usd;
    return 0;
}

// Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
int main(){
    int threeDigitNumber,rotatedNumber;
    cout<<"enter the three digit number";
    cin>>threeDigitNumber;
    rotatedNumber=(threeDigitNumber%10)*100+(threeDigitNumber/10);
    cout<<"rotated number is "<<rotatedNumber;
    return 0;
}

// What will be the value stored in the variable x after executing the following statement:
// x=10>8>4;

int main(){
    int x;
    x=10>8>4;
    cout<<x;
    return 0;
}
// What will be the value stored in the variable x after executing the following statement:
// x=!2>-2;
int main(){
    int x;
    x=!2>-2;
    cout<<x;
    return 0;
}
// What will be the value stored in the variable x after executing the following statement:
// x=3<0&&5>0;
int main(){
    int x;
    x=3<0&&5>0;
    cout<<x;
    return 0;
}