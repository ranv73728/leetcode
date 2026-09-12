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
    ListNode* reverseList(ListNode* head) {
        ListNode*temp1=head;
        ListNode*temp2=head;
        vector<int> ans;
        while(temp1!=NULL){
            ans.push_back(temp1->val);
            temp1=temp1->next;
        }
        int n=ans.size();
        for(int i=n-1;i>=0;i--){
            temp2->val=ans[i];
            temp2=temp2->next;
        }
        return head;
        
        
    }
};