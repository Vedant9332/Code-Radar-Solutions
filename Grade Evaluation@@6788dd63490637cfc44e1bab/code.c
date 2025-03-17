#include <stdio.h>

int main() {
    char grade;
    
    // Taking input
    printf("Enter the grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    // Evaluating and printing the grade description
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}
