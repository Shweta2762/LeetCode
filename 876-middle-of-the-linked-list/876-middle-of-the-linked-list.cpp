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
        /*ListNode *ree=head;
        ListNode *midd;
        int count=0;
        while(ree!=NULL)
        {
            count=count+1;
            ree=ree->next;
        }
        int midi;
        if(count%2!=0)
            midi=abs(count/2);
        if(count%2==0)
            midi=(count/2);
        int keepcount=0;
        while(keepcount!=midi)
        {
            head=head->next;
            keepcount=keepcount+1;
        }
        midd=head;
        return midd;*/
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count=count+1;
            temp=temp->next;
        }
        if(count%2!=0)
        {
            int midi=ceil(count/2);
            int i=0;
            temp=head;
            while(i!=midi)
            {
                i=i+1;
                temp=temp->next;
            }
            return temp;
        }
        int midi=count/2;
        int i=0;
        temp=head;
        while(i!=midi)
        {
            i=i+1;
            temp=temp->next;
        }
        return temp;
        
    }
};