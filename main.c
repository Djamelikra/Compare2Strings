#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    int i;

    char kar = 'a';
    int taille = sizeof(kar);
    printf("taille en octets : %u \n",taille);

    printf("Enter the first string\n");
    gets(str1);
    taille = sizeof(str1)/sizeof str1[0];

    //str1[taille];
    printf("Longueur du tableau : %d \n",taille);


    printf("Enter the second string\n");
    gets(str2);

    for(i=0; i<65; i++)
    {
        printf("%c",str1[i]);

    }
    printf("\n");

    if(strcmp(str1,str2)== 0)
    {


    printf("The two strings : \n");
       for(i=0; i<65; i++)
    {
        printf("%c",str1[i]);

    }
     printf("\n");
          for(i=0; i<65; i++)
    {
        printf("%c",str2[i]);

    }
    printf("\n...are equals.\n");
     }
    else
        printf("The two strings are not equals.\n");

/*taille */
    taille = sizeof(str1);
      printf("taille en octets : %u \n",taille);

//    printf("Press any key to continue\n");
//    getchar();
    system("pause");
    return 0;
}
