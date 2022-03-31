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
 node *insertNode(node *head, int data, int index)
{
    node *newNode = new node(data);
    int count = 0;
    node *temp = head;
    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
         return head;
    }
    while (temp != NULL && count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        node *temp_add = temp->next;
        temp->next = newNode;
        newNode->next = temp_add;
    }
    // or
    /*
      newNode->next=temp->next;
       temp->next=newNode;
    */
    return head;
}

int main()
{
    // code hear
    node *head = Input();
    print(head);
    int i, data;
    cin >> i >> data;
   head= insertNode(head, data, i);
    print(head);
}