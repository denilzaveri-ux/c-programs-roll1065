#include <stdio.h>
void main()
{
  char a[100];
  int i,c=0;
  
  printf("Enter your name :-");
  fgets(a,sizeof(a),stdin);
  puts(a);
  
  for(i=0; a[i]!='\0'; i++) 
  {
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
    {
      c++;
    }
  }
  
  printf("vovels = %d",c);
}
