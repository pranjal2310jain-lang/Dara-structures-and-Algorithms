//Sorted Linked list given, remove duplicate nodes.

class Solution{
    public:
    ListNode* deleteDuplicates(ListNode* head){
        ListNode* ptr = head;
        while(head && head->next){
            if(head->val == head->next->val){
                head->next=head->next->next;
            }
            else{
                head=head->next;
            }
        }
        return ptr;
    }
}