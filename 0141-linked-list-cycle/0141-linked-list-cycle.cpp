/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
     bool hasCycle(ListNode *head) {
        if (!head) return false;

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;          // Move slow pointer by 1
            fast = fast->next->next;    // Move fast pointer by 2

            if (slow == fast) {         // Collision detected
                return true;
            }
        }

        return false; // Fast reached null, so no cycle
    }
};