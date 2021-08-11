def insertNodeAtPosition(head, data, position):
    new_node = SinglyLinkedListNode(data)
    
    if not head:
        return new_node
    
    if position == 0:
        new_node.next = head
        return new_node
    
    curr_node = head
    counter = 0
    while counter != position-1:
        curr_node = curr_node.next
        next_node = curr_node.next
        counter += 1
    
    curr_node.next = new_node
    new_node.next = next_node
    return head
