#include <stdio.h>
#include <conio.h>  
#include <stdlib.h> 

#define SIZE 8

int getMenuChoice(int choice);
void displayElements(int arr[SIZE]);
void bubbleSort(int arr[SIZE]);
void selectionSort(int arr[SIZE]);
void insertionSort(int arr[SIZE]);

int main() {
    int arr[SIZE] = {2020, 2024, 2018, 2022, 2021, 2023, 2017, 2019}, choice;
    
    do { 
        choice = getMenuChoice(choice);
        
        switch(choice) {
            case 1:
            	printf("\n= ALL ELEMENTS =\n\n");
                displayElements(arr);  
                getch();
                break;
            case 2:
                bubbleSort(arr);
                printf("\n= ELEMENTS AFTER BUBBLE SORT (ascending) =\n\n");
                displayElements(arr); 
                getch();
                break;
            case 3:
                selectionSort(arr);
				printf("\n= ELEMENTS AFTER SELECTION SORT (descending) =\n\n");
				displayElements(arr);
                getch();
                break;
            case 4:
                insertionSort(arr);
                printf("\n= ELEMENTS AFTER INSERTION SORT (ascending) =\n\n");
                displayElements(arr);
                getch();
                break;
            case 0:
                break;
        }
    } while(choice != 0);
    
    return 0;
}

int getMenuChoice(int choice) {
	system("cls");
	
	do {
    printf("==== MAIN MENU ====\n");
    printf("\n[1] - DISPLAY ALL ELEMENTS");
    printf("\n[2] - BUBBLE SORT (ascending)");
    printf("\n[3] - SELECTION SORT (descending)");
    printf("\n[4] - INSERTION SORT (ascending)");
    printf("\n[0] - EXIT");
    printf("\n\nEnter choice: "); 
	       
        if(scanf("%d", &choice) != 1 || choice < 0 || choice > 4) {
            fflush(stdin);  
            printf("\nInvalid input! Press any key to continue . . . ");
            getch();
			system("cls");
        }
    } while(choice < 0 || choice > 4);
    
    return choice;
}

void displayElements(int arr[SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        printf("  %d\n", arr[i]);    
	}
	
	printf("\n");
}

void bubbleSort(int arr[SIZE]) {
    for(int pass = 0; pass < SIZE - 1; pass++) {
        for (int pos = 0; pos < SIZE - pass - 1; pos++) {
            if(arr[pos] > arr[pos + 1]) {
                int temp = arr[pos];
                arr[pos] = arr[pos + 1];
                arr[pos + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[SIZE]) {
    int largest, temp;
    
    for(int pass = SIZE - 1; pass > 0; pass--) {
        largest = pass;
        
        for(int pos = 0; pos < pass; pos++) {
            if(arr[pos] < arr[largest]) {
                largest = pos;
            }
        }
        
        temp = arr[pass];
        arr[pass] = arr[largest];
        arr[largest] = temp;
    }
}

void insertionSort(int arr[SIZE]) {
    for (int i = 1; i < SIZE; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}