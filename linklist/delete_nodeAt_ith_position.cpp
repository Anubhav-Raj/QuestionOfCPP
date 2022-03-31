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
        }
        cin >> data;
    }
    return head;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *deleteNode(node *head, int index)
{

    node *temp = head;
    int count = 1;

    // if  linklist is Empty
    if (temp == NULL)
    {
        return NULL;
    }
    // delete  first postion node
    if (index == 0)
    {
        head = head->next;
        delete temp;
        return head;
    }

    while (temp != NULL && count < index-1 )
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        node *temp_add = temp->next;
        temp->next = temp_add->next;
        delete temp_add;
    }
    return head;
}
int main()
{
    // code hear
    node *head = Input();
    print(head);
    int i;
    cin >> i;
    head = deleteNode(head, i);
    print(head);

    return 0;
}