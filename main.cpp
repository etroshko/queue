#include "myqueue.h"
#include <iostream>
using namespace std;
int main()
{
    Node *a=NULL, *b=NULL;
    int number,elements;
    cout<<"Введите кол-во элементов ";
    cin>>elements;
    for (int i=0; i<elements; ++i)
    {
        cout<<"Введите элемент: ";
        cin>>number;
        enqueue(a,b,number);
    }
    cout<<"Первый: "<<onfront(a)<<endl;
    cout<<"Последний: "<<onback(b)<<endl;
    if (isempty(a,b))
    {
        cout<<"Пустая очередь"<<endl;
    }
    else
    {
        cout<<"Непустая очередь"<<endl;
    }
     cout<<"Введите кол-во элементов для изъятия ";
    cin>>elements;
    for (int i=0; i<elements; ++i)
    {
        cout<<dequeue(a,b)<<endl;
    }
    if (isempty(a,b))
    {
        cout<<"Пустая очередь"<<endl;
    }
    else
    {
        cout<<"Непустая очередь"<<endl;
    }
    clear(b);
    cout<<"Очистка завершена"<<endl;
    if (isempty(a,b))
    {
        cout<<"Пустая очередь"<<endl;
    }
    else
    {
        cout<<"Непустая очередь"<<endl;
    }
    cout<<endl;
    return 0;
}
