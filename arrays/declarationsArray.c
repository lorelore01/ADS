#include <stdio.h>


int main()
{
    int A[5] = {2, 5, 4, 9, 8};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    
    printf("%d\n", A[2]);
    printf("%d\n", 2[A]);
    printf("%d\n", *(A + 2));

}