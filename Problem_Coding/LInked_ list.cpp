// Traversal of  Linked List = 0(n)
#include <iostream>
using namespace std;
class node {
  public:
  int data;
  node* next;

  node(int value)
  {
    data = value;
    next = NULL;
  }
};
void insertLL(node* &head , int value)
{
  node* n = new node(value);
  if(head == NULL){
    head = n;
    return ;
  }
  node* temp = head;
  while(temp->next!=NULL){
      temp = temp->next;
  }
  temp->next = n;
}

void display(node* head)
{
  node* temp =head;
  while(temp!= NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}
int main()
{
 node* head = NULL;
 insertLL(head,5);
 insertLL(head,6);
 insertLL(head,7);
 display(head);
 return 0;
}