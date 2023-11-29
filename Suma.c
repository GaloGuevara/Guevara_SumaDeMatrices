/*Realice un programa donde muestre dos matrices generadas aleatoriamente entre 0 y 100, para finalmente mostrar la suma de ambas*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int n; // declaracion de la variable dimension

    puts("Ingrese la dimension de las matrices: ");
    scanf("%d%*c", &n); // ingresamos la dimension de la matriz en teclado

    // declaramos las matrices 1 y 2 con la dimension ingresada por el usuario
    int m1[n][n];
    int m2[n][n];

    srand(time(NULL)); // generamos la seed para la generación de numeros aleatorios

    // rellenamos las matrices 1 y 2 de numeros aleatorios
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

    // mostramos en pantalla la matriz 1 y 2 rellenadas con numeros aleatorios entre 0 y 100
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

    int m3[n][n]; // declaramos la matriz 3 donde guardamos la suma de las dos matrices

    // rellenamos la matriz 3 sumando cada uno de los elementos en sus respectivos indices
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j]; // aqui se hace la suma
        }
    }

    // se muestra en pantalla el resultado de la suma
    puts("\nLa suma de la matriz 1 + la matriz 2 es: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
