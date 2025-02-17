#include <stdio.h>

int main() {
    int a, b;
    char opr;

    // Read input properly
    scanf("%d %d", &a, &b);
    scanf(" %c", &opr); // Space before %c to avoid buffer issues

    switch (opr) {
        case '+':
            printf("%d", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("error"); // Handle division by zero
            } else {
                printf("%d", a / b);
            }
            break;
        default:
            printf("error"); // Handle invalid operator
            break;
    }

    return 0;
}
