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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        ListNode* cur=head->next;
        int sum=0;
        while(cur!=NULL){
            if(cur->val==0){
                ListNode* node=new ListNode(sum);
                temp->next=node;
                temp=temp->next;
                sum=0;
            }
            else{
                sum+=cur->val;
            }
            cur=cur->next;
        }
        return dummy->next;
    }
};