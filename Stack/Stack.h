const int MAX_SIZE = 100;

class Stack
{
public:
    Stack();
    void Push(int value);
    void Pop();
    int Peek() const;
    bool IsEmpty() const;
    bool IsFull() const;
    int Size() const;
    int MaxSize() const;
    ~Stack();

private:
    int elements[MAX_SIZE];
    int top;
};