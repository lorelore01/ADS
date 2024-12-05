#include <stdio.h>

int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0) 
    {
        return 1;
    }
    else
    {
        return factorial(n - 1) * n;
    }
}

int main()
{
    int a = factorial(-3);
    if (a == - 1)
    {
        printf("Factorial cannot be calculated for negative numbers.\n");
    }
    else
    {
        printf("Factorial: %d\n", a);
    }

    return 0;
}