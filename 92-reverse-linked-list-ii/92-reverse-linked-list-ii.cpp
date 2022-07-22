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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> res;
        
        while(head!=NULL){
            res.push_back(head->val);
            head=head->next;
        }
        
        int i=left-1;
        int j=right-1;
        
        while(i<j){
            int temp = res[i];
            res[i] = res[j];
            res[j]=temp;
            
            i++;
            j--;
        }
        
        ListNode *result = new ListNode(-1);
        ListNode *curr = result;
        
        for(int k=0;k<res.size();k++){
            ListNode *n = new ListNode(res[k]);
            curr->next = n;
            curr = n;
        }
        
        return result->next;
    }
};