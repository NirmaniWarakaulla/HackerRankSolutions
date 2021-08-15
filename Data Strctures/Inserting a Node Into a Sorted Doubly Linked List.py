def sortedInsert(llist, data):
    if llist:
        node = llist
        new_node = DoublyLinkedListNode(data)

        while True:
            if node.data >= data: 
                prev_node = node.prev
                
                if prev_node:
                    prev_node.next = new_node
                    new_node.prev = prev_node
                else:
                    node.prev = new_node
                    llist = new_node

                new_node.next = node
                break

            if node.next is None:
                node.next = new_node
                new_node.prev = node
                break
            
            node = node.next

    return llist
    # Write your code here
