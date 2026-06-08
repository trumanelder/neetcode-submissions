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
        if(head == nullptr) return nullptr;
        ListNode* current = head;
        ListNode* ahead = current -> next;
        ListNode* back = current;
        current -> next = nullptr;
        current = ahead;
        while(current != nullptr){
            ahead = current -> next;
            current -> next = back;
            back = current;
            current = ahead;
        }
        return back;
    }
};
