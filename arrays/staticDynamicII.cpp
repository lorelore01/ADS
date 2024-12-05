#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p;
    int *ptr;
    int i;

    p = (int *) malloc (5 * sizeof(int));
    ptr = (int *) malloc (5 * sizeof(int));

    ptr = A;

    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    ptr[0] = 55;
    ptr[1] = 66;
    ptr[2] = 77;
    ptr[3] = 88;
    ptr[4] = 99;
    ptr[5] = 100;

    for (i = 0; i < 5; i++)
        printf("%d ", A[i]);

    printf("\n");

    for (i = 0; i < 5; i++)
        printf("%d ", p[i]);

    printf("\n");

    for (i = 0; i < 5; i++)
        printf("%d ", ptr[i]);


    return 0;
}