#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int item;
	struct node* next;
};

void insertatlast(int data,struct node**s)
{
	    struct node *n;
		struct node *t;
	    n=(struct node*)malloc(sizeof(struct node));
		n->item=data;
		n->next=NULL;
	
	if (*s==NULL)
   {
		*s=n;
	}
	
	else
	{
			t=*s;
				
			while(t->next!=NULL)
			t=t->next;
			
			t->next =n;
	}
}

void deletefirst(struct node **s)
{
	struct node*t;
	if(*s!=NULL)
	{
		t=*s;
		*s=t->next;
		free(t);
	}
}

void view(struct node*start)
{
	while(start)
	{
		cout<<start->item<<endl;
		start=start->next;
	}
}

int main()
{
	struct node* start=NULL;
	insertatlast(25,&start);
	insertatlast(26,&start);
	insertatlast(27,&start);
	cout<<"\n";
	view(start);
	deletefirst(&start);
	cout<<"\n";
	view(start);
	return 0;
}