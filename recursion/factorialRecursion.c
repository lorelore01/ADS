#include <stdio.h>

int recursiveFactorial(int n)
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
        printf("%d %d\n", n, (n - 1) * n);
        return recursiveFactorial(n - 1) * n;
    }
}

int itFactorial(int n)
{
    int f = 1;
    int i;
    for (i = 1; i <= n; i++)
        f = f * i;;
    return f;
}

int main()
{
    int a = recursiveFactorial(5);
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