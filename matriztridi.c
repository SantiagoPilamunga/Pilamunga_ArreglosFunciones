#include <stdio.h>
int main()
{
    int l, n, m;
    printf("Ingrese el numero de matrices: ");
    scanf("%d", &l);
    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);
    printf("Ingrese el mumero de columnas: ");
    scanf("%d", &m);
    int matrix[l][n][m];
    for (int k = 0; k < l; k++)
    {
        if (k == l - 1)
        {
            printf("Matriz final: \n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    matrix[k][i][j] = 1;
                    printf("%d\t", matrix[k][i][j]);
                }
                printf("\n");
            }
        }
        else
        {

            printf("Matriz: %d \n", k + 1);
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    matrix[k][i][j] = 0;
                    printf("%d\t", matrix[k][i][j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}