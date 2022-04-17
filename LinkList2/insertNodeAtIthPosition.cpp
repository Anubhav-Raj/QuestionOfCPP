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
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
 node *insetNodeAtIthPostion(int index, node *head, int data)
{

    node *newnode = new node(data);
    int counter = 0;
    node *temp = head;
     if(index==0)
     {
           newnode->next=head;
            head=newnode->next;
             return head;
     }
    while ( temp != NULL && counter < index - 1)
    {
        temp = temp->next;
        counter++;
    }
    if (temp != NULL)
    {
        node *pointer = temp->next;
        temp->next = newnode;
        newnode->next = pointer;
    }  else{
         cout<<"App jo location dal rahe hai... wo with in limit honi chiye"<<endl;
    }
}
int main()
{

    node *head = takeInput();
    print(head);
     int index, data;
      cin>>index>>data;
    head=insetNodeAtIthPostion(index, head, data);
    print(head);
    return 0;
}