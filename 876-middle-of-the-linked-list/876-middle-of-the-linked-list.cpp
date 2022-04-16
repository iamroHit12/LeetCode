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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head,*curr=head,*prev=NULL;
        int count = 0;
        while(temp!=NULL){
            count+=1;
            temp = temp->next;
        }
        
        for(int i=1;i<=count/2;i++){
            head = head->next;
        }
        
        return head;
    }
};