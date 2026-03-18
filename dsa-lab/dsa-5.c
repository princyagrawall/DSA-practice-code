#include <stdio.h>

void transpose(int a[10][10], int t[10][10], int r, int c, int i, int j)
{
    if (i == r)
        return;
        
        if (j == c)
    {
        transpose(a, t, r, c, i + 1, 0);
        return;
    }

    t[j][i] = a[i][j];


    transpose(a, t, r, c, i, j + 1);
}

int main()
{
    int a[10][10], t[10][10];
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            
        }
    }

    transpose(a, t, r, c, 0, 0);

    printf("Transpose of matrix:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
