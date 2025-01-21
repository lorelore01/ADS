#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct Node
{
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

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;

    }
}

int count(struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

int Rcount(struct Node *p)
{
    if (p != NULL)
        return Rcount(p->next) + 1;
    else
        return 0;
}

int sum(struct Node *p)
{
    int s = 0;

    while(p != NULL)
    {
        s += p->data;
        p = p->next;
    }

    return s;
}

int Rsum(struct Node *p)
{
    if(p == NULL)
        return 0;
    else
        return Rsum(p->next) + p->data;
}

int Max(struct Node *p)
{
    int max = INT_MIN;

    while (p)
    {
        if(p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int RMax(struct Node *p)
{
    int x = 0;

    if (p == 0)
        return INT_MIN;
    x = RMax(p->next);
    if (x > p->data)
        return x;
    else return p->data;
    
}

struct Node * LSearch(struct Node *p, int key)
{
    
    struct Node *q;
    
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
       
    }
    return NULL; // key not found
}

struct Node * RSearch(struct Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return RSearch(p->next, key);
}

void Insert(struct Node *p, int index, int x)
{
    int i;
    struct Node *t;

    if (index < 0 || index > count(p))
        return;
    t = (struct Node *) malloc(sizeof(struct Node));
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
        
    }

}

void SortedInsert(struct Node *p, int x)
{
    struct Node *t, *q = NULL;

    t = (struct Node *) malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if (first == NULL) 
        first = t;
    else 
    {
        while(p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    

    }
}


int Delete(struct Node *p, int index)
{
    int i;
    struct Node *q = NULL;
    int x = -1;

    if (index < 1 || index > count(p))
        return -1;
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
        for(i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }
    

}


int main()
{

    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);


    printf("Deleted Element %d\n", Delete(first, 2));

    Display(first);
    printf("\n\n");



    return 0;
}