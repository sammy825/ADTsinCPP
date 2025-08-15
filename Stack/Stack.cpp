#include "Stack.h"

Stack::Stack() : top(-1)
{
}

bool Stack::IsEmpty() const
{
    return (top == -1);
}

bool Stack::IsFull() const
{
    return (top == MAX_SIZE - 1);
}

int Stack::Size() const
{
    return sizeof(elements);
}

int Stack::MaxSize() const
{
    return MAX_SIZE;
}

void Stack::Push(int value)
{
    if (!Stack::IsFull())
    {
        elements[++top] = value;
    }
}

void Stack::Pop()
{
    if (!Stack::IsEmpty())
    {
        elements[top--];
    }
}

int Stack::Peek() const
{
    if (!Stack::IsEmpty())
    {
        return elements[top];
    }
}

Stack::~Stack()
{
    delete[] elements;
}