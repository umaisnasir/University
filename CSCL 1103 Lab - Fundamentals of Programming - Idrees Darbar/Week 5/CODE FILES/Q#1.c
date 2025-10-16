// Write a C program that takes a numeric input for a day (1 to 7) and uses a switch-case statement to print the
// corresponding day of the week. Ensure that the program handles invalid inputs.

#include <stdio.h>

int main(void) {
    int day;

    printf("Enter the day: (1-7) ");
    scanf("%d", &day);

    switch (day) {    // each user input (1-7) outputs the corresponding days of the week.
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
