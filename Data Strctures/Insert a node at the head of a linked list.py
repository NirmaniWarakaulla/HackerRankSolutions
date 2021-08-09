def insertNodeAtHead(llist, data):
    # Write your code here
    x = SinglyLinkedListNode(data)
    if (llist == None):
        llist = x
    else:
        new_node = x
        new_node.next = llist
        llist = new_node
    return llist
    
    // try with python3 language.
