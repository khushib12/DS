
#include<conio.h>

#include<iostream>

using namespace std;

     

struct node{
	int data ;
	node * link ;
};  node* head;

int insert(int x)
{
	node*temp=new node();
	temp->data =x;
	temp->link=NULL;
	 if (head !=NULL)
	    temp->link=head;
	    head=temp;
	    return 0;
}
int print()
{
	node * temp=head;
	cout<<"list is";
	while(temp!=NULL)
	 {
	 	cout<<temp->data;
	 	temp=temp->link;
	 	
	 }
	 
	 cout<<endl;
	 return 0;
}


int main()
{
	int n,i,x;
	head=NULL;
	cout<<"how many no?";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the number "<<endl;
		cin>>x;
		insert(x);
		print();
	}
     return 0;
  	getch();
	
}
