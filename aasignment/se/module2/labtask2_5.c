#include<stdio.h>
int main()
{
	int i;
	printf("enter number");
	for(i=1;i<=10;i++)
	{
		//*break
		if(i==5)
		{
			break;
		}
		printf("\n%d",i); 
		//*
		
		if(i==3)
		{
			continue;
			
		}
		printf("\n%d",i);
	}
	
}
