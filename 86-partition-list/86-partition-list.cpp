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
    ListNode* partition(ListNode* head, int x) {
        vector<int> res;
        int cnt=0;
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        ListNode* l1=head;
        while(l1!=NULL){
            if(l1->val<x){
                ListNode* node=new ListNode(l1->val);
                temp->next=node;
                temp=temp->next;
            }
            else
                res.push_back(l1->val);
            
            l1=l1->next;
        }
        
        for(auto a:res){
            ListNode* node=new ListNode(a);
                temp->next=node;
                temp=temp->next;
        }
        
        return dummy->next;
        
    }
};