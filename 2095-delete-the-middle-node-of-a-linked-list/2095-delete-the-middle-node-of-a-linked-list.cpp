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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
            return head->next;
        ListNode* temp;
        ListNode* first =head;
        ListNode* second =head;
        while(second!=NULL && second->next!=NULL){
            temp=first;
            first=first->next;
            second=second->next->next;
        }
        // cout<<temp->val<<" "<<first->val;
        temp->next=first->next;
        return head;
        
    }
};