#include<stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    fp = fopen("data.txt", "w");

    if(fp == null)
    {
        printf("error opening file!\n");
    }
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "%s", str);

    fclose(fp);

    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nFile contents:\n");
    while(fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);

}
