#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *Input()
{
    int data;
    cin >> data;
    int count=1;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newNode = new node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
             count++;
        }
        cin >> data;
    }
     cout<<"Link List Length :"<<count<<endl;
    return head;
}

int main()
{
    // code hear
     node *head=Input();

    return 0;
}