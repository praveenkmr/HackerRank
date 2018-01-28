/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
  Node *tempA=headA;
  Node *tempB=headB;
  while(tempA!=NULL){
      Node *temp=tempB;
      for(temp;temp!=NULL;temp=temp->next){
          if(tempA==temp){
              return temp->data;
              break;
          }
      }
      tempA=tempA->next;
  }
  return -1;
}
