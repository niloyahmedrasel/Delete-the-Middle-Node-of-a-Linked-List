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
        vector<int>arr;
        ListNode *temp = head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        if (!head || !head->next) {
            return nullptr;
        }

        int mid = arr.size()/2;
        
        ListNode *curr = head;
        ListNode *prev = NULL;

        while(mid--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;

        return head;

    }
};
