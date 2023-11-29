/*Realice un programa donde muestre dos matrices generadas aleatoriamente entre 0 y 100, para finalmente mostrar la suma de ambas*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int n;
    puts("Ingrese la dimension de las matrices: ");
    scanf("%d%*c", &n);
    int m1[n][n];
    int m2[n][n];

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m1[i][j] = rand() % 101;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m2[i][j] = rand() % 101;
        }
    }

    puts("\nLa matriz 1 es:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }

    puts("\nLa matriz 2 es: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
