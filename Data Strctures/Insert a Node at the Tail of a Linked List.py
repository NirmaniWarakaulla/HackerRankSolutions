def insertNodeAtTail(head, data):
    if head == None:
        head = SinglyLinkedListNode(data)
        head.data = data
    else:
        new_node = SinglyLinkedListNode(data)
        new_node.data = data
        curr = head
        while curr.next != None:
            curr = curr.next
        curr.next = new_node
    return head
    
    //try with python3 language.
