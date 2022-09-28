/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            count+=1;
            temp=temp->next;
        }
        
        int loop=count-n;
        if(loop==0){
            return head=head->next;
        }
        ListNode* curr = head;
        for(int i=1;i<loop;i++){
            curr=curr->next;
        }
        
        curr->next = curr->next->next;
        
        return head;
    }
};