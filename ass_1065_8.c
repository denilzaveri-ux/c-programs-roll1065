#include <stdio.h>
void main()
{
        up:
        char ch;
	int no1,no2,no3,no4;
	printf("Enter the number :-");
	scanf("%d",&no1);
	printf("Enter the number :-");
	scanf("%d",&no2);
	printf("Enter the number :-");
	scanf("%d",&no3);
	printf("Enter the number :-");
	scanf("%d",&no4);
	
	if(no1==no2&&no1==no3&&no1==no4)
	{
	printf("Both are same");
	}
	else if(no1<no2&&no1<no3&&no1<no4)
	{
	printf("%d is smallest",no1);
	}
	else if(no2<no3&&no2<no4)
	{
	printf("%d if smallest",no2);
	}
	else if(no3<no4)
	{
	printf("%d if smallest",no3);
	}
	else
	{
	printf("%d is smallest",no4);
	}
	
	getchar();
	
	printf("\n Do you want to continue[Y/N]");
	scanf("%c",&ch);
	if(ch=='Y')
	{
	goto up;
	}
	else
	{
	printf("\nThank you");
	}
}
