#include<iostream>
using namespace std;
 class node
 {
    public:
    int info;
    node*next;
    node(int data)
    {
        info=data;
        next=NULL;
    }
 };
 node *front, *rear;
 bool isEmpty()
 {
    return front==NULL;
 }
 void traverse()
 {
    if (front==NULL)
    {
        cout<<"empty queue";
        return;
    }
    node *temp=front;
    while (temp!NULL)
    {
        cout<<temp->info<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"Front ="<<front->info",Rear
 }