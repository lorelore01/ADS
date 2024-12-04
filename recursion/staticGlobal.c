#include <stdio.h>

int fun(int n)
{
    static int x = 0; // It will not be created everytime the 
    if (n > 0)        // function is called, it is created just one time that is the loading time of a program.
    {
        x++;
        printf("n=%d + ", n - 1);
        printf("x=%d\n", x);
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int a = 5;
    printf("%d", fun(a));
    printf("\nThe adding is done on returning\n");


    

    return 0;
}

//        fun(5)
//       /
//      fun(4) + 5 = 25
//      /
//     fun(3) + 5 = 20
//     /
//    fun(2) + 5 = 15
//    /
//   fun(1) + 5 = 10
//   / 
//  fun(0) + 5 = 5
//  |
//  0