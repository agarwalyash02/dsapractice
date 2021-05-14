Node *removeDuplicates(Node *head)
{
    int curr;
    Node* temp = head;
    curr = temp->data;
    while(temp!=NULL && temp->next!=NULL)
    {
        if(temp->next->data==curr){
            Node* waste = temp->next;
            temp->next = temp->next->next;
            delete waste;
        }
        else{
            temp = temp->next;
            curr = temp->data;
        }
    }
    return head;
}