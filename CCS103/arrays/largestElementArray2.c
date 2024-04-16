/*
	Write a C program that finds the largest element in the array.
*/

#include <stdio.h>

int findLargest(int [], int);

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6}, sizeOfNums = sizeof(nums) / sizeof(nums[0]), largestNum;
	
    printf("Numbers: ");
    
	for (int i = 0; i < sizeOfNums; i++) {
        printf("%d, ", nums[i]);
    }

    largestNum = findLargest(nums, sizeOfNums);

    printf("\n\nLargest: %d\n", largestNum);

    return 0;
}

int findLargest(int array[], int size) {
    int largest = array[0]; // Initialize largest with the first element

    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i]; // Update largest if a bigger element is found
        }
    }
    return largest; // Return the largest element found
}

/*
	This C program tackles the problem of finding the largest element within an array of integers.
	It achieves this by employing a separate function named findLargest. This function takes the
	array itself and its size as arguments. It iterates through the array, comparing each element
	with a variable initially set to the first element (assuming it's the largest initially).
	If a bigger element is encountered, the function updates the variable to hold the new largest value.
	Finally, the function returns the largest element it found in the array. The main function demonstrates
	how to use this function by calling it with the actual array and its size. It then prints both the original
	array and the largest element discovered by the function.
*/