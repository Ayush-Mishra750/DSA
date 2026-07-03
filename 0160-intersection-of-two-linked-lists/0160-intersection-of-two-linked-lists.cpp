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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL ||headB==NULL)return NULL;
        ListNode* l=headA;
        ListNode*r=headB;
        while(l!=r){
            l=l->next;
            r=r->next;
            if(l==r)return l;
            if(l==NULL)
            l=headB;
            if(r==NULL)r=headA;
        }
        return l;

    }
};