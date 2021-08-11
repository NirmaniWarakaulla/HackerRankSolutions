def reverse(llist):
    if llist.next == None:
        return llist
    newllist = reverse(llist.next)
    llist.next.next = llist
    llist.next = None
    return newllist
