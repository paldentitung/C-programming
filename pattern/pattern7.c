#include <stdio.h>

int main() {
    int n = 4,i,j; // Number of rows in the upper part of the diamond

    // Upper part of the diamond
    for ( i = 0; i < n; i++) {
        // Print leading spaces
        for ( j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        // Print asterisks
        for ( j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower part of the diamond
    for ( i = n - 1; i > 0; i--) {
        // Print leading spaces
        for (j = 0; j < n - i; j++) {
            printf("  ");
        }
        // Print asterisks
        for ( j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
