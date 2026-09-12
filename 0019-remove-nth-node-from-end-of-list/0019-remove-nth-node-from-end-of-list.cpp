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
        ListNode*temp=head;//to count total nodes of ll
        ListNode*temp1=head;//to reach one node before the required node
        int count=0;
        int count1=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }

        if(n==count){//if we want to delete head
            return head->next;
        }
        while(count1<count-n-1){
            count1++;
            temp1=temp1->next;
        }
        temp1->next=temp1->next->next;
        return head;

        
        
    }
};