#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, m;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &m);
    srand(time(NULL));
    int matrix[n][m];
    printf("Primera matriz \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = rand() % 101;
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    int matrix2[n][m];
    printf("Segunda matriz \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix2[i][j] = rand() % 101;
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    int suma[n][m];
    printf("Suma de primera y segunda matriz \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            suma[i][j] = matrix[i][j] + matrix2[i][j];
            printf("%d\t", suma[i][j]);
        }
        printf("\n");
    }
    return 0;
}