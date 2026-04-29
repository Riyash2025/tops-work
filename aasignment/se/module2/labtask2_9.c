#include<stdio.h>
int main()
{

int i,j,r,c;
	printf("enter a no of row");
	scanf("%d",&r);
	printf("enter no of colums");
	scanf("%d",&c);
	int matrix[r][c];
	int sum=0;

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
			
			printf("\nenter element");
			scanf("%d",&matrix[i][j]);
}
	}
		
		printf("matrix is\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("\t%d",matrix[i][j]);
					sum+=matrix[i][j];	
		}
			printf("\n");
	
	}
		printf("\n\n sum of all number is %d",sum);
}

	
