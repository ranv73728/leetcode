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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> arr;

        while (temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        sort(arr.begin(), arr.end());

        if (arr.empty()) {
            return NULL;
        }

        ListNode* head1 = new ListNode(arr[0]);
        ListNode* temp1 = head1;

        for (int i = 1; i < arr.size(); i++) {
            temp1->next = new ListNode(arr[i]);
            temp1 = temp1->next;
        }

        return head1;
    }
};
