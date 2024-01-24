/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* p1 = head;
        Node* rethead = new Node(0);
        Node* ret = rethead;

        unordered_map<Node*,int> imap;
        vector<int> randpointers{-1};

        int i = 0;
        while(p1!=nullptr){
            if(imap.count(p1)==0){
                imap[p1] = i;
            }
            ret->next = new Node(p1->val);
            ret = ret->next;
            p1 = p1->next;
            i++;
        }

        p1 = head;
        i = 0;
        while(p1!=nullptr){
            if(p1->random!=nullptr){
            randpointers.push_back(imap[p1->random]);
            }
            else {
                randpointers.push_back(-1);
            }
            p1 = p1->next;
            i++;
        }
        p1 = rethead;
        i=0;
        Node *temp;
        while(p1!=nullptr){
            int rand = randpointers.at(i);
            temp = rethead; 

            for(int j = 0;j<rand+1; j++){
                temp = temp->next;
            }
            if(rand!=-1)
            p1->random = temp;
            
            p1 = p1->next;
            i+=1;
        }
        return rethead->next; 
    }
};
