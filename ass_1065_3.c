#include <stdio.h>
void main()
{

    int a[200][200],b[200][200],sum[200][200],i,j,r,c;
    
    printf("Enter a number of Row :- ");
    scanf("%d",&r);
    printf("Enter a number of coll :- ");
    scanf("%d",&c);
    
    printf("\n");
    
    for(i=0;i<r;i++)
    {
      
      for(j=0;j<c;j++)
      {
        printf("Enter a value of a[%d][%d] :- ",i,j);
        scanf("%d",&a[i][j]);
      }
    }
    
    printf("\n");
    
    for(i=0;i<r;i++)
    {
      
      for(j=0;j<c;j++)
      {
        printf("Enter a value of b[%d][%d] :- ",i,j);
        scanf("%d",&b[i][j]);
      }
    }
    
    printf("\n");
    
     for(i=0;i<r;i++)
    {
      
      for(j=0;j<c;j++)
      {
       sum[i][j]=a[i][j]-b[i][j];
      }
    }
    
    
    for(i=0;i<r;i++)
    {
      
      for(j=0;j<c;j++)
      {
        printf("%d",a[i][j]);
      }
      printf("\n");
    }
    
    
    for(i=0;i<r;i++)
    {
      
      for(j=0;j<c;j++)
      {
        printf("%d",b[i][j]);
      }
      printf("\n");
    }
    
    
     printf("\n Subtract Of Matrix \n");
     for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d",sum[i][j]);
      }
      printf("\n");
    }
    
    
}
