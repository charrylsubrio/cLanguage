/*
	Write a C program that finds the largest element in the array.
*/

#include <stdio.h>

// Function to find the largest element in an array
int findLargest(int arr[], int size) {
    int largest = arr[0]; // Initialize largest with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a bigger element is found
        }
    }
    return largest; // Return the largest element found
}

int main() {
    int arr[] = {10, 25, 12, 7, 30};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int largestElement = findLargest(arr, n); // Call the function to find largest

    printf("Largest element: %d\n", largestElement);

    return 0;
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