/* 
  Author: Ye-Hwan Kim (u1130720)
  Date: March 18, 2024
  Program: Armstrong numbers between 1 and 1000.
  filename: Assignment3_ArmstrongNumber.cpp
*/

#include <iostream> // cout, endl
#include <cmath> // pow

// function declarations
int sumCube(int);
void ArmstrongNumber();

int main() {
    std::cout << "Armstrong numbers between 1 and 1000: ";
    ArmstrongNumber();
    return 0;
}

/********************************************************
 * Definition of :  int sumCube(int num)                *
 * This function calculate sum of cubes of its digits   *
 * and returns the result                               *
 ********************************************************/
int sumCube(int num) {
    int sum = 0;

    // calculate sum of cubes of each digit
    while (num > 0) {
        sum += (int) std::pow(num % 10, 3);
        num /= 10;
    }

    return sum;
}

/********************************************************
 * Definition of :  void ArmstrongNumber()              *
 * This function identifies armsrong number between     *
 * 1 and 1000.                                          *
 ********************************************************/
void ArmstrongNumber() {
    for (int number = 1; number <= 1000; number++) {
        // print number of it is Armstrong
        if (number == sumCube(number)) {
            std::cout << number << " ";
        }
    }

    std::cout << std::endl;
}
