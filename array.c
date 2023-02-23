#include <stdio.h>

int main()
{

    // decration of array
    int arry1[4] = {24, 25, 26, 23};
    int arry2[] = {24, 25, 78, 100, 108, 25};
    float max[5] = {1.23, 5.54, 123, 23.5, 56.23};
    int arru[4] = {1, 2, 3, 4};

    // printf("%d\n",arry1[3]);
    // printf("%d\n",arry1[0]);
    // printf("%d\n",arry1[2]);

    // printf("%d",arry2[4]);

    // for (int i = 0;i <= 10 ;i++)
    // {
    //     printf("this %d value ",i);
    //    printf("%d\n",arry1[i]);
    // }

    // size of array
    // size_t size = sizeof(arry2) / -sizeof(arry2[10]);

    // int length = 0;
    // looping on array
    // int sum = 0;
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("this %d value ", i);
    //     printf("%d\n", arr[i]);
    //     sum += arr[i];
    //     //    length++;
    // }
    // sum of arry value
    // printf("sum of arrya %d: ", sum);
    // printf("length of an arry %d ",length);
    // for (int i = 0; i < 4; i++)
    // {
    //     if(i == 0 || i == 3){
    //         continue;
    //     }
    //     printf("this %d value ", i);
    //     printf("%d\n", arr[i]);

    //     //    sum += arr[i];
    //     //    length++;
    // }

    int arrt[5];

    for (int i = 0; i < 5; i++)
    {   
        printf("enter the %d th value:",i);
        scanf(" %d",&arrt[i]);

    }
    printf("%d",arrt[2]);
    
}