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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        //if the lists are null or there are no arrays
        if(lists.size() == 0)
            return nullptr;
        
        //creating vector to store the values of all lists
        vector<int> arr;
        
        for(ListNode* list : lists) {
            while(list != nullptr) {
                arr.push_back(list -> val);
                list = list -> next;
            }
        }
        
        //sorting the data stored in vector
        sort(arr.begin(), arr.end());
        
        //initialising a dummy head and giving head to temp
        ListNode* head = new ListNode(0); 
        ListNode* temp = head;
        
        //starting to store values in next of tempad the starting node is dummy head.
        for(int data : arr) {
            temp -> next = new ListNode(data);
            temp = temp -> next;
        }
        
        return head -> next;
    }
};