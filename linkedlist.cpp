#include<iostream>
using namespace std;

																//structure of node
																
																
struct node 
{
	int item;
	struct node*next;
};

															//function to add lastnode

void insertatlast(struct node **s)
{
	int data;
	cout<<"Enter value of your last node"<<endl;
	cin>>data;
	
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
	cout<<"node inserted"<<endl;
}


																	//function to insert first node

void insertatfirst(struct node** s)
{
	int data;
	cout<<"Enter value of your first node"<<endl;
	cin>>data;
	
	
	struct node*n,*t;
	n=(struct node*)malloc(sizeof(struct node));
	n->item=data;
	t=*s;
	*s=n;
	(*s)->next=t;
	cout<<"node inserted"<<endl;
}

									//function to enter random node
																			
void randominsert(struct node* s)
{	

	int p;
	cout<<"enter position u want to enter your node"<<endl;
	cin>>p;
	
	int data;
	cout<<"Enter value of your random node"<<endl;
	cin>>data;
	
	struct node*t=s;
	struct node*t1,*n;
	
	n=(struct node*)malloc(sizeof(struct node));
	n->item=data;
	
	for(int i=1; i<p; i++)
	{
		t1=t;
		t=t->next;
	}
	
	t1->next=n;
	n->next=t;
	cout<<"node inserted"<<endl;
}


													//function to delete first node

void deletefirst(struct node**s)
{
	struct node *t;
	t=*s;
	*s=t->next;
	free(t);
	cout<<"node deleted"<<endl;
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
		cout<<"node deleted"<<endl;

}


								//function to delete random node
void deleterandom(struct node *s)
{
	int p;
	cout<<"enter position u want to delete your node"<<endl;
	cin>>p;
	
	struct node*t,*t1;
	t=s;
	
	for(int i=1; i<p; i++)
	{
		t1=t;
		t=t->next;
	}
	
	t1->next=t->next;
	free(t);
		cout<<"node deleted"<<endl;

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

									//here begins your main function

int main()
{
	
	struct node *start=NULL;
	char choice;
	int j=0;
	cout<<"\t\t\t\t\tWelcome to linked list"<<endl;
	rechoose:
	
	cout<<"\n\nDo you want to enter value in node?(y/n):"<<endl;
	cin>>choice;
	

	if(choice=='y')
	{
		insertatlast(&start);
		j=j+1;
		if(j<1)
		{
		goto rechoose;
		}
		
		else
		{
				goto options;
		}
	}
	
	else
	{
			cout<<"\t\t\t\t\tnodes after adding first node"<<endl;
			view(start);
	}
	
										//options for operations on linked list
	options:

char option;


cout<<" \n\n\t\t\t\t\t\tnow you have options below"<<endl;
cout<<"a-> insert value at first node"<<endl;
cout<<"b-> insert value at last node"<<endl;
cout<<"c-> insert value at random node"<<endl;
cout<<"d-> delete value at first node"<<endl;
cout<<"e-> delete value at first node"<<endl;
cout<<"f-> delete value at first node"<<endl;
cout<<"g->view my linked list"<<endl;
cout<<"h->Exit the program"<<endl;

cout<<"\nEnter your option"<<endl;
cin>>option;

switch(option)
{
		case 'a':
		insertatfirst(&start);
	break;
	
		case 'b':
		insertatlast(&start);
	break;
	
		case 'c':
		randominsert(start);
	break;
	
		case 'd':
		deletefirst(&start);
	break;
	
		case 'e':
		deletelast(start);
	break;
	
		case 'f':
		deleterandom(start);
	break;
	
		case 'g':
		view(start);
	break;
	
			case 'h':
		goto exit;
	break;
	
	default :
	cout<<"U have entered a wrong choice"<<endl;
}

goto options;
		
		
	/*
	
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
	
		insertatlast(60,&start);
	insertatlast(50,&start);
	cout<<"\t\t\t\t\tnodes after adding value at last node"<<endl;
	view(start);
	
	randominsert(start,70);
	cout<<"\t\t\t\t\tnodes after adding value at random position"<<endl;
	view(start);
	
	deleterandom(start);
	cout<<"\t\t\t\t\tnodes after deleting value at random position"<<endl;
	view(start);*/
	exit:
	return 0;
}