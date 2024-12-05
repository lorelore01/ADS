#include <stdio.h>
#include <iostream>
// #include <stdlib.h>
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
    int *p; // HEAP
    p = new int[5]; // 'C++' 
    // (int *) malloc (5 * sizeof(int)) 'C'-lang

    delete[]p; // deallocation C++
    // free(p); // deallocation 'C'-lang

    A[0] = 5;
    p[0] = 5;

    return 0;
}