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
    ListNode* insert(ListNode* head, ListNode* node) {
        if (node == nullptr) return head;

        if (head == nullptr) {
            node->next = nullptr;
            return node;
        }

        if (head->val >= node->val) {
            node->next = head;
            return node;
        }

        ListNode* prev = nullptr;
        ListNode* temp = head;

        while (temp != nullptr && temp->val < node->val) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = node;
        node->next = temp;

        return head;
    }

    ListNode* insertionSortList(ListNode* head) {
        ListNode* list = nullptr;
        ListNode* temp = head;
        
        while (temp != nullptr) {
            ListNode* next = temp->next;
            list = insert(list, temp);
            temp = next;
        }

        return list;
    }
};
