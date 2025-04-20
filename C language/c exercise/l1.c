// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.


#include <stdio.h>
#include <stdlib.h>

// Function prototype
void twoSum(int* nums, int numsSize, int target, int* indices);

int main() {
    int numsSize, target;

    // Get the size of the array and target from the user
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

    int* nums = (int*)malloc(numsSize * sizeof(int));

    // Get array elements from the user
    printf("Enter the array elements:\n");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    int result[2];  // Array to store the result

    // Call the twoSum function and pass the result array
    twoSum(nums, numsSize, target, result);

    // Print the result
    printf("[%d, %d]\n", result[0], result[1]);

    // Free the allocated memory
    free(nums);

    return 0;
}

// Function definition
void twoSum(int* nums, int numsSize, int target, int* indices) {
    // Create a dictionary to store the indices of elements
    int numDict[100000] = {0};

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];

        // Check if the complement is already in the dictionary
        if (numDict[complement] != 0) {
            // If found, update the indices array directly
            indices[0] = numDict[complement] - 1;
            indices[1] = i;
            return;
        }

        // If not found, add the current number and its index to the dictionary
        numDict[nums[i]] = i + 1;
    }

    // If no solution is found, indices array will remain unchanged
}

