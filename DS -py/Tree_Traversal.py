class Node:
    def __init__(self,data):
        self.left=None
        self.right=None
        self.data=data

# Insert Node

root=Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
root.left.right=Node(5)
root.right.left=Node(6)
root.right.right=Node(7)

#Preorder traversal
def preorder(Node):
    if Node==None:
        return
    print(Node.data,end="\t")
    preorder(Node.left)
    preorder(Node.right)

#InOrder traversal
def InOrder(Node):
    if Node==None:
        return
    InOrder(Node.left)
    print(Node.data,end="\t")
    InOrder(Node.right)

#PostOrder traversal
def postOrder(Node):
    if Node==None:
        return
    postOrder(Node.left)
    postOrder(Node.right)
    print(Node.data,end="\t")


preorder(root)
InOrder(root)
postOrder(root)

    