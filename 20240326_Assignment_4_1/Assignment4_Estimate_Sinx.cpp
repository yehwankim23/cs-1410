/*
Written by: Ye-Hwan Kim (u1130720)
Date: March 26, 2024
*/

#include <iostream> // cout, cin, endl
#include <iomanip> // fixed, setprecision
#include <cmath> // pow

// global constant variable
const float PI = 3.14159265f;

// function declarations
// the function that returns n!
int factorial(int);

/*
*************************************************************
A function to compute sin(x) for given x 
x needs to be converted into radians, as the <cmath> sin function,
input is  in radians. 
*****************************************************************
*/
float sin(float, int);

int main() {
    float x;
    int n;
    std::cout << "Enter the value of x : ";
    std::cin >> x;
    std::cout << "Enter the value of n : ";
    std::cin >> n;

    // convert x into radians
    float x_in_radians = x * PI / 180.0f;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "sin(" << x << ") = " << sin(x_in_radians, n) << std::endl;
    return 0;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

float sin(float x, int n) {
    if (n == 0) {
        return 0;
    }

    n--;

    return sin(x, n)
           + ((std::pow(-1.0f, (float) n) * std::pow(x, (float) n * 2 + 1)) / factorial(n * 2 + 1));
    //                                 narrowing conversion from int to float ^^^^^^^^^
}
