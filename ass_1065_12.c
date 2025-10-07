#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter first string :- ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string :- ");
    fgets(str2,sizeof(str2),stdin);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 > len2)
        printf("First string is longer.\n");
    else if(len1 < len2)
        printf("Second string is longer.\n");
    else
        printf("Both strings are equal.\n");

    return 0;
}
