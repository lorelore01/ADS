#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main()
{
    int i, j;

    // int A[3][4];
    int *A[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter number for [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    } 

    for (i = 0; i < 3; i++)
    {
        delete[] A[i];
    }

    return 0;
}