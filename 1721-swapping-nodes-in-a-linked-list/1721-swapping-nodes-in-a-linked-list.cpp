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
        vector<int> vc;
        
        while(head!=NULL){
            vc.push_back(head->val);
            
            head=head->next;
        }
        
        int i=k-1;
        int j = vc.size()-k;
        
        int temp = vc[i];
        vc[i] = vc[j];
        vc[j] = temp;
        
        
        ListNode *dummy=new ListNode(-1);
        ListNode *ll = dummy;
        
        for(int a=0;a<vc.size();a++){
            ListNode *n=new ListNode(vc[a]);
            ll->next = n;
            ll=n;
        }
        
        return dummy->next;
    }
};