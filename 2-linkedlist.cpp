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
        ListNode* head = l1;
        int carry = 0;int count=0;
        ListNode* temp1 = l1; ListNode* temp2 = l2;
        while(temp1!=nullptr){temp1 = temp1->next;count++;}
        while(temp2!=nullptr){temp2 = temp2->next;count--;}
        if(count<0) {
            ListNode* head = l2;
            while(l2!=nullptr){
                if(l1==nullptr && carry==1){
                    if(l2->val + carry < 10) {
                        l2->val=l2->val + carry;
                        carry = 0;
                    }
                    else if(carry + l2->val >=10){
                        l2->val= (l2->val+carry)%10;
                        carry=1;
                    }
                }
                if(l1!=nullptr){
                    if(l2->val + l1->val + carry < 10) {
                        l2->val=l1->val + l2->val + carry;
                        carry = 0;
                    }
                    else if(carry + l1->val + l2->val >=10){
                        l2->val= (l1->val+l2->val+carry)%10;
                        carry=1;
                    }
                    
                    l1 = l1->next;
                } 
                if(l2->next==nullptr && l1==nullptr && carry==1){
                l2->next = new ListNode(carry);
                return head;
                }
                l2 = l2->next;
            }
            return head;
        } 
        while(l1!=nullptr){
            if(l2==nullptr && carry==1){
                if(l1->val + carry < 10) {
                    l1->val=l1->val + carry;
                    carry = 0;
                }
                else if(carry + l1->val >=10){
                    l1->val= (l1->val+carry)%10;
                    carry=1;
                }
            }
            if(l2!=nullptr){
                if(l1->val + l2->val + carry < 10) {
                    l1->val=l1->val + l2->val + carry;
                    carry = 0;
                }
                else if(carry + l1->val + l2->val >=10){
                    l1->val= (l1->val+l2->val+carry)%10;
                    carry=1;
                }
                
                l2 = l2->next;
            } 
            if(l1->next==nullptr && l2==nullptr && carry==1){
               l1->next = new ListNode(carry);
               return head;
            }
            l1 = l1->next;
        }
        return head;
    }
    
};
