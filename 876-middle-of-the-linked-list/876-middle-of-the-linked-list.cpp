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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* temp;
        ListNode* first =head;
        // fun(first);
        ListNode* second =head;
        while(second!=NULL && second->next!=NULL){
            first=first->next;
            second=second->next->next;
        }
        head=first;
        return head;
    }
     void fun(ListNode* start) { if(start == NULL) return; printf("%d ", start->val); if(start->next != NULL ) fun(start->next->next); printf("%d ", start->val); }

};