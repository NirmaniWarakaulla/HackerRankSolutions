def getNode(llist, positionFromTail):
    stk = []
    t = llist
    while t:
        stk = [t.data] + stk
        t = t.next
    return stk[positionFromTail]
