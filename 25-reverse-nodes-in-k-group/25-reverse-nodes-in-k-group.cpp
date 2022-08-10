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
    int lengthOfLinkedList(ListNode* node){
        int length=0;
        ListNode* temp=node;
        while(temp){
            length++;
            temp=temp->next;
        }
        return length;
    }
    ListNode* reverseGroup(ListNode* head,int k,int length){
        if(length<k)
            return head;
        ListNode*next=NULL,*prev=NULL,*cur=head;
        int count=0;
        while(count<k && cur){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            count++;
        }
        if(head!=NULL){
            head->next=reverseGroup(next,k,length-k);
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int length=lengthOfLinkedList(head);
        return reverseGroup(head,k,length);
    }
};