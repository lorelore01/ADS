#include <stdio.h>

void recursiveFun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        recursiveFun (n - 1);
    }
}

void itrFun(int n)
{
    while (n > 0)
    {
        printf("%d ", n);
        n--;
    }
}

int main()
{
    recursiveFun(3); // Time - O(n) / Space - O(n) *stack*
    printf("\n"); 
    itrFun(3); // Time - O(n) / Space - O(1) *no stack*

    // If you have to write tail recursion
    // then you better write a loop
    // tho there are few situations recursions are better


    return 0;
}