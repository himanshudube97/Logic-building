#include<iostream>
using namespace std; 
// // 1. Write a program to calculate the average of three integers. Numbers should be provided by the user.

// int main(){
//     int a,b,c,average;
//     cin>>a>>b>>c;
//     average=(a+b+c)/3;
//     cout<<average;
//     return 0;
// }


// 2. Write a program to calculate the circumference of a circle.

// int main(){
//     float radius,circumference;
//     cin>>radius;
//     circumference=2*3.14*radius;
//     cout<<circumference;
//     return 0;
// }

// Write a program to calculate simple interest.
// int main(){
//     float principal,rate,time,simpleInterest;
//     cin>>principal>>rate>>time;
//     simpleInterest=(principal*rate*time)/100;
//     cout<<simpleInterest;
//     return 0;
// }

// Write a program to calculate the volume of a cuboid.


// int main(){
//     float length,width,height,volume;
//     cin>>length>>width>>height;
//     volume=length*width*height;
//     cout<<volume;
//     return 0;
// }

// Write a program that asks the user for the cost price and selling price per dozen of bananas. Calculate the profit or loss earned when selling 25 bananas.

// int main(){
//     float costPrice, sellingPrice, profitOrLoss;
//     cin >> costPrice >> sellingPrice;
//     profitOrLoss = (sellingPrice - costPrice) * 25 / 12;
//     cout << profitOrLoss;
//     return 0;
// }

// Write a program to input a character from the user and print its ASCII code.

// int main(){
//     int asciiCode;
//     char character;
//     cin >> character;
//     asciiCode = character;
//     cout <<"your asciiCode"<< asciiCode;
//     return 0;
// }

// Write a program to input an ASCII code from the user and print its corresponding character.

// int main(){
//     int ansicode;
//     char character;
//     cout<<"enter the ascii code";
//     cin>>ansicode;
//     character = ansicode;
//     cout << "your character is" << character;
//     return 0;
// }

// Write a program to input three characters from the user and display each character with its corresponding ASCII code.
// int main(){
//     char character1, character2, character3;
//     cout << "Enter three characters: ";
//     cin >> character1 >> character2 >> character3;
//     cout << "Character 1: " << character1 << ", ASCII code: " << int(character1) << endl;
//     cout << "Character 2: " << character2 << ", ASCII code: " << int(character2) << endl;
//     cout << "Character 3: " << character3 << ", ASCII code: " << int(character3) << endl;
//     return 0;
// }


// Date Conversion Program:
// Input Format: Enter a date in the format DD/MM/YYYY (e.g., 27/11/2022).
// Output Format: Display the date in the format Day - DD, Month - MM, Year - YYYY
// Example: Day - 27, Month - 11, Year - 2022


// int main(){
//     int d,m,y;
//     cout<<"enter the date in the format DD/MM/YYYY";
//     cin>>d;
//     cin.ignore(); // Ignore the '/' character
//     cin>>m;
//     cin.ignore(); // Ignore the '/' character
//     cin>>y;
//     cout<<"Day - "<<d<<", Month - "<<m<<", Year - "<<y;
//     return 0;        

// }

// Time Conversion Program:
// Input Format: Enter time in the format HH:MM.
// Output Format: Display the time in the format HH hour and MM Minute
// Example: 12 hour and 45 Minute

int main(){
    int h,m;
    cout<<"enter the time in the format HH:MM";
    cin>>h;
    cin.ignore(); // Ignore the ':' character
    cin>>m;
    cout<<h<<" hour and "<<m<<" Minute";
    return 0;        
}