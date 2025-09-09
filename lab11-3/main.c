#include <stdio.h>
#include <stdlib.h>

void printMatrix(int m, int n, float arr_a[m][n]){
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%g ", arr_a[i][j]);
        }
        printf("\n");
    }
}

int scalarMultiplication(int m, int n, float arr[m][n], float scalar){
    int i, j, Des;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            Des = arr[i][j] = arr[i][j] * scalar;
        }
    }
    return Des;
}

int main(){
    int m, n, i, j;
    float scalar;

    printf("Enter row and column of matrix A and B (m n): ");
    scanf("%d %d", &m, &n);

    float arr_a[m][n];

    printf("Enter the matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%f", &arr_a[i][j]);
        }
    }

    printf("Enter the scalar : ");
    scanf("%f", &scalar);

    printf("\nMatrix A =\n");
    printMatrix(m, n, arr_a);

    scalarMultiplication(m, n, arr_a, scalar);

    printf("\n %gA =\n", scalar);
    printMatrix(m, n, arr_a);

    return 0;
}
