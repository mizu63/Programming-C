#include <stdio.h>

int main() {
    int choice, again;

    do {
        printf("\n===== Food Menu =====\n");
        printf("1. Burger\n");
        printf("2. Pizza\n");
        printf("3. Chicken\n");
        printf("4. Coffee\n");
        printf("5. French Fries\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You selected Burger.\n");
                break;

            case 2:
                printf("You selected Pizza.\n");
                break;

            case 3:
                printf("You selected Chicken.\n");
                break;

            case 4:
                printf("You selected Coffee.\n");
                break;

            case 5:
                printf("You selected French Fries.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to order again?\n");
        printf("1. Yes\n");
        printf("0. No\n");
        printf("Enter choice: ");
        scanf("%d", &again);

    } while (again == 1);

    printf("\nThank you for ordering!\n");

    return 0;
}