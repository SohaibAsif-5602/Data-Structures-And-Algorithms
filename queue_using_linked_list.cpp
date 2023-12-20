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

class queue
{
	node* front;
	node* rear;
	int noe;
	int size;
	public:
		queue()
		{
			noe=0;
			front=NULL;
			rear=NULL;
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
		void enqueue(int d)
		{
			if(isfull())
			{
				cout<<"IS FULL ";
			}
			else
			{
			node* temp=new node;
			temp->setdata(d);
			if(rear==NULL)
			{
				rear=temp;
				front=temp;
				temp->setnext(NULL);
			}
			else
			{
				temp->setnext(NULL);
				rear->setnext(temp);
				rear=temp;
			}
			noe++;
		}
		}
		void dequeue()
		{
			if(isempty())
			{
				cout<<"IS EMPTY";
			}
			else{
			node* temp=front;
			front=front->getnext();
			
			cout<< temp->getdata();
			noe--; }
		}
		int top()
		{
			return front->getdata();
		}
		
};









int main()
{
	queue q;
	q.enqueue(23);
	q.enqueue(56);
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.enqueue(34);
	q.enqueue(92);
	q.enqueue(342);
	q.enqueue(98);
	q.enqueue(86);
	
	
	
	
	return 0;
}
