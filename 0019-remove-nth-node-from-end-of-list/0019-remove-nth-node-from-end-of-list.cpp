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

    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* dummyNode = new ListNode(-1);

        dummyNode->next = head;

        ListNode* fast = dummyNode;

        ListNode* slow = dummyNode;

        while (n--)
            fast = fast->next;

        if (fast == nullptr) {

            ListNode* newNode = head->next;

            delete head;

            delete dummyNode;

            return newNode;
        }

        while (fast->next != nullptr) {

            fast = fast->next;

            slow = slow->next;
        }

        ListNode* delNode = slow->next;

        slow->next = slow->next->next;

        delete delNode;

        ListNode* newHead = dummyNode->next;

        delete dummyNode;

        return newHead;
    }
};