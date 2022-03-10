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
        
        int carry = 0, sum = 0;
        
        ListNode* head = nullptr;
        ListNode* temp = nullptr;
        
        while(l1 != nullptr || l2 != nullptr) {
            
            if(l1 != nullptr && l2 != nullptr)
                sum = l1 -> val + l2 -> val + carry;
            
            if(l1 == nullptr)
                sum = l2 -> val + carry;
            
            if(l2 == nullptr)
                sum = l1 -> val + carry;
            
            carry = (sum > 9)? 1 : 0;
            sum = sum % 10;
            
            ListNode *newNode = new ListNode(sum);
            
            if(head == nullptr) {
                head = newNode;
                temp = newNode;
            }
            
            else {
                temp -> next = newNode;
                temp = newNode;
            }
            
            if(l1 != nullptr)
            l1 = l1 -> next;
            
            if(l2 != nullptr)
            l2 = l2 -> next;
            
        }
        
        if(carry) {
            ListNode *newNode = new ListNode(carry);
            temp -> next = newNode;
        }
        return head;
    }
};