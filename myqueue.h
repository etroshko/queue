#ifndef MYQUEUE
#define MYQUEUE

typedef int Data;

struct Node
{
    Data datum;
    Node *link;
};

void enqueue(Node *&begin, Node *&end, Data dt);
Data dequeue(Node *&begin, Node *&end);
Data onfront (Node *&begin);
Data onback (Node *&end);
bool isempty(Node *begin, Node *end);
void clear(Node *&end);
#endif
