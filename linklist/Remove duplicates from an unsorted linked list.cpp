class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        map<int,int> flag;
        Node* temp = head;
        flag[temp->data] = 1;
        while(temp!=NULL && temp->next!=NULL)
        {
            if(flag[temp->next->data] == 1){
                Node* waste = temp->next;
                temp->next = temp->next->next;
                delete waste;
            }
            else{
                temp = temp->next;
                flag[temp->data] = 1;
            }
        }
        return head;
    }
};