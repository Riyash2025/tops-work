#include <stdio.h>

int main() {
    int choice, qty;
    int total = 0;
    char more;

    do {
        printf("\n------ Menu ------\n");
        printf("1. Pizza   price = 180rs/pcs\n");
        printf("2. Burger  price = 100rs/pcs\n");
        printf("3. Dosa    price = 120rs/pcs\n");
        printf("4. Idli    price = 50rs/pcs\n");

        printf("Please Enter your choice ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nselected Pizza.\n");
                printf("Enter the quantity : ");
                scanf("%d", &qty);
                printf("Amount : %d\n", qty * 180);
                total += qty * 180;
                break;

            case 2:
                printf("\nselected Burger.\n");
                printf("Enter the quantity");
                scanf("%d", &qty);
                printf("Amount : %d\n", qty * 100);
                total += qty * 100;
                break;

            case 3:
                printf("\nselected Dosa.\n");
                printf("Enter the quantity");
                scanf("%d", &qty);
                printf("Amount : %d\n", qty * 120);
                total += qty * 120;
                break;

            case 4:
                printf("\nselected Idli.\n");
                printf("Enter the quantity");
                scanf("%d", &qty);
                printf("Amount : %d\n", qty * 50);
                total += qty * 50;
                break;

                printf("\nInvalid choice!\n");
        }

        printf("total Amount is = %d\n", total);

        printf("do you want place more orders? y & n");
        scanf(" %c", &more); 

    } while(more=='y'||more=='Y');

    printf("\nFinal Total Amount = %d\n", total);

  
}
