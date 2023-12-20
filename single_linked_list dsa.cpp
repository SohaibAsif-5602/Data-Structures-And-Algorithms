#include<iostream>
#include<stdlib.h>
using namespace std;
			

class node
{
	int data;
	node* next;
	public:
		node()
		{
			data=0;
			next=NULL;
		}
		void setdata(int d)
		{
			data=d;
		}
		void setnext(node* n)
		{
			next=n;
		}
		int getdata()
		{
			return data;
		}
		node* getnext()
		{
			return next;
		}
		
};

class SLL
{
	node* head;
	node* current;
	int count;
	
	public:
		SLL()
		{
			head=NULL;
			current=NULL;
			count=0;	
		}
		void insertdata(int d)
		{
			node* temp=new node;
			if(head==NULL)
			{
				temp->setdata(d);
				temp->setnext(NULL);
				head=temp;
				current=temp;
				count++;
			}
			else
			{
				temp->setdata(d);
				temp->setnext(NULL);
				current->setnext(temp);
				current=temp;
				count++;
			}
		}
		void insertdataspecific(int d,int loc)
		{
			node* temp=new node;
			node* temp2=head;
			for(int i=0;i<loc-2;i++)
			{
				temp2=temp2->getnext();
			}
			
			temp->setdata(d);
			temp->setnext(temp2->getnext());
			temp2->setnext(temp);
			count++;
		}
		
		void deletedata(int loc)
		{
			node* temp=head;
			for(int i=1;i<loc-1;i++)
			{
				temp=temp->getnext();
			}
			temp->setnext(temp->getnext()->getnext());
			count--;
		}
		
		
		void updatedata(int d,int loc)
		{
			node* temp=head;
			for(int i=1;i<loc;i++)
			{
				temp=temp->getnext();
			}
			temp->setdata(d);
		}
		
		void  swapdatabyindex(int i1,int i2)
		{
			int v1,v2;
			node* temp=head;
			node* temp2=head;
			for(int i=1;i<i1;i++){
				temp=temp->getnext();
			}
			for(int i=1;i<i2;i++)
			{
				temp2=temp2->getnext();
			}
			v1=temp->getdata();
			v2=temp2->getdata();
			temp->setdata(v2);
			temp2->setdata(v1);
			
		}
		void  swapdatabyvalue(int v1,int v2)
		{
			
			
		}
		void searchdata(int d)
		{
			node* temp=head;
			for(int i=0;i<count;i++)
			{
				if(temp->getdata()==d)
				{
					cout<<"value found at index"<<i+1;
				}
				temp=temp->getnext();
			}
		}
		
		void displaydata()
		{
			node* temp=head;
			for(int i=0;i<count;i++)
			{
				cout<<temp->getdata()<<endl;
				temp=temp->getnext();
			}
		}
	
	
	
	
	
	
};

int main()
{
	SLL s;
	s.insertdata(45);
	s.insertdata(54);
	s.insertdata(90);
	s.insertdata(56);
	s.insertdata(76);
	
	//s.swapdatabyindex(1,3);
	//s.insertdata(98);
	//s.insertdata(40);
	//s.updatedata(95,1);
	//s.deletedata(3);
	//s.insertdataspecific(34,2);
	//s.insertdataspecific(46,4);
	s.displaydata();
	s.searchdata(90);
	return 0;
	
	
	
}



