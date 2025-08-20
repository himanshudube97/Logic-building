#include<iostream>

using namespace std;

// Write a program to check whether a given number is a three-digit number or not.

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (number >= 100 && number <= 999) {
        cout << "The number is a three-digit number." << endl;
    } else {
        cout << "The number is not a three-digit number." << endl;
    }
    
    return 0;
}
// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

int main(){
    float costPrice, sellingPrice, profitOrLossPercentage;
    cout << "Enter the cost price: ";
    cin >> costPrice;
    cout << "Enter the selling price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        profitOrLossPercentage = ((sellingPrice - costPrice) / costPrice) * 100;
        cout << "Profit Percentage: " << profitOrLossPercentage << "%" << endl;
    } else if (sellingPrice < costPrice) {
        profitOrLossPercentage = ((costPrice - sellingPrice) / costPrice) * 100;
        cout << "Loss Percentage: " << profitOrLossPercentage << "%" << endl;
    } else {
        cout << "No Profit No Loss" << endl;
    }

    return 0;
}
// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

int main(){
    int m1,m2,m3,m4,m5;
    cin>>m1>>m2>>m3>>m4>>m5;
    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33){
        cout<<"passed";
    }
    else{
        cout<<"failed";
    }
}


// Write a program to check whether a given alphabet is in uppercase or lowercase.
int main(){
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The alphabet is in uppercase." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "The alphabet is in lowercase." << endl;
    } else {
        cout << "Invalid input. Please enter an alphabet." << endl;
    }

    return 0;
}

// Write a program to check whether a given number is divisible by 3 and divisible by 2.
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 3 == 0 && number % 2 == 0) {
        cout << "The number is divisible by both 3 and 2." << endl;
    } else {
        cout << "The number is not divisible by both 3 and 2." << endl;
    }

    return 0;
}

// Write a program to check whether a given number is divisible by 7 or divisible by 3.
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 7 == 0 || number % 3 == 0) {
        cout << "The number is divisible by either 7 or 3." << endl;
    } else {
        cout << "The number is not divisible by either 7 or 3." << endl;
    }

    return 0;
}
// Write a program to check whether a given number is positive, negative or zero.

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lowercase), a digit, or a special character.
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is an uppercase alphabet." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is a lowercase alphabet." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit." << endl;
    } else {
        cout << "The character is a special character." << endl;
    }

    return 0;
}


// Write a program which takes the lengths of the sides of a triangle as input. Display whether the triangle is valid or not.
int main(){
    int a, b, c;
    cout << "Enter the lengths of the sides of the triangle: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}

// Write a program which takes the month number as input and displays the number of days in that month.

int main(){
    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        cout << "31 days" << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "30 days" << endl;
    } else if (month == 2) {
        cout << "28 or 29 days" << endl; // Leap year consideration can be added
    } else {
        cout << "Invalid month number." << endl;
    }

    return 0;
}


