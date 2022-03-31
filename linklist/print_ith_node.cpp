#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructer
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
void ithnode(node *head, int i)
{
    int count = 1;
    node *temp = head;
    while (temp != NULL)
    {
        if (count == i)
        {
            cout << temp->data << endl;
        }
        count++;
        temp = temp->next;
    }
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
int main()
{
    node *head = Input();
    print(head);
    ithnode(head, 4);
    return 0;
}