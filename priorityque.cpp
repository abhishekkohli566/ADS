#include <iostream>
using namespace std;

const int MAX = 100;

struct Node
{
    int data;
    int priority;
};

Node pq[MAX];
int n = 0;

void array_insert(int i, Node x)
{
    if (n >= MAX)
    {
        cout << "Priority queue is full." << endl;
        return;
    }

    for (int j = n - 1; j >= i; j--)
    {
        pq[j + 1] = pq[j];
    }

    pq[i] = x;
    n++;
}

Node array_delete(int i)
{
    Node empty = {-1, -1};

    if (i < 0 || i >= n)
    {
        cout << "Invalid position." << endl;
        return empty;
    }

    Node deleted = pq[i];

    for (int j = i; j < n - 1; j++)
    {
        pq[j] = pq[j + 1];
    }

    pq[n - 1] = empty;
    n--;
    return deleted;
}

void insert_priority(Node x)
{
    int i = 0;

    while (i < n && pq[i].priority > x.priority)
    {
        i++;
    }

    array_insert(i, x);
}

Node delete_priority()
{
    if (n == 0)
    {
        cout << "Priority queue is empty." << endl;
        return {-1, -1};
    }

    return array_delete(0);
}

void display()
{
    if (n == 0)
    {
        cout << "Priority queue is empty." << endl;
        return;
    }

    cout << "Priority Queue: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Data = " << pq[i].data << ", Priority = " << pq[i].priority << endl;
    }
}

int main()
{
    insert_priority({30, 2});
    insert_priority({20, 5});
    insert_priority({40, 1});
    insert_priority({10, 8});

    display();

    cout << "Deleting highest priority element..." << endl;
    Node removed = delete_priority();
    cout << "Removed: Data = " << removed.data << ", Priority = " << removed.priority << endl;

    display();
    return 0;
}\