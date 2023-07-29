#include<iostream>
using namespace std;


struct node
{
	int data;
	struct node*next;
};

						//create node
void createnode(struct node**s)
{
	int no;
	struct node*n;
	
	cout <<"enter the number of nodes you want to create"<<endl;
	cin>>no;
	
	struct node*curr=*s;//for traversing to last node so that we can add new node to last node
	
	for (int i=1; i<=no; i++)
	{
		if(i==1)//for first node
		{
		n=(struct node*) malloc (sizeof (struct node));
		cout<<"Enter value of node  "<<i<<" :"<<endl;
		cin>>n->data;
		n->next=NULL;
		curr=n;
		*s=n;
		}
		else
		{
		n=(struct node*) malloc (sizeof (struct node));
		cout<<"Enter value of node  "<<i<<" :"<<endl;

		cin>>n->data;
		
		curr->next=n;//for add new node to last
		curr=curr->next;//for pointing curr to last node.
		}
	}
}


							//insert first function
void insertatfirst(struct node **s)
{
	struct node*n;
	n=(struct node*)malloc(sizeof(struct node));
	
	cout<<"Enter value :";
	cin>>n->data;
	
	if(*s==NULL)
	{
		*s=n;//adding new node address to start
		n->next=NULL;
		cout<<"\t\t\t\t\t\tNode inserted at first"<<endl;
	}
	
	else
	{
		n->next=*s;//linking new node to current first node so that current first node become second  node
		*s=n;//adding new node address to start
		cout<<"\t\t\t\t\t\tNode inserte at first"<<endl;
	}	
}

									//insert at last function
void insertatlast(struct node *s)
{	struct node *n,*curr;
	
	if(s==NULL)
	{
		cout<<"\t\t\t\t\t\tList is empty. "<<"\n"<<"\t\t\t\t\t\tchoose option a."<<endl;
		return;
	}
	
	else
	{
		n=(struct node*)malloc(sizeof(struct node));
		n->next=NULL;
		
		cout<<"Enter the value :";
		cin>>n->data;
	
		curr=s;
		while(curr->next!=NULL)//for traversing to last node
		{
			curr=curr->next;
		}
		curr->next=n;//adding new to last
		cout<<"node inserted at last"<<endl;
	}
}
										//fuction for insert before particular position
void insertbefore(struct node **s)
{
	if(*s==NULL)
	{
		cout<<"List is empty choose option a "<<endl;
		return;
	}
	else if((*s)->next==NULL)
	{
		cout<<"List has only one node choose option a or d"<<endl;
		return;
	}
	
	struct node*curr,*prev,*n;
	int position,val;
	int i=1;
	
	pos:
	cout<<"Enter position you want to add new node:";
	cin>>position;

	

	//for first position
	if(position==1)
	{
		cout<<"choose option a for first position"<<endl;
		return;
	}
	//othe than first
	else 
	{	//for invalid position
		if(position <=0)
		{
			cout<<"Invalid position"<<endl;
			goto pos;
		}
		//for valid position--------------
		else
		{
			curr=*s;
			while(i<=position-1&&curr->next!=NULL)
			{
				prev=curr;
				curr=curr->next;
				i++;
			}
			//for last
			if(curr->next==NULL&&i==position-1)
			{
				cout<<"You have entered the last position .please choose insert at last for that"<<endl;
				return;
			}
			//for not available
			else if(i<position-1)
			{
				cout<<"Entered unavailable position"<<endl;
				return;
			}
			//for available
			else
			{		
				n=(struct node*)malloc(sizeof(struct node));
				cout<<"Enter the value:";
				cin>>n->data;
				
				prev->next=n;
				n->next=curr;
				cout<<"node inserted at position"<<position;
			}
		}
	}
}

														//insert after particular position
														
void insertafter(struct node **s)
{
	if(*s==NULL)
	{
		cout<<"List is empty choose option a "<<endl;
		return;
	}
	else if((*s)->next==NULL)
	{
		cout<<"List has only one node choose option a or d"<<endl;
		return;
	}
	
	struct node*curr,*prev,*n;
	int position,val;
	int i=1;
	
	pos:
	cout<<"Enter position you want to add new node:";
	cin>>position;
	position++;

	

	//for first position
	if(position==1)
	{
		cout<<"choose option a for first position"<<endl;
		return;
	}
	//othe than first
	else 
	{	//for invalid position
		if(position <=0)
		{
			cout<<"Invalid position"<<endl;
			goto pos;
		}
		//for valid position--------------
		else
		{
			curr=*s;
			while(i<position && curr->next!=NULL)
			{
				prev=curr;
				curr=curr->next;
				i++;
			}
			//for last
			if(curr->next==NULL&&i==position-1)
			{
				n=(struct node*)malloc(sizeof(struct node));
				cout<<"Enter the value:";
				cin>>n->data;
				
				curr->next=n;
				n->next=NULL;
				cout<<"node inserted at position"<<position;
				return;
			}
			
			//for not available
			if(i<position-1)
			{
				cout<<"Entered unavailable position"<<endl;
				return;
			}
			//for available
			else
			{		
				n=(struct node*)malloc(sizeof(struct node));
				cout<<"Enter the value:";
				cin>>n->data;
				
				prev->next=n;
				n->next=curr;
				cout<<"node inserted at position"<<position;
			}
		}
	}
}
														

												//deletefirst
void deletefirst(struct node **s)
{
	if(*s==NULL)
	{
		cout<<"List is empty. choose option a "<<endl;
		return;
	}
	struct node* curr;
	
	if((*s)->next==NULL)
	{
		free(*s);
		*s=NULL;
		cout<<"if worked node deleted"<<endl;
		cout<<"first node deleted"<<endl;
	}
	else
	{
		curr=(*s)->next;
		free(*s);
		*s=curr;
		cout<<"fist node deleted"<<endl;
	}
}

											//deletelast
void deletelast(struct node**s)
{
	if(*s==NULL)
	{
		cout<<"list is empty. choose option a ."<<endl;
		return;
	}
	
	if((*s)->next==NULL)
	{
		
		cout<<"list has only one node. So choose a or d or f "<<endl;
		return;
	}
	
	struct node*curr=NULL;
	struct node*prev=NULL;
	if((*s)->next!=NULL)
	{
		curr=*s;
		while(curr->next!=NULL)
		{
			prev=curr;
			curr=curr->next;
		}
			free(curr);
			prev->next=NULL;
			cout<<"last node deleted"<<endl;
	}
}


												//delete random
void deleterandom(struct node**s)
{
	if(*s==NULL)
	{
		cout<<"List is empty choose other option"<<endl;
		return;
	}
	
	if((*s)->next == NULL)
	{
		cout<<"List has only one node choose right option"<<endl;
		return;
	}
	pos:
	int position;
	int i=1;
	cout<<"Enter position:";
	cin>>position;
	
	//for first position
	if(position==1)
	{
		cout<<"choose option delete at first for that"<<endl;
		return;
	}
	//for other than first
	
	struct node*curr=NULL;
	struct node*prev=NULL;
	
		//for invalid

	if(position<=0)
	{
		cout<<"Enter valid position"<<endl;
		goto pos;
	}
	//for valid position
	

	
	else
	{
		curr=*s;
		
		while(i<=position-1&&curr->next!=NULL)
		{
			prev=curr;
			curr=curr->next;
			i++;
		}
		//for last
		if(curr->next==NULL &&  i==position)
		{
			cout<<"you have selected last node please choose delete last for that"<<endl;
			return;
		}
		//for unavailable
		if(i<position)
		{
			cout<<"position not available"<<endl;
			return;
		}
		//for available
		else
		{
			prev->next=curr->next;
			free(curr);
			cout<<"node deleted at your desired position"<<endl;
		}
	
	}
	
}

							//reverse the node

void reverse(struct node**s )
{
	if(*s==NULL)
	{
		cout<<"list is empty"<<endl;
		return;
	}
	
	if((*s)->next==NULL)
	{
		cout<<"list has only one node"<<endl;
		return;
	}
	
	struct node*prev=NULL;
	struct node*curr=*s;
	struct node*nxt=NULL;
	
	while(curr!=NULL)
	{
		nxt=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nxt;
	}
	*s=prev;
	cout<<"linked list reversed"<<endl;
	
}
												//view function
void view(struct node *s )
{
	int i=1;
	if(s==NULL)
	{
		cout<<"\t\t\t\t\t\tlist is empty"<<endl;
	}
	else
	{
		cout<<"\t\t\t\t\t\tHere is your linked list"<<endl;
		while(s)
		{
			cout<<"value of node "<<i<<" is:"<<s->data<<endl;
			s=s->next;
			i++;
		}
	}
}

int main()
{
	struct node*start=NULL;//head node pointer
	
	char choice[50];
	
	char op;
	
	cout<<"do you want to start your linked list (y/n)"<<endl;
	cin>>choice;
	
	if (choice[0]=='y')
	{
		createnode(&start);
	}
	else
	{
		cout<<"Thanks for using"<<endl;
		return 0;
	}

	
	
	options:
	cout<<"\n\n"<<"\t\t\t\t\t\t--------------------------"<<"\n\t\t\t\t\t\tNow you have options below"<<"\n\t\t\t\t\t\t--------------------------"<<endl;
	cout<<"\n\n\t\t\t\t\t\ta->Insert at first"<<endl;
	cout<<"\t\t\t\t\t\tb->Insert at last"<<endl;
	cout<<"\t\t\t\t\t\tc->Insert before position"<<endl;
	cout<<"\t\t\t\t\t\td->Insert after position"<<endl;
	cout<<"\t\t\t\t\t\te->delete first"<<endl;
	cout<<"\t\t\t\t\t\tf->delete last"<<endl;
	cout<<"\t\t\t\t\t\tg->delete random"<<endl;
	cout<<"\t\t\t\t\t\th->view my list"<<endl;
	cout<<"\t\t\t\t\t\ti->reverse the linked list "<<endl;
	cout<<"\t\t\t\t\t\tj->Exit the program"<<endl;


	cout<<"Enter your option:";
	cin>>op;
	
	
	switch(op)
	{
		case 'a':
		insertatfirst(&start);
		break;
		
		case 'b':
		insertatlast(start);
		break;
		
		case 'c':
		insertbefore(&start);
		break;
		
		case 'd':
		insertafter(&start);
		break;

		case 'e':
		deletefirst(&start);
		break;
		
		case 'f':
		deletelast(&start);
		break;
		
		case 'g':
		deleterandom(&start);
		break;
		
		case 'h':
		view(start);
		break;
		
		case 'i':
		reverse(&start);
		break;
		
		
		case 'j':
		return 0;
		break;
		
		
		default:
		cout<<"you have entered a wrong choice"<<endl;
		
	}
	goto options;
	return 0;
	
}