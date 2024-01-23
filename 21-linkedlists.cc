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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* h1 = list1;
        ListNode* h2 = list2;
        ListNode *ret = new ListNode();; 
        ListNode *rethead = ret; 
        while(h2!=nullptr && h1!=nullptr){
            if(h1->val > h2->val){
                ret->next = new ListNode(h2->val);
                ret = ret->next;
                h2 = h2->next;
            }
            else {
                ret->next = new ListNode(h1->val);
                ret = ret->next;
                h1 = h1->next;
            }
        }
        while(h2!=nullptr){
            ret->next = new ListNode(h2->val);
            ret = ret->next;
            h2 = h2->next;
        }
        while(h1!=nullptr){
            ret->next = new ListNode(h1->val);
            ret = ret->next;
            h1 = h1->next;
        }

        return rethead->next;
    }
};
