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
void print(node *head){
    node *temp = head;
    while ( temp!= NULL){
        cout << temp->data << "->";
        temp = temp->next;
    } 
     cout<<endl;
}
int main()
{
    // code hear
     node *head=takeInput();
      print(head);

    return 0;
}