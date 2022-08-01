#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    int i;
    printf("Enter the first string\n");
    gets(str1);
    printf("Enter the second string\n");
    gets(str2);

    for(i=0; i<5; i++)
    {
        printf("%c",str1[i]);

    }
    printf("\n");

    if(strcmp(str1,str2)== 0)
    {


    printf("The two strings : \n");
       for(i=0; i<5; i++)
    {
        printf("%c",str1[i]);

    }
     printf("\n");
          for(i=0; i<5; i++)
    {
        printf("%c",str2[i]);

    }
    printf("...are equals.\n");
     }
    else
        printf("The two strings are not equals.\n");

//    printf("Press any key to continue\n");
//    getchar();
    system("pause");
    return 0;
}
