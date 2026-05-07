#include<iostream>
using namespace std;

struct node
{
int data;
struct node*prev;
struct node*next;
};

int main()
{
struct node*head=NULL,*newnode,*temp,*last;
int choice=1,ch;

while(choice)
{
cout<<"\n1.Insert Beginning";
cout<<"\n2.Insert End";
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
newnode->prev=NULL;
newnode->next=head;

if(head!=NULL)
{
head->prev=newnode;
}
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
newnode->prev=NULL;
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
newnode->prev=temp;
}
break;
}

case 3:
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
head=head->next;
head->prev=NULL;
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
temp=temp->next;
}
temp->prev->next=NULL;
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
cout<<"List:";
while(temp!=NULL)
{
cout<<temp->data<<"<->";
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
