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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        temp=head;
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            ans+=(temp->val*pow(2,i));
            temp=temp->next;
        }
        return ans;
    }
};
