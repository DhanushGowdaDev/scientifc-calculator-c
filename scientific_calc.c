#include <stdio.h>
#include <math.h>

double factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int choice, n;
    float a, b;

    while (1) {
        printf("\n---SCIENTIFIC CALCULATOR---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (x)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Power (^)\n");
        printf("7. Factorial (!)\n");
        printf("8. sin(x) (x in radians)\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f\n", a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if (b != 0)
                    printf("Result: %.2f\n", a / b);
                else
                    printf("Error: Division by zero!\n");
                break;

            case 5:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if ((int)b != 0)
                    printf("Result: %d\n", (int)a % (int)b);
                else
                    printf("Error: Division by zero!\n");
                break;

            case 6:
                printf("Enter base and exponent: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f\n", pow(a, b));
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%d", &n);
                if (n >= 0)
                    printf("Result: %.0lf\n", factorial(n));
                else
                    printf("Error: Factorial of negative number doesn't exist!\n");
                break;

            case 8:
                printf("Enter angle in radians: ");
                scanf("%f", &a);
                printf("sin(%.2f) = %.4f\n", a, sin(a));
                break;

            case 9:
                printf("Exiting the calculator. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
