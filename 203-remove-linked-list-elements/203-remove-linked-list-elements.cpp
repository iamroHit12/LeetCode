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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int> vc;
        
        while(head!=NULL){
            if(head->val!=val){
                vc.push_back(head->val);
            }
            
            head=head->next;
        }
        
        ListNode *dummy = new ListNode(-1);
        ListNode *temp = dummy;
        
        for(int i=0;i<vc.size();i++){
            ListNode *n = new ListNode(vc[i]);
            
            temp->next = n;
            temp = n;
        }
        
        return dummy->next;
    }
};