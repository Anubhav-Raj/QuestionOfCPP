#include <iostream>
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

// taking  node input  from user
node *takingInput()
{
     int data;
     cin >> data;
     node *head = NULL;
     while (data != -1)
     {

          node *newNode = new node(data); // creating  node Dynamically
          if (head == NULL)
          {
               head = newNode;
          }
          else
          {
               node *temp = head; // storing the address of first node
               while (temp->next != NULL)
               {
                    temp = temp->next;
               }
               temp->next = newNode;
          }
          cin >> data;
     }
     return head;
}
node *takingInputBatter()
{
     int data;
     cin >> data;
     node *head = NULL;
     node *tail = NULL;
     while (data != -1)
     {

          node *newNode = new node(data); // creating  node Dynamically
          if (head == NULL)
          {
               head = newNode;
               tail = newNode;
          }
          else
          {
               tail->next = newNode;
               tail=tail->next; // or tail= newNode;
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
}

void increment(node *head)
{
     node *temp = head;
     while (temp != NULL)
     {
          temp->data++; // increment the data by one;
          temp = temp->next;
     }
}

int main()
{
     node *head = takingInput();
     print(head);
     increment(head);
     print(head);
}