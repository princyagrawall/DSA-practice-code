#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    int matrix1[r1][c1];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    int matrix2[r2][c2];
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &matrix2[i][j]);

    printf("\nFirst Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++)
            printf("%d ", matrix1[i][j]);
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", matrix2[i][j]);
        printf("\n");
    }

    if(c1 != r2) {
        printf("\nMatrix multiplication is not possible\n");
        return 0;
    }

    int result[r1][c2];
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(k = 0; k < c1; k++)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }

    printf("\nResultant Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
