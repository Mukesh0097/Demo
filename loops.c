#include <stdio.h>

int main()
{
    // for (int a = 1; a <= 3; a++)
    // {
    //     printf("number is: %d\n", a);
    //     for(int b=1;b<=3;b++){
    //         printf("\t b is: %d\n", b);
    //     }
    // }

    // for (int i = 1; i <= 5; i++)
    // {

    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    int lastNumber;
    printf("Enter number to begin: ");
    scanf("%d", &lastNumber);
    int total = 0;

    // for (int i = 0; i <= lastNumber; i++)
    // {
    //     total = total + i;
    // }

    for (int i = 0; i <= lastNumber; i++)
    {
        total += i;
    }

    printf("Sum is %d", total);

    return 0;
}

// 1 to 5 = 15;
// *
// **
// ***
// ****
// *****