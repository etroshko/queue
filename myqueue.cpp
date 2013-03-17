#include "myqueue.h"
#include <iostream>
void enqueue(Node *&begin, Node *&end, Data dt)
{
    Node *p=NULL;
    p=new Node;
    p->datum=dt;
    p->link=NULL;
    if (end)
        end->link=p;
    end=p;
    if (!begin)
        begin=end;
}

Data dequeue(Node *&begin, Node *&end)
{
    Node *p=begin;
    if(p)
    {
        begin=begin->link;
        Data dt=p->datum;
        p->datum=0;
        p->link=NULL;
        delete p;
        p=NULL;
        if(!begin)
            end=NULL;
        return dt;
    }
    else
        return -1;

}


Data onfront (Node *&begin)
{
    if (begin)
        return begin->datum;
    else
        return -1;
}

Data onback (Node *&end)
{
    if (end)
        return end->datum;
    else
        return -1;
}

bool isempty(Node *begin, Node *end)
{
    if (begin && end)
        return false;
    else
        return true;

}
void clear(Node *&end)
{
    Node *p;
    while (end)
    {
        p=end;
        end=end->link;
        p->datum=0;
        delete p;
        p=NULL;

    }
}
