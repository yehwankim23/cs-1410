/*
* C++ program that computes the average and variance of students test scores.
* Source file : assignment1.cpp
* Author : Ye-Hwan Kim
****** ID: u1130720
* **** Name: Ye-Hwan Kim
*/

#include <iostream> // cout, cin
#include <iomanip> // fixed, setprecision, setw

int main() {
    // get test scores from user
    std::cout << "Please enter student 1's test scores: ";
    double student1test1, student1test2, student1test3;
    std::cin >> student1test1 >> student1test2 >> student1test3;

    std::cout << "Please enter student 2's test scores: ";
    double student2test1, student2test2, student2test3;
    std::cin >> student2test1 >> student2test2 >> student2test3;

    std::cout << "Please enter student 3's test scores: ";
    double student3test1, student3test2, student3test3;
    std::cin >> student3test1 >> student3test2 >> student3test3;

    std::cout << "Please enter student 4's test scores: ";
    double student4test1, student4test2, student4test3;
    std::cin >> student4test1 >> student4test2 >> student4test3;

    std::cout << "Please enter student 5's test scores: ";
    double student5test1, student5test2, student5test3;
    std::cin >> student5test1 >> student5test2 >> student5test3;

    // print test scores
    std::cout << "\n=================================================================="
              << "\n Student #   Test #1   Test #2   Test #3";

    std::cout << "\n     1     " << std::fixed << std::setprecision(2) << std::setw(8)
              << student1test1 << std::setw(10) << student1test2 << std::setw(10) << student1test3;

    std::cout << "\n     2     " << std::setw(8) << student2test1 << std::setw(10) << student2test2
              << std::setw(10) << student2test3;

    std::cout << "\n     3     " << std::setw(8) << student3test1 << std::setw(10) << student3test2
              << std::setw(10) << student3test3;

    std::cout << "\n     4     " << std::setw(8) << student4test1 << std::setw(10) << student4test2
              << std::setw(10) << student4test3;

    std::cout << "\n     5     " << std::setw(8) << student5test1 << std::setw(10) << student5test2
              << std::setw(10) << student5test3;

    // calculate and print test score averages
    double test1average = (student1test1 + student2test1 + student3test1 + student4test1
                           + student5test1) / 5;

    double test2average = (student1test2 + student2test2 + student3test2 + student4test2
                           + student5test2) / 5;

    double test3average = (student1test3 + student2test3 + student3test3 + student4test3
                           + student5test3) / 5;

    std::cout << "\n=================================================================="
              << "\n Average:  " << std::setw(8) << test1average << std::setw(10) << test2average
              << std::setw(10) << test3average;

    // calculate and print test score variances
    double test1variance = (student1test1 * student1test1 + student2test1 * student2test1
                            + student3test1 * student3test1 + student4test1 * student4test1
                            + student5test1 * student5test1) / 5 - test1average * test1average;

    double test2variance = (student1test2 * student1test2 + student2test2 * student2test2
                            + student3test2 * student3test2 + student4test2 * student4test2
                            + student5test2 * student5test2) / 5 - test2average * test2average;

    double test3variance = (student1test3 * student1test3 + student2test3 * student2test3
                            + student3test3 * student3test3 + student4test3 * student4test3
                            + student5test3 * student5test3) / 5 - test3average * test3average;

    std::cout << "\n=================================================================="
              << "\n Variance: " << std::setw(8) << test1variance << std::setw(10) << test2variance
              << std::setw(10) << test3variance
              << "\n==================================================================\n";

    return 0;
}
