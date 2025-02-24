#include <stdio.h>

int main() {
    int i, j, k, A[2][2], B[2][2], C[2][2] = {0};

    // Input for first matrix
    printf("Enter the first 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter the second 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j];
        }
    }

    // Print the result
    printf("Multiplied matrix is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

