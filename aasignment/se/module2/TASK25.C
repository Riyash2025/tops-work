#include <stdio.h>

int main() {
    char str[100];
    int i=0, count=1;

    gets(str);

    while(str[i] != '\0') {
        if(str[i]==' ')
            count++;
        i++;
    }

    printf("Words = %d", count);
    
}
//WORD COUNT
