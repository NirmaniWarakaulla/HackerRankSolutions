def reversePrint(llist):
    if llist is None:
        return None
    else:
        stack = []
        while llist:
            stack.append(llist.data)
            llist = llist.next
        while stack:
            print(stack.pop())
