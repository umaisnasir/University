// Develop a program that takes three integers as input, representing the sides of a triangle. Use 
// nested if-else statements to determine and print whether the triangle is valid (based on the 
// triangle inequality theorem) and what type it is (equilateral, isosceles, scalene, or right-angled).

#include <stdio.h>

int main (void){

    int user_input1, user_input2, user_input3;    // taking three inputs

    printf("Enter the length of the first side of the triangle: ");  
    scanf("%d", &user_input1);

    printf("Enter the length of the second side of the triangle: ");
    scanf("%d", &user_input2);

    printf("Enter the length of the third side of the triangle: ");
    scanf("%d", &user_input3);


    if ((user_input1 + user_input2 > user_input3) && (user_input1 + user_input3 > user_input2) && (user_input2 + user_input3 > user_input1)){  
        printf("This is a valid triangle.\n");    // The sum of the lengths of any two sides of 
                                                  // a triangle must be greater than the length of the third side.


        if (user_input1 == user_input2 && user_input2 == user_input3){
            printf("This is an equilateral triangle.\n");    // if all sides are equal
        }
        else if (user_input1 == user_input2 || user_input2 == user_input3 || user_input1 == user_input3){
            printf("This is an isosceles triangle.\n");    // if two sides are unequal
        }
        else{
            printf("This is a scalene Triangle.\n");    // if no sides are equal
        }

        if ((user_input1 * user_input1 == user_input2 * user_input2 + user_input3 * user_input3 ) ||
            (user_input2 * user_input2 == user_input1 * user_input1 + user_input3 * user_input3 ) ||
            (user_input3 * user_input3 == user_input1 * user_input1 + user_input2 * user_input2 )){
                printf("This is a right-angled triangle.\n");    // pythagoras therorm - to check if the triangle is right-angled (H.sq = B.sq + P.sq)
            }                                                    // will check all sides
    }

    else{
        printf("This is not a triangle!");
    }

}