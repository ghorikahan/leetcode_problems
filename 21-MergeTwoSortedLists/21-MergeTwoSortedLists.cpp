// Last updated: 8/13/2026, 10:38:58 AM
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode();
        ListNode* tail = temp;

        while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }
            else
            {
                tail->next = list2;
                list2 = list2->next;
            }

            tail = tail->next;
        }

        while(list1 != nullptr){
            tail->next = list1;
            list1 = list1->next;
            tail = tail->next;
        }

        while(list2 != nullptr){
            tail->next = list2;
            list2 = list2->next;
            tail = tail->next;
        }

        ListNode* newHead = temp->next;
        delete temp;
        return newHead;
    }
};