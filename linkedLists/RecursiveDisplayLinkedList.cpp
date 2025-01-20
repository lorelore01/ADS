#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct Node{
    int data;
    struct Node *next;
}*first;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *) malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *) malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}


void RDisplay(struct Node *p)
{
    if (p != NULL)
    {


        printf("%d ", p->data);
        RDisplay(p->next);
    }
}

void RDisplayInv(struct Node *p)
{
    if (p != NULL)
    {


        RDisplay(p->next);
        printf("%d ", p->data);
    }
}

int main()
{
    int A[] = {3, 5, 6, 7, 10, 15};

    create(A, 5);

    RDisplay(first);
    printf("\n");
    RDisplayInv(first);


    return 0;
}