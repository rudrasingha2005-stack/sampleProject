#include <stdio.h>

int main() {
    int n = 3;
    int grid[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("Rotated Matrix:\n");

    for(int j = 0; j < n; j++) {
        for(int i = n - 1; i >= 0; i--) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    printf("===== Calculator Menu =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(choice) {
        case 1:
            printf("Result = %.2lf", num1 + num2);
            break;

        case 2:
            printf("Result = %.2lf", num1 - num2);
            break;

        case 3:
            printf("Result = %.2lf", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("Result = %.2lf", num1 / num2);
            else
                printf("Error! Division by zero.");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}