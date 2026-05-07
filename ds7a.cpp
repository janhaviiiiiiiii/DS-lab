#include<iostream>
using namespace std;

struct node
{
int data;
struct node*next;
};

int main()
{
struct node*head=NULL,*newnode,*temp,*prev;
int choice=1,item,ch;

while(choice)
{
cout<<"\n1.Insert at Beginning";
cout<<"\n2.Insert at End";
cout<<"\n3.Delete from Beginning";
cout<<"\n4.Delete from End";
cout<<"\n5.Display";
cout<<"\nEnter your choice:";
cin>>ch;

switch(ch)
{
case 1:
{
newnode=new node;
cout<<"Enter data:";
cin>>newnode->data;
newnode->next=head;
head=newnode;
break;
}

case 2:
{
newnode=new node;
cout<<"Enter data:";
cin>>newnode->data;
newnode->next=NULL;

if(head==NULL)
{
head=newnode;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
}
break;
}

case 3:
{
if(head==NULL)
{
cout<<"List is empty";
}
else
{
temp=head;
head=head->next;
delete temp;
}
break;
}

case 4:
{
if(head==NULL)
{
cout<<"List is empty";
}
else if(head->next==NULL)
{
delete head;
head=NULL;
}
else
{
temp=head;
while(temp->next!=NULL)
{
prev=temp;
temp=temp->next;
}
prev->next=NULL;
delete temp;
}
break;
}

case 5:
{
if(head==NULL)
{
cout<<"List is empty";
}
else
{
temp=head;
cout<<"Linked List:";
while(temp!=NULL)
{
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL";
}
break;
}

default:
{
cout<<"Invalid choice";
}
}

cout<<"\nContinue?(1/0):";
cin>>choice;
}

return 0;
}
