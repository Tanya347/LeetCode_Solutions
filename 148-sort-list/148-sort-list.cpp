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
    
    ListNode* mergeLists(ListNode* l1, ListNode* l2) {
        
        if(l1 == nullptr)
            return l2;
        
        if(l2 == nullptr)
            return l1;
        
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        
        if(l1 -> val < l2 -> val) {
            head = l1;
            tail = l1;
            l1 = l1 -> next;
        }
        
        else {
            head = l2;
            tail = l2;
            l2 = l2 -> next;
        }
        
        while(l1 != nullptr && l2 != nullptr) {
            
            if(l1 -> val < l2 -> val) {
                tail -> next = l1;
                tail = tail -> next;
                l1 = l1 -> next;
            }
            
            else {
                tail -> next = l2;
                tail = tail -> next;
                l2 = l2 -> next;
            }
        }
        
        if(l1 != nullptr) 
            tail -> next = l1;
        
        if(l2 != nullptr)
            tail -> next = l2;
        
        return head;
    }
    
    void partition(ListNode* head, ListNode** mid) {
        
        ListNode* slow = head;
        ListNode* fast = head -> next;
        
        while(fast != nullptr && fast -> next != nullptr) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        //splitting at the mid postion by making next of slow as null
        *mid = slow -> next;
        slow -> next = nullptr;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr)
            return head;
        
        ListNode* mid;
        
        partition(head, &mid);
        
        ListNode* list1 = sortList(head);
        ListNode* list2 = sortList(mid);
        
        return mergeLists(list1, list2);
    }
};