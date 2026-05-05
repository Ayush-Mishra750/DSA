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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL )return head;
        ListNode*temp=head;
        ListNode*last=NULL;
        int n=0;
        while(temp!=NULL){
            n++;
            last=temp;
            temp=temp->next;
        }
        int cnt=0;
        k=k%n;
        int x=n-k;
        temp=head;
        while(temp!=NULL){
            cnt++;
            if(cnt==x){
           ListNode*front=temp->next;
           temp->next=nullptr;
           last->next=head;
           return front;
            }
            if(n==k ||k==0){
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};