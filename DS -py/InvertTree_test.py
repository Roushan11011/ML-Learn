class Node:
    def __init__(self,data):
        self.left=None
        self.right=None
        self.data=data

root=Node(1)
root.left=Node(2)
root.right=Node(3)

#Invert Tree
def Invert(Node):
    if not Node:
        return None
    left=Invert(Node.left)
    right=Invert(Node.right)

    Node.left,Node.right=right,left
    return Node
    

#InOrder traversal
def InOrder(Node):
    if not Node:
        return 
    print(Node.data,end="\n")
    InOrder(Node.left)
    InOrder(Node.right)
    

InOrder(root)
print("\n***Inverting***\n\n")
root=Invert(root)
InOrder(root)
print("\n***Inverting Again***\n\n")
root=Invert(root)
InOrder(root)