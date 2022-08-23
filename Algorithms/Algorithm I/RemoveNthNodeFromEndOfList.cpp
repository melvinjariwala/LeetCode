#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        ListNode* temp1=head;
        ListNode* temp2=head;
        while(n!=0 && temp1!=NULL){
            temp1=temp1->next;
            n--;
        }
        if(temp1==NULL){
            head=head->next;
            return head;
        }
        while(temp1->next!=NULL){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp2->next=temp2->next->next;
        return head;
    }
};