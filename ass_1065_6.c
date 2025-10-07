#include <stdio.h>
void main()
{
        up:
        char ch;
	int no1,no2,no3;
	printf("Enter the number: ");
	scanf("%d",&no1);
	printf("Enter the number: ");
	scanf("%d",&no2);
	printf("Enter the number: ");
	scanf("%d",&no3);
	if(no1==no2&&no1==no3)
	{
	printf("Both are same");
	}
	else if(no1>no2&&no1>no3)
	{
	printf("%d is Largest",no1);
	}
	else if(no2>no3)
	{
	printf("%d is Largest",no2);
	}
	else
	{
	printf("%d is Largest",no3);
	}
	
	getchar();
	
	printf("\n Do you want to continue[y/n]");
	scanf("%c",&ch);
	if(ch=='y')
	{
	goto up;
	}
	else
	{
	printf("\nThank you");
	}
}
