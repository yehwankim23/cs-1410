/*
Written by: Ye-Hwan Kim (u1130720)
Date: March 26, 2024
*/

/*
*** find a duplicate element in a limited range array***
*/

#include <iostream> // cout

/*
*** function to find  a duplicate element in an array***
*/
int findDuplicate(int arr[], int size) {
    bool found[size];

    for (bool &element : found) {
        element = false;
    }

    // check each element in array and return if it was already found
    for (int index = 0; index < size; index++) {
        int number = arr[index];

        if (found[number - 1]) {
            return number;
        }

        found[number - 1] = true;
    }

    // no duplicates found
    return -1;
}

int main() {
    int nums[] = {2, 1, 3, 4, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    std::cout << "The duplicate element = ";
    std::cout << findDuplicate(nums, size);
    return 0;
}
