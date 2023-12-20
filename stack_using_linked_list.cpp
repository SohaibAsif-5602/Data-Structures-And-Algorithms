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

class stack
{
	node* head;
	int noe;
	int size;
	public:
		stack()
		{
			noe=0;
			head=NULL;
			cout<<"Size  ";
			cin>>size;
		}
		bool isempty()
		{
			if(noe==0)
			return true;
			else 
			return false;	
		}
		bool isfull()
		{
			if(size==noe)
			return true;
			else 
			return false;
		}
		void push(int d)
		{
			if(isfull())
			{
				cout<<"IS FULL ";
			}
			else
			{
			node* temp=new node;
			temp->setdata(d);
			if(head==NULL)
			{
				head=temp;
				temp->setnext(NULL);
			}
			else
			{
				temp->setnext(head);
				head=temp;
			}
			noe++;
		}
		}
		void pop()
		{
			if(isempty())
			{
				cout<<"IS EMPTY";
			}
			else{
			node* temp=head;
			head=head->getnext();
			
			cout<< temp->getdata();
			noe--; }
		}
		int top()
		{
			return head->getdata();
		}
		
};









int main()
{
	stack s;
	s.push(56);
	s.push(50);
	s.push(34);
	s.push(39);
	s.push(312);
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	
	
	
	
	
	
	return 0;
}
