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
ListNode* swapPairs(ListNode* head) {
    
    if(head == NULL || head->next == NULL)
        return head;
    
    ListNode* a = head;
    ListNode* b = head->next;
    
    a->next  = b->next;
    b->next = a;
    
    head = b;
    ListNode* temp = head;
    temp = a->next;
    ListNode* prev = a;
    while(temp != NULL && temp->next != NULL) {

        a = temp;
        b = temp->next;
        a->next = b->next;
        b->next = a;
        prev->next = b;
        prev = a;
        temp = a->next;
    }
    return head;
}
};