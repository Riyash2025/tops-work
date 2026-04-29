#include<stdio.h>
int main()
{
	float no1,no2;
	char operator;
	printf("enter first number");
	scanf("%f",&no1);
	
	printf("enter second number");
	scanf("%f",&no2);
	
	printf("enter operator (+,-,*,/,%%)");
	scanf(" %c",&operator);
	
	switch(operator)
	{
		
		case '+':
			printf("result=%2.f",no1+no2);
		break;
		case '-':
		    printf("result=%2.f",no1-no2);
		break;	
		case '*':
		    printf("result=%2.f",no1*no2);
		break;		
		case '/':
		    printf("result=%2.f",no1/no2);
		break;		
	case '%':
		    printf("result=%2.f",(int)no1%(int)no2);
		break;		
	
	default:
	        printf("invalid operator");	
	}
}
