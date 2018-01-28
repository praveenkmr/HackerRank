/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  if(head==NULL){
      return head;
  }
  else if(position==0){
      Node* temp=head;
      head=head->next;
      delete temp;
  }
  else{
        position--;
        Node* temp=head;
       while(position--){
           temp=temp->next;
       } 
      Node* t=temp->next;
      temp->next=temp->next->next;
      delete t;
  }
   return head;
}
