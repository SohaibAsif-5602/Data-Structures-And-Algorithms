#include<iostream>
using namespace std;

class node
{
	int time;
	node* next;
	public:
		node()
		{
			time=0;
			next=NULL;
		}
		void settime(int t)
		{
			time=t;
		}
		void setnext(node* t)
		{
			next=t;
		}
		int gettime()
		{
			return time;
		}
		node* getnext()
		{
			return next;
		}
};

class queue
{
	node* front;
	node* rear;
	int counter;
	public:
		queue()
		{
			front=NULL;
			rear=NULL;
			counter=0;
		}
		void addcustomer(int t)
		{
			node* temp=new node;
			temp->settime(t);
			temp->setnext(NULL);
			if(rear==NULL)
			{
				rear=temp;
				front=temp;
			}
			else
			{
				rear->setnext(temp);
				rear=temp;
				
			}
			counter++;
		}
		
		int totalcustomer()
		{
			return counter;
		}
		int totaltime()
		{
			int t=0;
			node* temp=front;
			for(int i=0;i<counter;i++)
			{
				t=t+temp->gettime();
				temp=temp->getnext();
			}
			return t;
		}
	~ queue	()
		{
			front=NULL;
			rear=NULL;
			counter=0;
		}
	
	
};





int  getshortest(int a,int b, int c,int d)
{
	int min=a;
	int check2=1;
	if(b<a)
	{
		min=b;
       check2=2;
	}
	else if(c<a)
	{
		min=c;
		check2=3;
	}
	else if (d<a)
	{
		min=d;
		check2=4;
	}
	
	return check2;
	
}

int  getmaxcus(int a,int b, int c,int d)
{
	int max=a;
	int check2=1;
	if(b>a)
	{
		max=b;
       check2=2;
	}
	else if(c>a)
	{
		max=c;
		check2=3;
	}
	else if (d>a)
	{
		max=d;
		check2=4;
	}
	
	return check2;
	
}

int main()
{
	queue q1,q2,q3,q4;
	char x='y';
	int c,check=0;
    
	while(x!='n')
	{
		cout<<endl<<"Enter your transaction time ";
		cin>>c;
		
		if(check==0)
		{
			q1.addcustomer(c);
			cout<<"you can stand in queue 1";
			check++;
		}
		else if (check==1)
		{
			q2.addcustomer(c);
			cout<<"you can stand in queue 2";
			check++;
		}
		else if(check==2)
		{
			q3.addcustomer(c);
			cout<<"you can stand in queue 3";
			check++;
		}
		else if (check==3)
		{
			q4.addcustomer(c);
			cout<<"you can stand in queue 4";
			check++;
		}
		else
		{
			int b=getshortest(q1.totaltime(),q2.totaltime(),q3.totaltime(),q4.totaltime());
			
				if(b==1)
			{	
				q1.addcustomer(c);
				cout<<"you can stand in queue 1";
			}
			else if (b==2)
			{
				q2.addcustomer(c);
				cout<<"you can stand in queue 2";

			}
			else if(b==3)
			{
				q3.addcustomer(c);
				cout<<"you can stand in queue 3";
			}
			else if (b==4)
			{
				q4.addcustomer(c);
				cout<<"you can stand in queue 4";
			}	
					
		}
	
	cout<<endl<<endl<<"Do you want to buy another ticket(y/n) ";
	cin>>x;	
	}
	
	cout<<endl<<"  NO of customers deal by every teller";
	
	for(int i=1;i<5;i++)
	{
		if(i==1)
		{
			cout<<endl<<"T"<<i<<"     "<<q1.totalcustomer();
		}
		else if(i==2)
		{
			cout<<endl<<"T"<<i<<"     "<<q2.totalcustomer();
		}
		else if(i==3)
		{
			cout<<endl<<"T"<<i<<"     "<<q3.totalcustomer();
		}
		else if (i==4)
		{
			cout<<endl<<"T"<<i<<"     "<<q4.totalcustomer();
		}
	}
	
	
	
	
	
	
	
	int m=getmaxcus(q1.totalcustomer(),q2.totalcustomer(),q3.totalcustomer(),q4.totalcustomer());
	
		if(m==1)
			{	
				cout<<endl<<"TELLER "<<m<<" deal maximum customers of the day ";
			}
			else if (m==2)
			{
			cout<<endl<<"TELLER "<<m<<" deal maximum customers of the day ";
			}
			else if(m==3)
			{
				cout<<endl<<"TELLER "<<m<<" deal maximum customers of the day ";
			}
			else if (m==4)
			{
				cout<<endl<<"TELLER "<<m<<" deal maximum customers of the day ";
			}	
			
	
	
	
	
	return 0;
}












