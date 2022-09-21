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
    int countNodes(ListNode *head){
        int ans = 0;
        while(head!=NULL){
            head = head->next;
            ans++;
        }
        return ans;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ans = NULL, *a = NULL, *b = NULL;
        int sa = countNodes(headA), sb = countNodes(headB), d = 0;
        
        if(sa < sb){
            d = sb - sa;
            a = headB;
            b = headA;
        } else {
            d = sa - sb;
            a = headA;
            b = headB;
        }
        
        while(d--){
            a = a->next;
            if(a == NULL) return NULL;
        }
        
        while(a!=NULL and b!=NULL){
            if(a==b){ ans = a; break;}
            a = a->next;
            b = b->next;
        }
        return ans;
    }
};