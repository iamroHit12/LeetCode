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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        vector<int> res1,res2;
        
        while(temp!=NULL){
            if(temp->val < x){
                res1.push_back(temp->val);
            }else{
                res2.push_back(temp->val);
            }
            
            temp=temp->next;
        }
        
        ListNode *result = new ListNode(-1);
        ListNode *curr = result;
        
        for(int i=0;i<res1.size();i++){
            ListNode *n = new ListNode(res1[i]);
            curr->next = n;
            curr = n;
        }
        
        for(int i=0;i<res2.size();i++){
            ListNode *n = new ListNode(res2[i]);
            curr->next = n;
            curr = n;
        }
        
        return result->next;
    }
};