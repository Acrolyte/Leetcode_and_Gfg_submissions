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
   int getDecimalValue(ListNode* head) {
        ListNode* a = head;
       int ans = 0;
        while(a){
            ans = ans << 1;
            if(a->val == 1){
                ans += 1;
            }
            a = a->next;
        }
        return ans;
    }
};