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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode* check = head;
    for(int i = 0; i < k; i++) {
        if(check == NULL) {
            return head; // Agar k elements nahi hain, toh bina reverse kiye waisa ka waisa return kar do!
        }
        check = check->next;
    }
     ListNode*curr= head;
     ListNode*prev= NULL;
     ListNode*forward =NULL;
     int cnt =0;
     while(curr!=NULL && cnt<k){
        forward = curr->next;
        curr->next =prev;
        prev= curr;
        curr = forward;
        cnt++;
     }
     if(forward!=NULL){
        
        head->next=reverseKGroup(forward,k);
    }
    return prev;

     }
        
    
};