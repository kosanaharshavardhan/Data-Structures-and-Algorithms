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
        int length(ListNode* node){
            int cnt=0;
            ListNode* p=node;
            while(p!=NULL){
                p=p->next;
                cnt++;
            }
            return cnt;
        }
        ListNode* middleNode(ListNode* head) {
            int size=length(head);
            int index=size/2;
            int i=0;
            ListNode* curr=head;
            while(i!=index){
                i++;
                curr=curr->next;
            }
            return curr;
        }
    };