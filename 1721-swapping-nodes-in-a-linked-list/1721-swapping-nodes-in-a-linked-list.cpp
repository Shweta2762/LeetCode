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
    ListNode* swapNodes(ListNode* head, int k) {
        /*ListNode* temp=head;
        int i=0;
        int count=0;
        while(temp!=NULL)
        {
            count=count+1;
            temp=temp->next;
        }
        temp=head;
        ListNode* nextptr;
        ListNode* prevptr=NULL;
        ListNode* rev=head;
        while(rev!=NULL)
        {
            nextptr=rev->next;
            rev->next=prevptr;
            prevptr=rev;
            rev=nextptr;
        }
        while(i!=k)
        {
            temp=temp->next;
            rev=rev->next;
            i=i+1;
        }
        int tempo=temp->val;
        temp->val=rev->val;
        rev->val=temp->val;
        return temp;*/
        /*ListNode* ptr=head;
        int n=k-1;
        while(n>0)
        {
            ptr=ptr->next;
            n--;
        }
          ListNode* frnt=ptr;
          ListNode* back=head;        
          while(ptr->next!=NULL){
              back=back->next;
              ptr=ptr->next;
          }
        
        swap(frnt->val,back->val);
        return head;*/
        int n=k-1;
        ListNode* front=head;
        int i=0;
        while(i!=n)
        {
            front=front->next;
            i=i+1;
        }
        ListNode* orifro=front;
        ListNode* back=head;
        while(front->next!=NULL)
        {
            back=back->next;
            front=front->next;
        }
        swap(orifro->val,back->val);
        return head;
        
    }
};