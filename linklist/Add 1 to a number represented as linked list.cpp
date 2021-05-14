class Solution
{
    public:
    int addnum(Node* head)
    {
        int carry = 0;
        if(head->next==NULL)
        {
            if(head->data==9)
            {
                head->data=0;
                return 1;
            }
            head->data+=1;
            return 0;
        }
        carry = addnum(head->next);
        if(head->data == 9 && carry == 1)
        {
            head->data = 0;
            return carry;
        }
        head->data= head->data + carry;
        return 0;
        
    }
    Node* addOne(Node *head) 
    {
        if(head == NULL || head->next == NULL)
        {
            if(head!=NULL)
            {
                head->data+=1;
            }
            return head;
        }
        int car = addnum(head->next);
        if(car == 1)
        {
            head->data+=1;
        }
        return head;
    }
};