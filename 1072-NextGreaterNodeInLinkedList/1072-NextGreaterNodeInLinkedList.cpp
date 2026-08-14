// Last updated: 8/14/2026, 8:59:22 AM
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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> temp;

        while (head != nullptr) {
            temp.push_back(head->val);
            head = head->next;
        }

        vector<int> ans(temp.size(), 0);

        for (int i = 0; i < temp.size() - 1; i++) {
            for (int j = i + 1; j < temp.size(); j++) {
                if (temp[i] < temp[j]) {
                    ans[i] = temp[j];
                    break;
                }
            }
        }

        return ans;
    }
};