#include <stdio.h>
#include <stdlib.h>

void printMatrixA(int m, int n,int A[m][n]){
    int i,j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

void printMatrixB(int m, int n ,int B[m][n]){
    int i,j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}

void additionMatrix(int m ,int n,int A[m][n],int B[m][n]){
    int i,j,C;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            C = A[i][j] + B[i][j];
            printf("%d ", C);
        }
        printf("\n");
    }
}
int main()
{
    int m,n,j;

    printf("Enter row and column of matrix A and B (m n): ");
    scanf("%d%d",&m,&n);


    int A[m][n],B[m][n];
    int i;
    printf("Enter the matrix A:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the matrix B:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &B[i][j]);
        }
    }
    printf("matrix A = \n");
    printMatrixA(m,n,A);
    printf("matrix B = \n");
    printMatrixB(m,n,B);
    printf("-------------------------\n");

    printf("\n");
    printf("A + B =\n");
    additionMatrix(m,n,A,B);
    return 0;
}
