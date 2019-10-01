#include<iostream>
#include<conio.h>

using namespace std;


struct node{
	int data;
	node * next;
};

node* head;



int insert(int x,int n)
{
	cout<<"enter data";
	cin>>x;
	cout<<"enter position";
	cin>>n;
	
	node*temp1=new node();
	temp1->data=x;
	temp1->next=NULL;
	
	if(n==1)
	 
	 	temp1->next=head;
	 	
   head=temp1;
   
   node*temp2=head;
     
       for (int i=0;i<=n-2;i++)
           {
           	temp2 = temp2->next;
           	
		   }
       
       temp1->next=temp2->next;
       
       temp2->next=temp1;
       
       return 0;
}

int print()
{
	node*temp=head;
	
	while(temp!=NULL)	
	{
		cout<<temp->data;
		temp=temp->next;
	}
	
	cout<<endl;
	
	return 0;
	
}




int main()
{
	int x,n;
	head=NULL;

    int insert(int x,int n);
    int print();
	
	return 0;
     getch();	      	
	
	
}
