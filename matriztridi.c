#include <stdio.h>
void asignar(int l,int n,int m,int matriz[l][n][m])
{
    for (int k = 0; k < l; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matriz[k][i][j]=0;
            }
            
        }
    }
}

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
   
    return 0;
}