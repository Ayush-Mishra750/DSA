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
    ListNode* swapPairs(ListNode* head) {
        // if(head->next==NULL)return head;
        ListNode* dummy=new ListNode(-1);
        ListNode*prev=dummy;
        ListNode*temp=head;
        while(temp && temp->next){
           ListNode* npn=temp->next->next;
           ListNode* second=temp->next;

           second->next=temp;
           temp->next=npn;
           prev->next=second;
           prev=temp;
           temp=npn;
        }
          prev->next = temp;
        return dummy->next;
    }
};