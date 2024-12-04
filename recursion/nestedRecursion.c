#include <stdio.h>

int fun(int n)
{
    if (n > 100)
        return n - 10;
    else
        return fun(fun(n + 11));
}


int main()
{
    int toShow = fun(95);
    printf("%d", toShow);

    return 0;
}