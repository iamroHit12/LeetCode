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
#include<math.h>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int count=0;
        while(temp!=NULL){
            count+=1;
            temp=temp->next;
        }
        int sum = 0;
        for(int i = count-1;i>=0;i--){
            sum = head->val*pow(2,i)+sum;
            head = head->next;
        }
        
        return sum;
    }
};