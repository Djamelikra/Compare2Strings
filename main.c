#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the first string\n");
    gets(str1);
    printf("Enter the second string\n");
    gets(str2);

    if(strcmp(str1,str2)== 0)
        printf("The two strings are equals.\n");
    else
        printf("The two strings are not equals.\n");

//    printf("Press any key to continue\n");
//        getchar();

        system("pause");


    return 0;

}
