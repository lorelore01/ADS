// #include <stdio.h>

// int fun(int n)
// {
//     static int x = 0;
//     if (n > 0)
//     {
//         return fun(n - 1) + n;
//     }
//     return 0;
// }

// int main()
// {
    
//     int r;
//     r = fun(5);
//     printf("%d", r);
    
//     return 0;
// }

// #include <stdio.h>

// int fun(int n)
// {
//     static int x = 0;
//     if (n > 0)
//     {
//         x ++;
//         return fun(n - 1) + x;
//     }
//     return 0;
// }

// int main()
// {
    
//     int r;
//     r = fun(5);
//     printf("%d\n", r);
    
//     return 0;
// }


// what if x is global variable? 

#include <stdio.h>

int x = 0;

int fun(int n)
{
    if (n > 0)
    {
        x ++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    
    int r;
    r = fun(5);
    printf("%d\n", r);

    r = fun(5);
    printf("%d\n", r);

    r = fun(5);
    printf("%d\n", r);
    
    r = fun(5);
    printf("%d\n", r);
    
    
    return 0;
}