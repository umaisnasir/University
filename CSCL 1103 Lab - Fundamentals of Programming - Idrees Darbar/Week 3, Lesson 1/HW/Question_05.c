//If the marks obtained by a student in five different subjects are input through the keyboard, find out
//percentage marks obtained by the student. Assume that the maximum marks that can be obtained
//by a student in each subject is 100.

#include <stdio.h>

int main (void){
    
    float sub1,sub2,sub3,sub4,sub5,avg;

    printf("Enter marks in subject 1: ");
    scanf ("%f", &sub1);

    printf("Enter marks in subject 2: ");
    scanf ("%f", &sub2);

    printf("Enter marks in subject 3: ");
    scanf ("%f", &sub3);

    printf("Enter marks in subject 4: ");
    scanf ("%f", &sub4);

    printf("Enter marks in subject 5: ");
    scanf ("%f", &sub5);

    avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    printf("The average of these marks is: %f\n", avg);

    return 0;

}

