#include<iostream>
#include<conio.h>

using namespace std;

struct node
{
    int data;
    node* next;
}
*start, *p, *q, *end;

node* create(int);
int inserte(node*);
int insertb(node*);
int traversal(node*);

int main()
{
    char ch; int n,info;

    while(ch=='y'||ch=='Y')
    {
	cout<<"enter data- "<<endl;
	cin>>info;
	p= create(info);

	cout<<"for end press 1; for beg press 2"<<endl;
	cin>>n;

	if(n==1)
	inserte(p);

	else if(n==2)
	insertb(p);

	else
	cout<<"please enter a valid choice"<<endl;

	cout<<"press y to enter more data"<<endl;
	cin>>ch;
    }

    q=start;
    traversal(q);
    
    return 0;

getch();
}

node* create(int inf)
{
    node* t;
    t= new node;

    t->data=inf;
    t->next=NULL;
    return t;
}

int inserte(node* t)
{
    if(start==NULL)
    start=end=t;

    else
    {
	end->next=t;
	end=t;
    }
    return 0;
}


int insertb(node* t)
{
    if(start==NULL)
    start=end=t;

    else
    {
	t->next=start;
	start=t;
    }
    return 0;
}

int traversal(node* t)
{
    while(t!=NULL)
    {
	cout<<t->data<<" ";
	t=t->next;
    }
    return 0;
}
