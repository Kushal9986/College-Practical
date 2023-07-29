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




		if(*s==NULL)
	{
		cout<<"\t\t\t\t\t\tThe list is empty . choose insert at first"<<endl;
		return ;

	}
	
	else
	{			
			int data;
			cout<<"Enter value of your last node"<<endl;
				cin>>data;
	
			struct node*n;
	
			struct node*t;
			n=(struct node*)malloc(sizeof(struct node));
			n->item=data;
			n->next=NULL;
		t=*s;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=n;
		cout<<"\t\t\t\t\t\tnode inserted"<<endl;
	}
	
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
	
	if(*s==NULL)
	{
			*s=n;
			n->next=NULL;
	}
	
	else
	{
		n->next=*s;
		*s=n;
	}
	


	cout<<"\t\t\t\t\t\tnode inserted"<<endl;
}

									//function to enter random node
																			
void randominsert(struct node** s)
{	
	struct node*current,*prev,*n;
	char c;
	int p,i;
	
		if(*s==NULL)
	{
		cout<<"\t\t\t\t\t\tThe list is empty . choose insert at first"<<endl;
		return ;

	}

	cout<<"enter position u want to enter your node"<<endl;
	cin>>p;
	
	if(p==1)
	{
		
		cout<<"choose delete at first "<<endl;
		return;
	}
	

	else  if(p<=0)
	{
		cout<<"entered a wrong position"<<endl;
		return;
	}

	
	else
	{
		
		int data;
		cout<<"Enter value of your random node"<<endl;
		cin>>data;
		
							n=(struct node*)malloc(sizeof(struct node));
					n->item=data;

	
		current=*s;
		
		for(i=1; i<p&&current->next!=NULL; i++)
		{
			prev=current;
			current=current->next;
		}
		if(current->next==NULL && i==p-1)
		{

					current->next=n;
					n->next=NULL;
				cout<<"node inserted at last cause u have entered the last position";
		}
		else
		{
			if(i<p-1)
			{
				cout<<"position not available"<<endl;
				free(n);
				cout<<"node deleted"<<endl;
			}
			
			else
			{
			prev->next=n;
			n->next=current;
			cout<<"node inserted at your position"<<endl;
			}
		}
	}	
	
		
}


													//function to delete first node

void deletefirst(struct node**s)
{
	if(*s==NULL)
	{
		cout<<"\t\t\t\t\t\t\tlist is empty"<<endl;
		cout<<"\t\t\t\t\t\t\tNothing happened"<<endl;
	}
	
	else
	{
	struct node *t;
	t=*s;
	*s=t->next;
	free(t);
	cout<<"node deleted"<<endl;
	}
}



												//function to delete last node

void deletelast(struct node**s)
{
	struct node*t;
		struct node*t1=NULL;
	
	if(*s==NULL)
	{
		cout<<"\t\t\t\t\t\t\tlist is empty"<<endl;
		cout<<"\t\t\t\t\t\t\tNothing happened"<<endl;
	}
	
		
		
	
	else
	{
		t=*s;
		
		while(t->next!=NULL)
		{		t1=t;
				t=t->next;
		}
		if(t1)
		{
			t1->next =NULL;
		}
		else
		{
			*s=NULL;
		}
		free(t);
		cout<<"node deleted"<<endl;
		

	}

}


								//function to delete random node
void deleterandom(struct node **s)
{

	if(*s==NULL)
	{
		cout<<"\t\t\t\t\t\t\tlist is empty"<<endl;
		cout<<"\t\t\t\t\t\t\tNothing happened"<<endl;
		return;
	}
	/*
		if((*s)->next == NULL)
	{
		cout<<"List has only one node choose right option"<<endl;
		return;
	}*/
	
	else
	{
			int p,i;
			cout<<"enter position u want to delete your node"<<endl;
			cin>>p;
	
			if(p==1)
			{
			cout<<"choose delete at first "<<endl;
			return;
			}
			else if(p<=0)
			{
			cout<<"invalid position"<<endl;
			return;
			}
		
		struct node*t,*t1;
		t=*s;
		t1=NULL;
	
		for( i=1; i<=p-1&&t->next!=NULL; i++)
		{
			t1=t;
			t=t->next;
		}
		
		if(t->next==NULL&& i==p)
		{
				t1->next=NULL;
				free(t);
				cout<<"last node deleted cause u have entered the last position"<<endl;
		}
		else
		{
			if(i==p)
			{	cout<<"if worked"<<endl;
				t1->next=t->next;
				free(t);
				cout<<"node deleted"<<endl;
			}
			
			else
			{
				cout<<"else worked"<<endl;
				cout<<"\t\t\t\t\t\t\tEntered invalid position"<<endl;
			}
		}
		
	}
}

											//function to view node values

void view(struct node*s)
{int i=1;

	if(s==NULL)
	{
		
		cout<<"\t\t\t\t\t\t\tlist is empty"<<endl;
	}
	else
	{
		cout<<"\t\t\t\t\t\tHere is your linked list"<<endl;
		while(s)
		{
			cout<<"value at node "<<i<<" is "<<s->item<<endl;
			s=s->next;
			i=i+1;
		}
	}
}

									//here begins your main function

int main()
{
	
	struct node *start=NULL;
	char choice;
	
	cout<<"\t\t\t\t\tWelcome to linked list"<<endl;
	rechoose:
	
	cout<<"\n\nDo you want to start your linked list by entering value in node?(y/n):"<<endl;
	cin>>choice;
	

	if(choice=='y')
	{
		goto options;
	}
		else
	{
		if(choice=='n')
		{
						cout<<"\t\t\t\t\t Thanks for using"<<endl;
			goto exit;
		}
		else
		{
			cout<<"Entered a wrong choice"<<endl;
			goto rechoose;
		}
			

	}
		
										//options for operations on linked list
	options:

char option;


cout<<" \n\n\t\t\t\t\t\tnow you have options below"<<endl;
cout<<"\t\t\t\ta-> insert value at first node"<<endl;
cout<<"\t\t\t\tb-> insert value at last node"<<endl;
cout<<"\t\t\t\tc-> insert value at random node"<<endl;
cout<<"\t\t\t\td-> delete value at first node"<<endl;
cout<<"\t\t\t\te-> delete value at last node"<<endl;
cout<<"\t\t\t\tf-> delete value at random node"<<endl;
cout<<"\t\t\t\tg->view my linked list"<<endl;
cout<<"\t\t\t\th->Exit the program"<<endl;

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
		randominsert(&start);
	break;
	
		case 'd':
		deletefirst(&start);
	break;
	
		case 'e':
		deletelast(&start);
	break;
	
		case 'f':
		deleterandom(&start);
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
	
	
	exit:
	return 0;
}