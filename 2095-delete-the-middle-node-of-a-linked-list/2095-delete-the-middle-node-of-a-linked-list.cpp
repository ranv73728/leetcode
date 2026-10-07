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
    ListNode* deleteMiddle(ListNode* head) {

        if(head->next == NULL)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count%2==0){
            while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            }
        }
        else{
            while(fast->next->next != NULL && fast->next->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            }

        }
        slow->next = slow->next->next;

        return head;
    }
};