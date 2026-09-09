class Solution {
  public:
    Node* flatten(Node* head) {

        // Min heap — chhota element upar rahega
        priority_queue<
            pair<int, Node*>,
            vector<pair<int, Node*>>,
            greater<pair<int, Node*>>
        > pq;

        // Sabhi columns ke pehle node
        // heap mein daalo
        Node* temp = head;
        while(temp != NULL){
            pq.push({temp->data, temp});
            temp = temp->next;
        }

        // Dummy node — result banana
        Node* dummy = new Node(0);
        Node* res = dummy;

        while(!pq.empty()){
            // Sabse chhota nikalo
            auto [val, node] = pq.top();
            pq.pop();

            // Result mein add karo
            res->bottom = node;
            res = res->bottom;

            // Agar is node ke neeche
            // aur nodes hain → heap mein daalo
            if(node->bottom != NULL){
                pq.push({node->bottom->data,
                         node->bottom});
            }
        }

        // next pointers clean karo
        res->bottom = NULL;

        return dummy->bottom;
    }
};