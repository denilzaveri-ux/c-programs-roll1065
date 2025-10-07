#include<stdio.h>
#include<string.h>
void main()
{
  char str[50]="Denil";
  int i,len=strlen(str);
  
  printf("Reverse Word is ");
  for(i=len-1;i>=0;i--)
  {
    printf("%c",str[i]);
  }
}
