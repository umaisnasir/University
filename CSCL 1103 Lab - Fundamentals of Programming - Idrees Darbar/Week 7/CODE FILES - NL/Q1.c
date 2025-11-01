// Write a C program that uses nested loops to print a right-angled triangle pattern of 
// asterisks. The user should specify the number of rows for the triangle

#include <stdio.h>

int main (void){

    int index;
    int Rows,Column;

    printf("Enter the number of rows: ");
    scanf("%d", &Rows);

    for (index = 1; index <= Rows; index++){    // runs from 1 till whatever user inputs

        for (Column = 1; Column <= index; Column++){  // runs from 1 till outer-loop-count (for 1st iteration only)

            printf("*");
        }

        printf("\n");
    }
}2
