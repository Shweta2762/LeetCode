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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       /* ListNode* temp1=l1;
        ListNode* temp2=l2;
        vector<int> ree1;
        while(temp1!=NULL)
        {
            ree1.push_back(temp1->val);
            temp1=temp1->next;
        }
        vector<int> ree2;
        while(temp2!=NULL)
        {
            ree2.push_back(temp2->val);
            temp2=temp2->next;
        }
        int number1=0;
        int j=1;
        for(int i=ree1.size()-1;i<=0;i--)
        {
            number1=number1+(ree1[i]*j);
            j=j*10;
        }
        int number2=0;
        j=1;
        for(int i=ree2.size()-1;i<=0;i--)
        {
            number2=number2+(ree2[i]*j);
            j=j*10;
        }
        int number3=number1+number2;
        */
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=0)
        {
            int sum=0;
            if(l1!=NULL)
            {
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum=sum+l2->val;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            ListNode *node=new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
            
        }
        return dummy->next;
    }
};