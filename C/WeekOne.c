#include <stdio.h>
#include <string.h>
int main() {
    char loop = 'y';
    while (loop == 'y' || loop == 'Y') {
        float a, b;
        char op [20];
        printf("Enter the first number:- \n");
        scanf("%f", &a);
        printf("Enter the second number:- \n");
        scanf("%f", &b);
        printf("Enter the operation (sum, difference, product, quotient):- \n");
        scanf("%19s", op);
        if (strcmp(op, "sum") == 0) {
            printf("Result: %.2f\n", a + b);
        } else if (strcmp(op, "difference") == 0) {
            printf("Result: %.2f\n", a - b);
        } else if (strcmp(op, "product") == 0) {
            printf("Result: %.2f\n", a * b);
        } else if (strcmp(op, "quotient") == 0) {
            if (b != 0) {
                printf("Result: %.2f\n", a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        } else {
            printf("Error: Unknown operation.\n");
        }
        printf("Do you want to perform another calculation? (y/n):- \n");
        scanf(" %c", &loop);
        if (loop == 'y') {
            printf("Starting a new calculation...\n");
        }
        else {
            printf("Exiting...\n");
        }
    }
    printf("Thank you for using the calculator.\n");
    return 0;
}
