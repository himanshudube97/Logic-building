#include<iostream>
using namespace std;

// 1. Write a program to calculate the size of a character constant.
// int main(){
//     char characterConstant = 'A';
//     cout << "Size of character constant: " << sizeof(characterConstant) << " bytes" << endl;
//     return 0;    
// }



// 2. Write a program to calculate the size of a real constant.
// int main(){
//     float realConstant = 3.14;
//     cout << "Size of real constant: " << sizeof(realConstant) << " bytes" << endl;
//     return 0;    
// }

// 3. Write a program with one char type variable. Assign 'A' in the variable. Now change the value of the variable from 'A' to 'B' using the increment operator.
// int main(){
//     char character = 'A';
//     cout << "Original character: " << character << endl;
//     character++;
//     cout << "Character after increment: " << character << endl;
//     return 0;    
// }

// 4. Write a program to print the unit digit of a given number.
// int main(){
//     int no;
//     cout << "Enter a number: ";
//     cin >> no;
//     int unitDigit= no%10;
//     cout<<"unit digit is "<<unitDigit<<endl;
//     return 0;
// }

// 5. Write a program to print a given number without its last digit.
// int main(){
//     int no;
//     cout << "Enter a number: ";
//     cin >> no;
//     int nonUnitDigit= no/10;
//     cout<<"non unit digit is "<<nonUnitDigit<<endl;
//     return 0;
// }


// 6. Write a program to swap values of two int variables.
// int main(){
//     int a, b;
//     cout << "Enter two integers: ";
//     cin >> a >> b;
//     cout << "Before swapping: a = " << a << ", b = " << b << endl;
    
//     int temp = a;
//     a = b;
//     b = temp;

//     cout << "After swapping: a = " << a << ", b = " << b << endl;
//     return 0;

// }

// 7. Write a program to swap values of two int variables without using a third variable.
// int main(){
//     int a,b;
//     cout << "Enter two integers: ";
//     cin >> a >> b;
//     cout << "Before swapping: a = " << a << ", b = " << b << endl;
//     a=a+b; // 10+20=30
//     b=a-b; // 10+20-20=10
//     a=a-b; // 10+20-10=20
//     cout<< "After swapping: a = " << a << ", b = " << b << endl;
//     return 0;

// }
// 8. Write a program to swap values of two int variables without using a third variable and without using +, - operators.
// int main(){
//     int a,b;
//     cout << "Enter two integers: ";
//     cin >> a >> b;
//     cout << "Before swapping: a = " << a << ", b = " << b << endl;
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     cout<< "After swapping: a = " << a << ", b = " << b << endl;
//     return 0;
// }



// 9. Write a program to swap values of two int variables without using a third variable and arithmetic operators.
int main(){
    int a,b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<< "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}

// 10. Write a program to swap values of two int variables in a single-line arithmetic expression.

int main(){
    int a,b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    a=a+b-(b=a);
    cout<< "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}