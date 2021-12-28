/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        int countt=0;
        /*while(temp!=NULL)
            countt=countt+1;*/
        temp->val=temp->next->val;
        temp->next=temp->next->next;
        
        
    }
};