#include<iostream>
using namespace std;

struct node 
{
	int item;
	struct node*next;
};

//function to add lastnode

void insertatlast(int data,struct node **s)
{
	struct node*n;
	n=(struct node*)malloc(sizeof(struct node));
	n->item=data;
	n->next=NULL;
	if(*s==NULL)
	{
		*s=n;
	}
	
	else
	{
		struct node*t;
		t=*s;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=n;
	}
}

//function to view node values

void view(struct node*s)
{int i=1;
	while(s)
	{
	    
		cout<<"value at node "<<i<<" is "<<s->item<<endl;
		s=s->next;
		i=i+1;
	}
}

//function to delete first node

void deletefirst(struct node**s)
{
	struct node *t;
	t=*s;
	*s=t->next;
	free(t);
}

//function to insert first node

void insertatfirst(struct node** s,int data)
{
	struct node*n,*t;
	n=(struct node*)malloc(sizeof(struct node));
	n->item=data;
	t=*s;
	*s=n;
	(*s)->next=t;
}

//function to delete last node

void deletelast(struct node*s)
{
	struct node*t,*t1;
	t=s;
	while(t->next!=NULL)
	{	t1=t;
		t=t->next;
	}
	t1->next =NULL;
	free(t);
}


int main()
{
	
	struct node *start=NULL;
	insertatlast(20,&start);
	insertatlast(30,&start);
	insertatlast(40,&start);
	view(start);
	
	deletefirst(&start);
	
	cout<<"\t\t\t\t\tnodes after deleting first node"<<endl;
	view(start);
	
	insertatfirst(&start,10);
	cout<<"\t\t\t\t\tnodes after adding value at first node"<<endl;
	view(start);
	
	deletefirst(&start);
	cout<<"\t\t\t\t\tnodes after deleting first node"<<endl;
	view(start);
	
	deletelast(start);
	cout<<"\t\t\t\t\tnodes after deleting last node"<<endl;
	view(start);
	return 0;
}