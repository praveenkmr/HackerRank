/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    Node *temp=head;
    Node *value=head;
    while(positionFromTail--){
        temp=temp->next;
    }
    while(temp->next!=NULL){
        temp=temp->next;
        value=value->next;
    }
    return value->data;
}
