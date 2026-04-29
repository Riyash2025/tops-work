#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	
	//arithematic operators
	printf("\n----arithematic operators----\n");
	printf("\naddition %d",a+b);
	printf("\nsubtraction %d",a-b);
	printf("\nmultiplication %d",a*b);
	printf("\ndivision %d",a/b);
	
	//relational operators
	printf("\n-----relational operators");
    printf("\n%d",a==b);
    printf("\n%d",a!=b);
   	printf("\n%d",a>b);
 	printf("\n%d",a<b);
    printf("\n%d",a>=b);
	printf("\n%d",a<=b);
	
	//logical operators
	printf("\n----logical operators");
	printf("\n(a && b)%d",a && b);
	printf("\n(a || b) %d",a || b);
	printf("\n(!a)%d",!a);
	
}
