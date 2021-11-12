#include <iostream>
using namespace std;
#define SIZE 4
int CQUEUE[SIZE];
int front=-1,rear=-1;
void cir_enqueue(int val)
{
    if((front==0&&rear==SIZE-1)||front==rear+1)
    cout<<"\n Cir_Queue is Full!";
    else
    {
        if(rear==SIZE-1&&front!=0)
        rear=-1;
        CQUEUE[++rear]=val;
        cout<<"\n Insertion Done";
        if(front==-1)
        front=0;
    }
}
void display()
{
    int i;
    i=front;
    cout<<"\nCir Queue elements are:";
    if(front<rear)
    {
    while(i<=rear)
    {
    cout<<"\t"<<CQUEUE[i];
    i++;
    }
    }
    else{
        
    }
}
void cir_dequeue()
{
    if(front==-1&&rear==-1)
    cout<<"\nCir Queue is EMpty";
    else
    {
        cout<<"\n Deleted element is:"<<CQUEUE[front];
        front++;
        if(front==SIZE)
        front=0;
        if(front-1==rear)
        front=rear=-1;
    }
}
int main() {
	
	int a=100,b=200,c=300;
	cir_enqueue(a);
	cir_enqueue(b);
	cir_enqueue(c);
	cir_enqueue(400);
	
	display();
	//cir_enqueue(500);
	cir_dequeue();
	cout<<"\n The updated CQUEUE";
	display();
	cir_enqueue(500);
	display();
	return 0;
}
