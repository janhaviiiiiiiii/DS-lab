#include<iostream>
using namespace std;

struct Node{
int data;
Node*next;
};

class Stack{
Node*top;

public:

Stack(){
top=NULL;
}

void push(int value){
Node*newNode=new Node();

newNode->data=value;
newNode->next=top;
top=newNode;
}

void pop(){
if(top==NULL){
cout<<"Stack Underflow";
return;
}

Node*temp=top;
top=top->next;
delete temp;
}

void display(){
Node*temp=top;

while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
}
};

int main(){
Stack s;

s.push(10);
s.push(20);
s.push(30);

s.pop();

cout<<"Stack Elements: ";
s.display();

return 0;
}
