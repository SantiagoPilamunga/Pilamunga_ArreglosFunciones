#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void asignacion(int n, int m, int matriz[n][m])
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz[i][j] = rand()&101;
        }
    }
}

int main()
{
    int n, m;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &m);
    int matrix[n][m];
    asignacion(n,m,matrix);
    printf("Primera matriz %d \n", asignacion);
    int matrix2[n][m];
    asignacion(n,m,matrix2);
    printf("Segunda matriz %d \n",asignacion);
    
    int suma[n][m];


    return 0;
}