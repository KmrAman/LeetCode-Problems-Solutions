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
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=NULL;
        ListNode*next=NULL;
        ListNode*current=head;
        
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
        return head;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count=1;
        ListNode* cur=head;
        ListNode* prev=NULL;
        while(count!=left){
            prev=cur;
            cur=cur->next;
            count++;
        }
        ListNode* start=cur;
        while(count!=right){
            cur=cur->next;
            count++;
        }
        ListNode* rest=cur->next;
        cur->next=NULL;
        ListNode* newhead=reverseList(start);
        if(prev!=NULL){
            prev->next=newhead;
        }
        cur=newhead;
        while(cur->next!=NULL){
            cur=cur->next;
        }
        cur->next=rest;
        if(left==1)
            return newhead;
        return head;
    }
};