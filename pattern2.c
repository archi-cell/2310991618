#include <stdio.h>

int main() {
    int rows, spaces, stars, i, j;

    rows = 5; // Number of rows in the pattern

    // Loop for each row
    for (i = 1; i <= rows; i++) {
        // Loop to print spaces
        for (spaces = i; spaces < rows; spaces++) {
            printf("  "); // Print 2 spaces
        }

        // Loop to print stars
        for (stars = 1; stars <= (2 * i - 1); stars++) {
            if (i == rows || stars == 1 || stars == (2 * i - 1)) {
                printf("* "); // Print a star
            } else {
                printf("  "); // Print 2 spaces
            }
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
