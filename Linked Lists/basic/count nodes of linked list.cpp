//User function Template for C

int getCount(struct Node* head)
    {
        int x=0;
      
        while(head!=NULL){
            x++;
            head=head->next;
        }
        return x;
    }