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
        
        if(head == nullptr || head -> next == nullptr)
            return head;
        
        ListNode* temp = head;
        ListNode* prev = new ListNode(0);
        head = head -> next;
        
        while(temp != nullptr && temp -> next != nullptr) {
            
            ListNode* t = temp -> next;
            temp -> next = temp -> next -> next;
            t -> next = temp;
            prev -> next = t;
            prev = temp;
            temp = temp -> next;
        }
        
        return head;
        
    }
};