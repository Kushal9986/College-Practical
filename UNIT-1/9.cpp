#include<iostream>
using namespace std;

class voting
{
	int candidate[6],vote,sballot;
	char choice;
	public:
	void initialize()
	{
		for(int i=1;i<=5;i++)
		{
			candidate[i]=0;
		}
		sballot=0;
	}
	
	void readvote()
	{	
		do
		{
			cout<<"enter a vote for candidate 1 to 5:";
			cin>>vote;
		
			if(vote>=1&&vote<=5)
			{
				candidate[vote]++;
			}
			else
			{
				sballot++;
			}
			cout<<"do you want to vote again: (y/n)";
			cin>>choice;
			cout<<"\n\n";
		}while(choice!='n');		
	}
	void display()
	{
		for(int i=1;i<=5;i++)
		{
			cout<<"total vote for candidate" <<i<<"is="<<candidate[i]<<"\n";
		}
		cout<<"spoiltballot="<<sballot<<"\n";
	}
};

int main ()
{
	voting p1;
	p1.initialize();
	p1.readvote();
	p1.display();
	return 0;
}
