#include <stdio.h>
#include <stdlib.h>

int count = 0; // Глобальна змінна для підрахунку дій

int main() {
    int choice;
    int a, b;

    while(1) {
        printf("\n--- Shitty Calculator v0.1 ---\n");
        printf("Actions performed: %d\n", count);
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting... Good riddance.\n");
            break;
        }

        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);

        switch(choice) {
            case 1:
                // TODO: Женя має додати код
                printf("Addition not implemented yet.\n");
                break;
            case 2:
                // TODO: Женя має додати код
                printf("Subtraction not implemented yet.\n");
                break;
            case 3:
                // TODO: Андрюха має додати код
                printf("Multiplication not implemented yet.\n");
                break;
            case 4:
                // TODO: Андрюха має додати код
                printf("Division not implemented yet.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}