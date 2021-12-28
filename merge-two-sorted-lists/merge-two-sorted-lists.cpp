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
        /*vector<int>ree;
        //ListNode* list1ree=list1;
        while(list1!=NULL)
            ree.push_back(list1->val);
        //ListNode *list2ree=list2;
        while(list2!=NULL)
            ree.push_back(list2->val);
        sort(ree.begin(),ree.end());
        ListNode* mergedl;
        for(int i=0;i<ree.size();i++)
        {
            mergedl->val=ree[i];
            mergedl=mergedl->next;
        }
        mergedl->next=NULL;
        return mergedl;*/
            //ListNode *currptr= new ListNode(0);    // New node created
            //ListNode *curr= currptr;          //  defining pointer on the new node.

        //curr=NULL;
        ListNode *curr= new ListNode(0);    // New node created
	
    ListNode *currptr= curr;          //  defining pointer on the new node.
	
	// Case1: where both linkedlist is non-empty
    while(list1 !=NULL and list2 !=NULL){
        if (list1->val <= list2->val){
            currptr->next=list1;
            list1=list1->next;
        }
        else{
            currptr->next=list2;
            list2=list2->next;
        }   
        currptr=currptr->next;
    }
	
	// Case2: Where list 2 is now empty but list1 has element so join list1 elements with curr node list.
    while(list1 !=NULL){
        currptr->next=list1;
        list1=list1->next;
        currptr=currptr->next;
    }
	
	// Case2: Where list1  is now empty but list2 has element so join list2 elements with curr node list.
    while(list2 !=NULL){
        currptr->next=list2;
        list2=list2->next;
        currptr=currptr->next;
    }
	
	// Returning new node next pointer as the pointer created on curr node has now reached at last of the new formed sorted combined list.
    return curr->next;
        /*while(list1!=NULL && list2!=NULL)
        {
            if(list1->val>list2->val)
            {
                curr->next=list1;
                list1=list1->next;
            }
            else
            {
                curr->next=list2;
                list2=list2->next;
            }
            curr=curr->next;
        }
        while(list1!=NULL)
        {
            curr->next=list1;
            list1=list1->next;
            curr=curr->next;
        }
        while(list2!=NULL)
        {
            curr->next=list2;
            list2=list2->next;
            curr=curr->next;
        }
        return currptr->next;*/
            
    }
};