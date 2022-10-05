#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
  // Problem 1
  // int number = 0;
  // cout << "Enter number: ";
  // cin >> number;
  // if (number < 0) {
  //   cout << "Negative" << endl;
  // } else {
  //   cout << "Positive" << endl;
  // }

  // Problem 2
  // int number = 0;
  // cout << "Enter number: ";
  // cin >> number;
  // if (number < 0) {
  //   if (number % 2 == 0) {
  //     cout << "The number is negative and even\n";
  //   } else {
  //     cout << "The number is negative and odd\n";
  //   }
  // } else {
  //   if (number % 2 == 0) {
  //     cout << "The number is positive and even\n";
  //   } else {
  //     cout << "The number is positive and odd\n";
  //   }
  // }

  // Problem 3
  // int number1 = 0;
  // int number2 = 0;
  // int number3 = 0;
  // cout << "Enter number 1: ";
  // cin >> number1;
  // cout << "Enter number 2: ";
  // cin >> number2;
  // cout << "Enter number 3: ";
  // cin >> number3;
  // if (number1 > number2 && number1 > number3) {
  //   cout << number1 << " is the largest";
  // } else if (number2 > number1 && number2 > number3) {
  //   cout << number2 << " is the largest";
  // } else {
  //   cout << number3 << " is the largest";
  // }

  // Problem 4
  // int year = 0;
  // cout << "Enter a year: ";
  // cin >> year;
  // if (year % 400 == 0) {
  //   cout << year << " is a leap year.";
  // } else if (year % 100 == 0) {
  //   cout << year << " is not a leap year.";
  // } else if (year % 4 == 0) {
  //   cout << year << " is a leap year.";
  // } else {
  //   cout << year << " is not a leap year.";
  // }

  // Problem 5
  // float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
  //   cout << "Enter coefficients a, b and c: ";
  //   cin >> a >> b >> c;
  //   discriminant = b*b - 4*a*c;
  // if (discriminant > 0) {
  //     x1 = (-b + sqrt(discriminant)) / (2*a);
  //     x2 = (-b - sqrt(discriminant)) / (2*a);
  //     cout << "Roots are real and different." << endl;
  //     cout << "x1 = " << x1 << endl;
  //     cout << "x2 = " << x2 << endl;
  // } else if (discriminant == 0) {
  //     cout << "Roots are real and same." << endl;
  //     x1 = -b/(2*a);
  //     cout << "x1 = x2 =" << x1 << endl;
  // } else {
  //     realPart = -b/(2*a);
  //     imaginaryPart =sqrt(-discriminant)/(2*a);
  //     cout << "Roots are complex and different."  << endl;
  //     cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
  //     cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
  // }

  // Problem 6
  // int a, b, c;
  // cout << "Enter a, b, c: ";
  // cin >> a >> b >> c;
  // if (a + b >= c) {
  //   cout << "The triangle is valid\n";
  // } else {
  //   cout << "The triangle is not valid\n";
  // }

  // Problem 7
  // char a;
  // cout << "Enter character: ";
  // cin >> a;
  // if (a > 64 && a < 91 || a > 96 && a < 123) {
  //   if (a > 64 && a < 91) {
  //     cout << "Uppercase alphabet\n";
  //   } else {
  //     cout << "Lowercase alphabet\n";
  //   }
  // } else {
  //   cout << "It is not an alphabet\n";
  // }

  // Problem 8
  // string name;
  // cout << "Enter your last name: ";
  // cin >> name;
  // if (name == "Johnson" || name == "Smith" || name == "Anderson" || name == "Bennett" || name == "Jackson") {
  //   cout << "You have access\n";
  // } else {
  //   cout << "You do not have access\n";
  // }

  // Special Problem
  // string gender, hairColor, eyesColor, handedType;
  // cout << "Enter your gender: ";
  // cin >> gender;
  // cout << "Enter your hair color: ";
  // cin >> hairColor;
  // cout << "Enter your eyes color: ";
  // cin >> eyesColor;
  // cout << "Enter with which hand you write: ";
  // cin >> handedType;
  // if (gender == "male" && hairColor == "dark" && eyesColor == "blue" && handedType == "left") {
  //   cout << "Hello Jack\n";
  // } else if (gender == "male" && hairColor == "dark" && eyesColor == "blue" && handedType == "right") {
  //   cout << "Hello Leonard\n";
  // } else if (gender == "female" && hairColor == "dark" && eyesColor == "blue" && handedType == "left") {
  //   cout << "Hello Joanne\n";
  // } else if (gender == "male" && hairColor == "dark" && eyesColor == "green" && handedType == "right") {
  //   cout << "Hello Michael\n";
  // } else if (gender == "female" && hairColor == "dark" && eyesColor == "green" && handedType == "left") {
  //   cout << "Hello Pamela\n";
  // } else if (gender == "male" && hairColor == "light" && eyesColor == "blue" && handedType == "left") {
  //   cout << "Hello George\n";
  // } else {
  //   cout << "Who are you ?\n";
  // }

  // Switch case /////////////////////////////////////

  // Problem 1
  // int weekday;
  // cout << "Enter weekday: ";
  // cin >> weekday;
  // switch (weekday)
  // {
  // case 1:
  //   cout << "Monday\n";
  //   break;

  // case 2:
  //   cout << "Tuesday\n";
  //   break;

  // case 3:
  //   cout << "Thursday\n";
  //   break;

  // case 4:
  //   cout << "Wednesday\n";
  //   break;

  // case 5:
  //   cout << "Friday\n";
  //   break;

  // case 6:
  //   cout << "Saturday\n";
  //   break;

  // case 7:
  //   cout << "Sunday\n";
  //   break;
  
  // default:
  //   cout << "There is no such weekday\n";
  //   break;
  // }

  // Problem 2
  // int grade = 0;
  // cout << "Enter student's grade: ";
  // cin >> grade;
  // int num = grade / 10;
  // switch (num) {
  // case 10:
  // case 9:
  //   cout << "A\n";
  //   break;
  // case 8:
  //   cout << "B\n";
  //   break;
  // case 7:
  //   cout << "C\n";
  //   break;
  // case 6:
  //   cout << "D\n";
  //   break;
  // case 5:
  // case 4:
  // case 3:
  // case 2:
  // case 1:
  // case 0:
  //   cout << "F\n";
  //   break;
  // default:
  //   cout << "You do not enter number!\n";
  //   break;
  // }

  // Problem 3
  // int num;
  // cout << "Enter number from -5 till 5: ";
  // cin >> num;
  // switch(num > 0) {
  //   case 1 :
  //     cout << "Positive" << endl;
  //     break;
  //   case 0 :
  //       switch(num < 0) {
  //         case 1 :
  //           cout << "Negative" << endl;
  //           break;
  //         case 0 :
  //           cout << "Zero" << endl;
  //           break;
  //       }
  //     break;
  // }

  // Problem 4
  // int number;
  // cout << "Enter number: ";
  // cin >> number;
  // switch (number)
  // {
  // case 1:
  //   cout << "hola\n";
  //   break;
  // case 2:
  //   cout << "bonjour\n";
  //   break;
  // case 3:
  //   cout << "guten tag\n";
  //   break;
  // case 4:
  //   cout << "salve\n";
  //   break;
  // case 5:
  //   cout << "nǐn hǎo\n";
  //   break;
  // case 6:
  //   cout << "olá\n";
  //   break;
  // case 7:
  //   cout << "asalaam alaikum\n";
  //   break;
  // case 8:
  //   cout << "konnichiwa\n";
  //   break;
  
  // default:
  //   cout << "Enter positive number!\n";
  //   break;
  // }

  // Problem 5
  // int num;
  // cout << "Enter id: ";
  // cin >> num;
  // switch (num)
  // {
  // case 1:
  //   cout << "Name: Alex\n";
  //   cout << "Lastname: Smith\n";
  //   cout << "Age: 23\n";
  //   break;
  // case 2:
  //   cout << "Name: Jack\n";
  //   cout << "Lastname: Johnson\n";
  //   cout << "Age: 20\n";
  //   break;
  // case 3:
  //   cout << "Name: Michael\n";
  //   cout << "Lastname: Jackson\n";
  //   cout << "Age: 29\n";
  //   break;
  // case 4:
  //   cout << "Name: Ali\n";
  //   cout << "Lastname: Muhammad\n";
  //   cout << "Age: 25\n";
  //   break;
  // case 5:
  //   cout << "Name: Sara\n";
  //   cout << "Lastname: Smith\n";
  //   cout << "Age: 21\n";
  //   break;
  // default:
  //   cout << "Coming soon...\n";
  //   break;
  // }

  // Problem
  // int num;
  // cout << "Enter digit: ";
  // cin >> num;
  // switch (num)
  // {
  // case 0:
  //   cout << "Zero\n";
  //   break;
  // case 1:
  //   cout << "One\n";
  //   break;
  // case 2:
  //   cout << "Two\n";
  //   break;
  // case 3:
  //   cout << "Three\n";
  //   break;
  // case 4:
  //   cout << "Four\n";
  //   break;
  // case 5:
  //   cout << "Five\n";
  //   break;
  // case 6:
  //   cout << "Six\n";
  //   break;
  // case 7:
  //   cout << "Seven\n";
  //   break;
  // case 8:
  //   cout << "Eight\n";
  //   break;
  // case 9:
  //   cout << "Nine\n";
  //   break;
  // default:
  //   cout << "It is not a digit\n";
  //   break;
  // }

  // Problem 7
  // int month;
  // cout << "Enter month: ";
  // cin >> month;
  // switch (month)
  // {
  // case 1:
  // case 2:
  //   cout << "There is no holiday\n";
  //   break;
  // case 3:
  //   cout << "International Women Day, 8 March\nNavruz, 21 March\n";
  //   break;
  // case 4:
  //   cout << "There is no holiday\n";
  //   break;
  // case 5:
  //   cout << "There are Ramadan Hayit and Kurban Hayit but their dates change.\n";
  //   break;
  // case 6:
  // case 7:
  // case 8:
  //   cout << "There is no holiday\n";
  //   break;
  // case 9:
  //   cout << "September 1, Independence Day\n";
  //   break;
  // case 10:
  //   cout << "October 1, Teachers’ and Mentors’ Day\n";
  //   break;
  // case 11:
  //   cout << "There is no holiday\n";
  //   break;
  // case 12:
  //   cout << "December 8, Constitution Day\n";
  //   break;
  // default:
  //   cout << "Something went wrong\n";
  //   break;
  // }

  return 0;
}