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
  ListNode* reverse_node(ListNode*head){
    ListNode*prev=NULL;
    ListNode*temp=head;
   
    while(temp){
          ListNode* front = temp->next; 
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
  }
    void reorderList(ListNode* head) {
        //step 1: find the middle 
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*middle=slow->next;
        ListNode*node1=head;
        slow->next=NULL;
      ListNode*node2=  reverse_node(middle);
      while(node1!=NULL&& node2!=NULL){ 
        ListNode*front1=node1->next;
        node1->next=node2;
        ListNode*front2=node2->next;
        node2->next=front1;
        node1=front1;
        node2=front2;
      }

    }
};