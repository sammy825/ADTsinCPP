#include "Queue.h";

Queue::Queue() : capacity(MAX_SIZE), top(0), bottom(-1), count(0) {};

void Queue::Enqueue(int value)
{
    if (!Queue::IsFull())
    {
        elements[++bottom] = value;
        count++;
    }
}

int Queue::Dequeue()
{
    if (!Queue::IsEmpty())
    {
        count--;
        return elements[top++];
    }
}

bool Queue::IsEmpty() const { return count == 0; }
bool Queue::IsFull() const { return count == 100; }
int Queue::Size() const { return count; }
int Queue::MaxSize() const { return MAX_SIZE; }

Queue::~Queue()
{
    delete[] elements;
}