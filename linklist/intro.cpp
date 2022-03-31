#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next; // store the address of  node

    // Costructer
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
    while (data != -1)
    {
        node *newNode=new node(data);// creating  node Dynamically
        if (head == NULL)
        {
            head = newNode;
        } else{
          node*temp=head;
            while(temp->next!=NULL){
                 temp= temp->next;

            }
             temp->next=newNode;

        }

        cin >> data;
    }
     return head;
}
void print(node *head)
{
    node *temp = head;
    // store the head address into temp  kyuki baad ne head ko usee krke  print kr sake link list ko
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    temp = head; // again instilize temp with head
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    /*
    // Statially
    node n1(10);      // create a node n1
    node *head = &n1; // store the  first node address into head

    node n2(20); // creating a node n2
    // connecting  node  n1 and n2
    n1.next = &n2; // store the address of node n2 into n1 ke next me
    cout << n1.data << " " << n2.data << endl;
    // printing the data of  node with the help of head
    cout << head->data << endl;


//Dynamically
     node *n3 = new node(30);
      node *dhead = n3; // store the  first node address into head
     node *n4 = new node(40);
     n3->next=n4;//store the address of node n3 into n4 ke next me
      cout<<n3->data<<" "<<n4->data<<endl;
*/

    // create a link list of 5 node
/*
    node n1(1);
    node *head = &n1;
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    print(head);
    print(head);
*/
    node *head= takeInput();
        print(head);
}