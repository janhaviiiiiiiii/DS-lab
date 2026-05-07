#include<iostream>
using namespace std;

struct Node{
int data;
Node*next;
};

class Queue{
Node*front;
Node*rear;

public:

Queue(){
front=rear=NULL;
}

void enqueue(int value){
Node*newNode=new Node();

newNode->data=value;
newNode->next=NULL;

if(rear==NULL){
front=rear=newNode;
return;
}

rear->next=newNode;
rear=newNode;
}

void dequeue(){
if(front==NULL){
cout<<"Queue Underflow";
return;
}

Node*temp=front;
front=front->next;

if(front==NULL)
rear=NULL;

delete temp;
}

void display(){
Node*temp=front;

while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
}
};

int main(){
Queue q;

q.enqueue(10);
q.enqueue(20);
q.enqueue(30);

q.dequeue();

cout<<"Queue Elements: ";
q.display();

return 0;
}
