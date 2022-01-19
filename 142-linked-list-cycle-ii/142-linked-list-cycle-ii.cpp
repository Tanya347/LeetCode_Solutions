/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL)
            return NULL;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast != NULL && fast -> next != NULL) {
            
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow == fast) {
                slow = head;
                while(slow != fast) {
                    slow = slow -> next;
                    fast = fast -> next;
                }
                return slow;
            }
        }
        return NULL;
        
        /*
        unordered_map<ListNode*, bool> mp;
        ListNode *temp = head;
        while(temp != NULL) {
            if(mp[temp -> next])
                return temp -> next;
            mp[temp] = true;
            temp = temp -> next;
        }
        return NULL;*/
    }
};