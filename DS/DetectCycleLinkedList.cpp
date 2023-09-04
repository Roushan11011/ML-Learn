#include<bits/stdc++.h>
using namespace std;
struct Node{
Node *next;
int data;
Node(int x){
    data=x;
    next=NULL;
}
};

Node* LinkedListValues(){
//Creating a linked list with a cycle
Node *head=new Node(1);
Node *t=head;
for(int i=5;i<10;i++){
Node *tmp=new Node(i);
t->next=tmp;
t=t->next;
}
//connecting tail to head
t->next=head;
return head;
}

bool CheckCycle(Node *head){
Node *slow=head;
Node *fast=head;
while(slow && fast){
    if(fast->next==slow) return true;
    slow=slow->next;
    fast=fast->next->next;
}
return false;
}

int main(){
Node *root=LinkedListValues();
if(CheckCycle(root)==true) cout<<"Cycle dectected !";
else cout<<"No Cycle";
return 0;
}