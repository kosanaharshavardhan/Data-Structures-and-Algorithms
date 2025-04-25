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
        void deleteNode(ListNode* node) {
            ListNode* temp2=node;
            ListNode* temp=node->next;
            temp2->val=temp->val;
            temp2->next=temp->next;
            
        }
    };