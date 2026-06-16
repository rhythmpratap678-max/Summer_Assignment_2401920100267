class Solution {
public:

ListNode* reverseLinkedList(ListNode* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    ListNode* newhead = reverseLinkedList(head->next);
    ListNode* front = head->next;
    front->next = head;
    head->next = NULL;
    return newhead;
}
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newhead = reverseLinkedList(slow->next);
        ListNode* first = head;
        ListNode* second = newhead;
        while(second != NULL){
            if(first->val != second->val){
                reverseLinkedList(newhead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverseLinkedList(newhead);
        return true;
    }
};