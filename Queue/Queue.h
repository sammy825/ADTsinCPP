const int MAX_SIZE = 100;

class Queue
{
public:
    Queue();
    void Enqueue(int value);
    int Dequeue();
    bool IsEmpty() const;
    bool IsFull() const;
    int Size() const;
    int MaxSize() const;
    ~Queue();

private:
    int capacity;
    int top;
    int bottom;
    int count;
    int elements[MAX_SIZE];
};