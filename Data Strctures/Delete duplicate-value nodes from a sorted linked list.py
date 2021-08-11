def removeDuplicates(llist):
    if llist:
        prev = cur = llist
        while cur:
            if prev.data != cur.data:
                prev = cur
                cur = cur.next
            else:
                prev.next = cur.next
                cur = prev.next
    
    return llist
