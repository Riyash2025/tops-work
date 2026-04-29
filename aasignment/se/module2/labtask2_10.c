#include<stdio.h>
#include<string.h>
int main()
{

char name[20]="riya ";
char name1[30]="patel";

strcat(name,name1);
printf("%s",name);
printf("\n%d",strlen(name));
}

