#include <stdio.h>

void tailRecursion(int n)
{
    if(n > 0)
    {
        // first print n
        printf("First print %d \n", n);
        // then call the function
        printf("Then call the function fun(n - 1) \n");
        tailRecursion(n - 1);
    }
}

void headRecursion(int n)
{
    if(n > 0)
    {
        // first call the function
        printf("First call the function fun(n - 1) \n");
        headRecursion(n - 1);
        // then print n
        printf("Then print: %d \n", n);
    }
}

int main()
{

    // test variable is created
    int x = 3;
    
    printf("Tail Recursion of x = %d : \n", x);
    tailRecursion(x);
    printf("\n");
    printf("Head Recursion of x = %d : \n", x);
    headRecursion(x);

    // please note stack utilisation in recursion 

    return 0;
}