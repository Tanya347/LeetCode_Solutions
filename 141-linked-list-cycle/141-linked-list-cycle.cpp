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
    bool hasCycle(ListNode *head) {
        
        if(head == NULL)
            return false;
        
        unordered_map<ListNode*, int> visited;
        ListNode *temp = head;
        
        while(temp != NULL) {
            visited[temp]++;
            if(visited[temp] >= 2)
                return true;
            temp = temp -> next;
        }
        
        return false;
    }
};