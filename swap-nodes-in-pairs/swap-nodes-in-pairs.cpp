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
        if(!head || !head->next){
            return head;
        }
        int cnt=0;
        ListNode*cur=head,*prev=NULL,*next=NULL;
        while(cur && cnt<2){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            cnt++;
        }
        head->next=swapPairs(next);
        return prev;
    }
};