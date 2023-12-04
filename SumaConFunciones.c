/*Realice un programa donde muestre dos matrices generadas aleatoriamente entre 0 y 100, para finalmente mostrar la suma de ambas*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RellenarMatriz(int n, int a[n][n]);
void SumarMatriz(int n, int a1[n][n], int a2[n][n], int a3[n][n]);

int main(int argc, char const *argv[])
{
    int n; // declaracion de la variable dimension

    puts("Ingrese la dimension de las matrices: ");
    scanf("%d%*c", &n); // ingresamos la dimension de la matriz en teclado

    // declaramos las matrices 1 y 2 con la dimension ingresada por el usuario
    int m1[n][n];
    int m2[n][n];

    RellenarMatriz(n, m1); // Llamada a la funcion
    RellenarMatriz(n, m2); // Llamada a la funcion

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

    SumarMatriz(n, m1, m2, m3); // Llamada a la funcion

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

void RellenarMatriz(int n, int a[n][n]) // Funcion rellenar matriz con numeros aleatorios
{
    srand(time(NULL)); // generamos la seed para la generación de numeros aleatorios

    // rellenamos las matrices 1 y 2 de numeros aleatorios
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 101;
        }
    }
}

void SumarMatriz(int n, int a1[n][n], int a2[n][n], int a3[n][n]) // Funcion sumar 2 matrices
{
    // rellenamos la matriz 3 sumando cada uno de los elementos en sus respectivos indices
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a3[i][j] = a1[i][j] + a2[i][j];
        }
    }
}
