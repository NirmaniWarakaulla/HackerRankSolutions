def deleteNode(llist, position):
    if (position == 0):
        llist = llist.next
        return llist
        
    c = 1
    itr = llist
    while (itr.next != None):
        if (c == position):
            itr.next = itr.next.next
        itr = itr.next
        c +=1 
    return llist
