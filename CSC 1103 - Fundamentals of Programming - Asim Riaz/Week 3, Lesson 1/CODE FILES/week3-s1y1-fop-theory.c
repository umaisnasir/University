#include<stdio.h>

int main(){
    int grade=69;

    // printf("Enter grade : ");
    // scanf("%d", &grade);
    // We have commented the above lines because we have already given the input value i.e.69.

    if(grade >= 60){
        puts("Passsed");
    }else{
        puts("Failed");
    }

    // puts(grade >= 60 ? "Passed" : "Failed"); 
    // We can use the above command instead of the whole if statement.
    
}
