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
        next = NULL;
    }
};
node *takeInput()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newNode = new node(data);
        if (head == NULL && tail == NULL)
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

void printIthNode(int index, node *head)
{
    node *temp = head;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == index)
        {
            cout << temp->data;
            break;
        }
        count++;
        temp = temp->next;
    }
}

int main()
{
    // code hear
    node *head = takeInput();
    int index;
    cin >> index;
    printIthNode(index, head);

    return 0;
}