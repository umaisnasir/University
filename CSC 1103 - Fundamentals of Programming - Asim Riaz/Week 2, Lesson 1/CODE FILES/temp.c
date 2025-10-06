#include <stdio.h>

int main (void){

    int table, n;
    table = 2;

    while (table < 11){
        n=1;
        
        while (n!=11){
            printf("%d * %2d = %d\n", table, n, table * n);
            n = n + 1;
        }
        table = table + 1;
        puts("");
         


    }
}