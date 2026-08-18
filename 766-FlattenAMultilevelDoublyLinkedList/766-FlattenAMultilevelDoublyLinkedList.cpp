// Last updated: 8/18/2026, 4:38:08 PM
class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr) return head;

        stack<Node*> st;
        Node* temp = head;

        while (temp != nullptr) {
            if (temp->child != nullptr) {
                if (temp->next != nullptr) {
                    st.push(temp->next);
                }

                temp->next = temp->child;
                temp->child->prev = temp;
                temp->child = nullptr;
            }
            else if (temp->next == nullptr && !st.empty()) {
                temp->next = st.top();
                st.top()->prev = temp;
                st.pop();
            }

            temp = temp->next;
        }

        return head;
    }
};