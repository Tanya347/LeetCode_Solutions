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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* temp = head;
        int length = 0;
        
        while(temp != nullptr) {
            length++;
            temp = temp -> next;
        }
        
        if(length == 1)
            return head;
        
        int m = length - k + 1, i = 1;
        
        temp = head;
        ListNode* node1 = nullptr;
        ListNode* node2 = nullptr;
        
        while(i <= m || i <= k) {
            
            if(i == k)
                node1 = temp;
            if(i == m)
                node2 = temp;
            
            i++;
            temp = temp -> next;
        }
        
        int t = node1 -> val;
        node1 -> val = node2 -> val;
        node2 -> val = t;
        return head;
    }
};