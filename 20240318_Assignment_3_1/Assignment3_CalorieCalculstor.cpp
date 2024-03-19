/*
  Author: Ye-Hwan Kim (u1130720)
  Date: March 18, 2024
  Program: Calorie Calculator
  filename: Assignment3_CalorieCalculstor.cpp
*/

#include <iostream> // cout, cin

// function declarations
double inputValidate(double);
void getWeight(double &);
double calculateCaloriesFat(double);
double calculateCaloriesSugar(double);
double calculateBadCalories(double);

int main() {
    // this variable is not used because it is passed as value but needs to be initialized
    double weight{};
    double total_bad_calories = calculateBadCalories(weight);
    std::cout << "Total Bad calories: " << total_bad_calories << std::endl;
    return 0;
}

/********************************************************
 * Definition of inputValidate function:                *
 * This function checks user input. When the            *
 * user enters a number <=0, it will display an error   *
 ********************************************************/
double inputValidate(double num) {
    while (!(std::cin >> num) || (num < 0)) {
        std::cout << "Error. An integer greater than zero must be entered: ";
    }

    return num;
}

// get weight from user and validate it
void getWeight(double &num) {
    std::cout << "What is the weight in pounds: ";
    num = inputValidate(num);
}

/********************************************************
 * Definition of :                                      *
 * double calculateCaloriesFat(double weight)           *
 * returns the corresponding amount of calories         *
 * by multiplying the weight with 4100                  *
 ********************************************************/
double calculateCaloriesFat(double weight) {
    double fat_calories = weight * 4100;
    std::cout << "Fat: " << fat_calories << std::endl;
    return fat_calories;
}

/********************************************************
 * Definition of :                                      *
 * double calculateCaloriesSugar(double weight)         *
 * returns the corresponding amount of calories         *
 * by multiplying the weight with 936                   *
 ********************************************************/
double calculateCaloriesSugar(double weight) {
    double sugar_calories = weight * 936;
    std::cout << "Sugar: " << sugar_calories << std::endl;
    return sugar_calories;
}

/********************************************************
 * Function Definition for double calculateBadCalories()*
 * findLowest() should find and return the lowest of    *
 * let the user input weights for fat and sugar and     *
 * return the total of bad calories                     *
 ********************************************************/
double calculateBadCalories(double weight) {
    getWeight(weight);
    return calculateCaloriesFat(weight) + calculateCaloriesSugar(weight);
}
