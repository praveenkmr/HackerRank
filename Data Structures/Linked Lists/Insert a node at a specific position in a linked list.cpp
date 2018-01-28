/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position){
    Node *temp=head;
    
    Node *newNode = new Node();
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL)
        return newNode;
    else if(position==0){
        newNode->next=head;
        return newNode;
    }
    else{
        int ct=0;
        while(ct<position-1 && temp->next!=NULL){
            temp=temp->next;
            ct++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        return head;
    }
}
