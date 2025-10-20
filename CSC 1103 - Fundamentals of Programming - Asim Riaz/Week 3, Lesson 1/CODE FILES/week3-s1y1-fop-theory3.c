// Here 3 is being multiplied with every result!
#include <stdio.h>

int main()
{
    int product = 3;
    while (product <= 100)
    {
        printf("%d\n", product);
        product = 3 * product;  
    }
}
