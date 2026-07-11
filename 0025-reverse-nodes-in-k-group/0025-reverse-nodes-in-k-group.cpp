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

  ListNode* reverse(ListNode*head,ListNode*last){
    
    ListNode*prev=head;
    while(head!=last){
        ListNode*front=head->next;
        head->next=prev;
        prev=head;
        head=front;
    }
    return prev;
  }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)return nullptr;
        ListNode*temp=head;
        for(int i=0;i<k;i++){
            if(!temp)return head;
            temp=temp->next;
        }
        ListNode*lastNode=reverse(head,temp);
        head->next=reverseKGroup(temp,k);

        return lastNode;
    }
};