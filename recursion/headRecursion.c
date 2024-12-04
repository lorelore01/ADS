#include <stdio.h>

void recursiveFun(int n)
{
    if (n > 0)
    {
        recursiveFun(n - 1);
        printf("%d ", n);
    }
}

void itrFun(int n)
{
    int i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}

int main()
{

    recursiveFun(3);
    printf("\n");
    itrFun(3);

    // Modifications need to be made in order to turn a Head Recursion into a pure loop

    return 0;
}