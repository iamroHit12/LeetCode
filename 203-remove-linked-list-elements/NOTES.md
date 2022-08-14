# ***--------MY APPROACH---------***
class Solution {
public:
ListNode* removeElements(ListNode* head, int val) {
ListNode* curr = head,*prev=NULL;
if(head==NULL){
return head;
}
while(curr!=NULL){
if(curr->val == val){
curr = curr->next;
}else{
break;
}
}
if(curr==NULL){
return NULL;
}else{
head = curr;
}
while(curr->next!=NULL){
if(curr->val != val){
prev = curr;
curr = curr->next;
prev->next = curr;
}else{
prev->next = curr->next;
curr = curr->next;
}
}
if(curr->val == val){
prev->next = curr->next;
}
return head;
}
};