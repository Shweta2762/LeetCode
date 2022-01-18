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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode*curr =new ListNode(0);
        ListNode* currptr=curr;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val>list2->val)
            {
                currptr->next=list2;
                list2=list2->next;
            }
            else
            {
                currptr->next=list1;
                list1=list1->next;
            }
            currptr=currptr->next;
        }
        while(list1!=NULL)
        {
            currptr->next=list1;
            list1=list1->next;
            currptr=currptr->next;
        }
        while(list2!=NULL)
        {
            currptr->next=list2;
            list2=list2->next;
            currptr=currptr->next;
        }
        return curr->next;
    }
};