/*
  Author - Name: Ye-Hwan Kim ID: u1130720
  Date: March 11, 2024
  Program: To check whether a number is happy or not
   Version 1 - using while loop
   filename: Assignment2_Ver1.cpp
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

    std::cout << "The number " << num << " is ";

    // replace number with sum of the squares of its digits
    while (num != 1 && num != 4) {
        int sum = 0;

        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }

        num = sum;
    }

    // print the result
    std::cout << ((num == 1) ? "Happy number" : "unhappy number") << std::endl;
    return 0;
}
