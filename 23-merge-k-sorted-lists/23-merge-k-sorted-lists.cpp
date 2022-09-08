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
    ListNode* merge(ListNode* a, ListNode* b){
        if(a==NULL)
            return b;
        if(b==NULL)
            return a;
        ListNode* res=new ListNode(0);
        ListNode* temp=res;
        while(a && b){
            if(a->val<=b->val){
                temp->next=a;
                a=a->next;
                temp=temp->next;
            }
            else{
                temp->next=b;
                b=b->next;
                temp=temp->next;
            }
        }
        if(a)
            temp->next=a;
        if(b)
            temp->next=b;
        
        return res->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        ListNode* merged=NULL;
        for(auto &list:lists){
            merged=merge(merged,list);
        }
        
        return merged;
        
    }
};