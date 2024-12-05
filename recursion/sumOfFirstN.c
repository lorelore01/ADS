#include <stdio.h>

// direct formula n(n + 1) / 2

// int sum(int n)
// {
//     return n * (n + 1) / 2;
// }
// O(1)

// int sum(int n)
// {
//     int i, s = 0;
//     for (i = 1; i <= n; i++)
//         s = s + i;
//     return s;
// }
// O(n)

int sum(int n)
{
    if (n == 0)
        return 0;
    else return sum(n - 1) + n;
}

int main()
{
    int container = sum(5);
    printf("%d", container);

    return 0;
}

// time - O(n) space - O(n)