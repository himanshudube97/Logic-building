#include<iostream>
using namespace std;

// Write a program to check whether a given number is positive or non-positive.
int main(){
    int No;
    cout << "Enter a number: ";
    cin >> No;
    if (No > 0) {
        cout << "Positive";
    } else {
        cout << "Non-positive";
    }
    return 0;
}

// Write a program to check whether a given number is divisible by 5 or not.
int main(){
    int no;
    cout << "Enter a number: ";
    cin >> no;
    if (no % 5 == 0) {
        cout << "Divisible by 5";
    } else {
        cout << "Not divisible by 5";
    }
    return 0;
}


// Write a program to check whether a given number is an even number or an odd number.

int main(){
    int no;
    cout << "Enter a number: ";
    cin >> no;
    if (no % 2 == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
    return 0;
}
// Write a program to check whether a given number is an even number or an odd number without using the % operator.
#include<iostream>
using namespace std;

int main(){
    int no;
    cout << "Enter a number: ";
    cin >> no;

    if ((no / 2) * 2 == no) {
        cout << "Even";
    } else {
        cout << "Odd";
    }

    return 0;
}



// Write a program to check whether the given number is even or odd using a bitwise operator.
int main(){
    int no;
    cout << "Enter a number: ";
    cin >> no;
    if (no & 1) {
        cout << "Odd";
    } else {
        cout << "Even";
    }
    return 0;
}



// Write a program to check whether a given number is a three-digit number or not.
int main(){
    int no;
    cout << "Enter a number: ";
    cin >> no;
    if (no >= 100 && no <= 999) {
        cout << "Three-digit number";
    } else {
        cout << "Not a three-digit number";
    }
    return 0; 
}
// Write a program to print the greater between two numbers. Print one number if both are the same.
int main(){
    int no1,no2;
    cout << "Enter two numbers: ";
    cin >> no1 >> no2;
    if (no1>no2){
        cout << no1;
    } else if (no2>no1){
        cout << no2;
    } else {
        cout << "Both are same";
    }
}

// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal, or imaginary.
int main(){
    int a,b,c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    int d = b*b - 4*a*c;
    if (d > 0) {
        cout << "Real and distinct roots";
    } else if (d == 0) {
        cout << "Real and equal roots";
    } else {
        cout << "Imaginary roots";
    }
}

// Write a program to check whether a given year is a leap year or not.
int main(){
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "Leap year";
    } else {
        cout << "Not a leap year";
    }
}

// Write a program to find the greatest among three given numbers. Print the number once if the greatest number appears two or three times.

int main(){
    int no1,no2,no3;
    cout << "Enter three numbers: ";
    cin >> no1 >> no2 >> no3;
    if (no1>no2 && no1>no3){
        cout << no1;
    } else if (no2>no1 && no2>no3){
        cout << no2;
    } else if (no3>no1 && no3>no2){
        cout << no3;
    } else {
        cout << "All are same";
    }
}   