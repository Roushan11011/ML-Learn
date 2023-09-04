class Node:
    def __init__(self,data):
        self.next=None;
        self.data=data

def LinkedListValues():
    root=Node(1)
    t=root
    for i in range(5,10):
        tmp=Node(i)
        t.next=tmp
        t=t.next
    #Connecting tail to head
    t.next=root
    return root

def CheckCycle(Node):
    slow=fast=Node
    while slow!=None and fast!=None:
        if fast.next==slow:
            return True
        slow=slow.next
        fast=fast.next.next
    return False

root=LinkedListValues()
if CheckCycle(root)==True:
    print("Cycle Detected !")
else:
    print("No Cycle")

        