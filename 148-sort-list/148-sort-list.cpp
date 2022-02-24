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
    ListNode *mergeTwoSortedLinkedLists(ListNode *head1, ListNode *head2) {
    //Write your code here
        ListNode *Finalhead = NULL;
        ListNode *tail = NULL;
        ListNode *temp1 = head1;
        ListNode *temp2 = head2;
    
        if(temp1 == NULL && temp2 == NULL){
            return NULL;
        }
        
        if(temp1!=NULL and temp2==NULL)
            return temp1;
        
        if(temp1==NULL and temp2!=NULL)
            return temp2;
    
        while(temp1 != NULL and temp2 != NULL) 
        {   
        
            if(Finalhead == NULL){
                if(temp1 -> val > temp2 -> val){
           	 	    Finalhead = temp2;
            	    tail = temp2;
            	    temp2 = temp2 -> next;
        	    }
       		    else{
            	    Finalhead = temp1;
            	    tail = temp1;
            	    temp1 = temp1 -> next;
        	    }
            }
            else{
        	    if(temp1 -> val > temp2 -> val){
            	    tail->next = temp2;
                    tail = temp2;
            	    temp2 = temp2 -> next;
        	    }
        	    else{
            	    tail->next = temp1;
                    tail = temp1;
            	    temp1 = temp1 -> next;
        	    }
            }
        }
    
        if(temp1 != NULL)
            tail->next = temp1;
        else
            tail->next = temp2;
    
        return Finalhead;
    }
    
    void Split(ListNode *head, ListNode **front, ListNode **back){
    
        ListNode *slow = head;
        ListNode *fast = head -> next;
        
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
    
        *front = head;
        *back = slow -> next;
        slow -> next = NULL;
    
    }
    
    ListNode* sortList(ListNode* head) {
        
        if(head == NULL || head -> next == NULL)
        return head;
        
        ListNode *front;
        ListNode *back;
    
        Split(head, &front, &back);
    
        ListNode *L1 = sortList(front);
        ListNode *L2 = sortList(back);
    
        head = mergeTwoSortedLinkedLists(L1,L2);
    
        return head;
    }
};