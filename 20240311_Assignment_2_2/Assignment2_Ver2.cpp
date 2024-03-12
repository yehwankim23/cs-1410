/*
  Author - Name: Ye-Hwan Kim ID: u1130720
  Date: March 11, 2024
  Program: To check whether a number is happy or not
   Version 2 - using for loop
   filename: Assignment2_Ver2.cpp
*/

#include <iostream> // cout, cin, endl

int main() {
    // get number from user
    int num;
    std::cout << "Enter the number: ";
    std::cin >> num;

    if (num <= 0) {
        std::cout << "please Enter number greater than 0" << std::endl;
        return 0;
    }

    std::cout << "Number " << num << " is ";

    // replace the number with the sum of the squares of its digits
    for (int sum; num != 1 && num != 4; num = sum) {
        sum = 0;

        for (int digit; num > 0; num /= 10) {
            digit = num % 10;
            sum += digit * digit;
        }
    }

    // print the result
    std::cout << ((num == 1) ? "Happy number" : "unhappy number") << std::endl;
    return 0;
}
