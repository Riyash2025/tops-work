#include<stdio.h>
int main()
{
	int number,i,j,r,c;
	printf("enter no of r");
	scanf("%d",&r);
	printf("enter no of c");
	scanf("%d",&c);
	int matrix[r][c];
	int sum=0;
	for(i=0;i<r;i++)
	{
	  for(j=0;j<c;j++)
	{
		printf("enter no of element");
		scanf("%d",&matrix[i][j]);
		sum+=matrix[i][j];
	  }  
	
	}
	printf("\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",matrix[i][j]);			
		}
		printf("\n");
		
	}
	
	printf("\n\n\nSum of all the element is %d",sum);
}

