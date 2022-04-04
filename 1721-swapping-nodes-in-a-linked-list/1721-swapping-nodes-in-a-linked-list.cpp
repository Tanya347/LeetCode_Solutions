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
        ListNode* node1 = head;
        ListNode* node2 = head;
        int count = 1;
        
        while(temp != nullptr) {
            if(count < k)
                node1 = node1 -> next;
            if(count > k)
                node2 = node2 -> next;
            count++;
            temp = temp -> next;
        }
        
        int t = node1 -> val;
        node1 -> val = node2 -> val;
        node2 -> val = t;
        return head;
    }
};