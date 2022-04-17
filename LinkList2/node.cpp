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
int main()
{
    node n1(10);
    node n2(30);
    // Statically(Conneting  the Node 1 and Node 2)
    node *head = &n1;
    n1.next = &n2;
    // Dynamically(Conneting  the Node 3 and Node 4)
    node *n3 = new node(20);
    node *head2 = n3;
    node *n4 = new node(40);
    n3->next = n4;
}
