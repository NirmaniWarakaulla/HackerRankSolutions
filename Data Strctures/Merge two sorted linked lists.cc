SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    // If one of the linked lists is empty, return the other one 
    if (!head1)
        return head2;
    if (!head2)
        return head1;
    // Start with the linked list whose data is less than the other
    if (head1->data < head2->data) {
        head1->next = mergeLists(head1->next, head2);
        return head1;
    }
    head2->next = mergeLists(head1, head2->next);
    return head2;
}

//try with c++
