def getNthFromLast(head,n):
    curr = head
    cnt = 0
    for i in range(n):
        curr=curr.next
        cnt+=1
        if curr==None:
            break
    if cnt<n:
        return -1
    prev = head
    while curr!=None:
        curr=curr.next
        prev=prev.next
    return prev.data
