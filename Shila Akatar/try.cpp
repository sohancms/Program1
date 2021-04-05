#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct stuck
{
    int size;
    int top;
    int *arr;
} stack;

int isEmpty(stack *ptr)
{
    cout << "isEmpty function is calling" << endl;
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(stack *ptr)
{
    if (ptr->top == (ptr->size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    stack *s; //= (stack *)malloc(sizeof(stack));
    s->size = 80;
    s->top = -1;
    stack *s = new int[s->size];
    if (isEmpty(s))
    {
        cout << "The stack is empty." << endl;
    }
    else
    {
        cout << "The stack is not empty." << endl;
    }

    return 0;
}