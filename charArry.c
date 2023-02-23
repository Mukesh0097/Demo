#include<stdio.h>


int main(){
    // declaration of character arry
    char name[]  = "manoj savani bhavin";
    char name1[5] = "mukes";
    char name2[] ={'b','h','a','v','i','n'};
    char name3[5] ={'b','h','a','v','i',};
    char answer[50];
    char ab[20];
    
    // accese of char arry
    printf("%c",name[0]);
    printf("%c",name[1]);
    printf("%c\n",name[2]);

    // size_t size = sizeof(name)/sizeof(name[2]);

// for (int i = 0; name[i] != '\0'; i++)
// {
//     printf("%c",name[i]);
// }

// taking input

    // printf("enter the string: ");
    // scanf("%c",&answer[0]);
    // printf("%c\n",answer[0]);

    // printf("new \n");


     printf("enter the string: ");
    scanf("%s",ab);
    printf("%s\n",ab);
    printf("%c",ab[2]);




    
}