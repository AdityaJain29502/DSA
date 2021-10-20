//Circular linked list operations
//Insertion
#include <iostream>
using namespace std;
struct Node
{
int data;
struct Node *link;
}*FIRST=NULL,*LAST=NULL;

struct Node *create_new(int val)
{
    struct Node *new1;
    new1=(struct Node*)malloc(sizeof(struct Node));
    new1->data=val;
    return(new1);
}
void insertlast(int val)
{
struct Node *L;
L=create_new(val);
if(FIRST==NULL)
{
   L->link=L;
   FIRST=LAST=L; 
}
else
{
   L->link=FIRST;
   LAST->link=L;
   LAST=L;
}
}
int main() {
	struct Node *n1,*n2,*n3;
    n1=create_new(100);
    n2=create_new(200);
    n3=create_new(300);
    FIRST=n1;
    n1->link=n2;
    n2->link=n3;
    LAST=n3;
    n3->link=FIRST;
    struct Node *temp;
    temp=FIRST;
    cout<<"\n Elements in Link List:FIRST";
    while(temp!=LAST)
    {
        cout<<"-->"<<temp->data;
        temp=temp->link;
    }
    cout<<"-->"<<temp->data;
    
    struct Node *newnode;
    newnode=create_new(50);
    if(FIRST==NULL)
    {
        newnode->link=newnode;
        FIRST=LAST=newnode;
    }
    else
    {
        newnode->link=FIRST;
        LAST->link=newnode;
        FIRST=newnode;
    }
    cout<<"\n After insertion at FIRST:\n";
    struct Node *temp1;
    temp1=FIRST;
    cout<<"\n Elements in Link List:FIRST";
    while(temp1!=LAST)
    {
        cout<<"-->"<<temp1->data;
        temp1=temp1->link;
    }
    cout<<"-->"<<temp1->data;
    insertlast(350);
    cout<<"\nAfter insertion at last\n";
    struct Node *temp2;
    temp2=FIRST;
    cout<<"\n Elements in Link List:FIRST";
    while(temp2!=LAST)
    {
        cout<<"-->"<<temp2->data;
        temp2=temp2->link;
    }
    cout<<"-->"<<temp2->data;
	return 0;
}
