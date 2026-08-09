
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        //count k
        int count=0;
        while(count<k){
            if(temp==NULL){
                return head;
            }
            temp=temp->next;
            count++;
        }
        //recursively call for ll
        ListNode* prevnode=reverseKGroup(temp,k);
        // reverse current group
        temp=head;count=0;
        while(count<k){
            ListNode* next=temp->next;
            temp->next=prevnode;
            prevnode=temp;
            temp=next;
            count++;

        }
        return prevnode;
        
    }
};
