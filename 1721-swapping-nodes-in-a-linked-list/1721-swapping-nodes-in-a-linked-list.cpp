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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp = head;
        int count = 0;
        
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        
        ListNode *temp1 = head;
        ListNode *temp2 = head;
        for(int i=1;i<k;i++){
            temp1=temp1->next;
        }
        
        
        for(int i=1;i<count-k+1;i++){
            temp2=temp2->next;
        }
        
        int value = temp1->val;
        temp1->val = temp2->val;
        temp2->val = value;
        
        return head;
    }
};