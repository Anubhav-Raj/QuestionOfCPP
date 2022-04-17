#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next = NULL;
    
    node(int data){
      this->data = data;
      next = NULL;
    }
};
node *takeInput(){
    int data;
    cin >> data;
    node *head = NULL;//  intinally head is nulll
    while (data != -1)
    {
        node *newNode = new node(data);// creating  node dynamically 
        if (head == NULL)
        {
            head = newNode;// storing   first node address into head
        }
        else
        {
            node *temp = head;// just intilized the  head into temp (Taki  first node ka address change na  ho )
            while (temp->next != NULL)
            {
                temp = temp->next; 
            }
             temp->next=newNode;// connecting  two node
            cin >> data;
        }
    }
    return head;// return the address of first node
}
void print(node *head){
    //node *temp = head;
    while (head != NULL){
        cout << head->data << "->";
        head = head->next;
    } 
     cout<<endl;
}
int main(){
   
    node *head = takeInput();
    print(head);

    return 0;
}