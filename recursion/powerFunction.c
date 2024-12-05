#include <stdio.h>

int power(int m, int n)
{
    if (n == 0)
        return 1;
    return power(m, n - 1) * m;
}

int betterPow(int m, int n )
{
    if (n == 0)
        return(1);
    if (n % 2 == 0)
        return betterPow(m * m, n / 2);
    else
        return m * betterPow(m * m, (n - 1) / 2);
}

int iterativePower(int m, int n)
{
    int result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result *= m;
        }
        m *= m;
        n /= 2;
    }
    return result;
}

int main()
{
    int test = 2;
    int test_test;
    test_test = power(test, 10);
    printf("%d", test_test);

    return 0;
}