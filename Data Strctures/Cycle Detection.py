def has_cycle(head):
    l =[]
    while head:
        l.append(head)
        if (head.next in l):
            
           return 1
        head = head.next
    return 0
    
    //try with python3 language
