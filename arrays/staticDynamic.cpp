#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // int A[5]; // static
    // int n;
    // printf("Enter size of aray: ");
    // cin >> n;
    // int B[n]; // stack only

    // dynamic

    int A[5];
    int *p;
    p = new int[5]; // 'C++' 
    // (int *) malloc (5 * sizeof(int)) 'C'-lang


    return 0;
}