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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL)
            return head;
        
        ListNode* prev = NULL;
        ListNode* temp = head;
        
        while(temp != NULL) {
            
            int count = 1;
            while(temp -> next != NULL && temp -> val == temp -> next -> val) {
                temp = temp -> next;
                count++;
            }
            
            if(count > 1) {
                
                if(prev == NULL) {
                    head = temp -> next;
                }
                
                else {
                    prev -> next = temp -> next;
                }
                
                ListNode* a = temp;
                temp = temp -> next;
                a -> next = NULL;
            }
            
            else {
                
                prev = temp;
                temp = temp -> next;
            }
            
            
        }
        
        return head;
    }
};