#include<stdio.h>

     struct student
{
	char name[50];
	int roll_no;
	float marks;
};

	int main()
	{
		int student[3],i;
	for(i=0;i<3;i++)
	{
		printf("\nenter details of student");
		
		printf("enter name");
		scanf("%c\n",&name[i]);
		
		printf("enter roll no");
		scanf("%d\n",&roll_no[i]);
		
		printf("enter marks");
		scanf("%f\n",&marks);
		
	
	}
	printf("----student details----");
	for(i=0;i<3;i++)
	{
		printf("name%s\n",name[i]);
		printf("rollno%d\n",roll_no[i]);
		printf("marks%f\n",marks[i]);
	}
	
}  doubt

