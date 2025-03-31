#include <stdio.h>

int main() {
    int n;

    // Read the number of rows from the user
    scanf("%d", &n);

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Determine the starting number for the row (1 or 0)
        int start = (i % 2 == 1) ? 1 : 0;

        // Loop through each column in the row
        for (int j = 1; j <= i; j++) {
            printf("%d ", start);
            // Alternate the number for the next column
            // start = 1 - start; 
        }
        printf("\n"); // Move to the next line for the next row
    }

    return 0;
}