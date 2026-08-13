// Last updated: 8/13/2026, 10:36:23 AM
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        int sum =0;

        while(temp!=nullptr){
            if(temp->val==0){
                curr->next = new ListNode(sum);
                curr = curr->next;
                sum=0;
            }
            else{
                sum+=temp->val;
            }
            temp= temp->next;
        }
        
        return dummy->next;
    }
};