struct ListNode {
    int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    
    ListNode* reverse(ListNode* ref){
        ListNode* prev=NULL;
        ListNode* curr=ref;
        ListNode* nxt;
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev_slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            prev_slow=slow;
            slow=slow->next;
            
        }
        if(fast!=NULL){
            slow=slow->next;
        }
        ListNode* midNode = slow;
        prev_slow->next=NULL;
        
        midNode=reverse(midNode);
        
        bool res = true;
        
        while(midNode!=NULL){
            if((midNode->val)!=(head->val)){
                res=false;
                return res;
            }
            head=head->next;
            midNode=midNode->next;
        }
        if(head==NULL && midNode==NULL){
            return true;
        }
        return res; 
    }
};