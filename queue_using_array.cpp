#include<iostream>
#include<stdlib.h>
using namespace std;
			


class queue
{
	int* arr;
	int front;
	int rear;
	int noe;
	int size;
	public:
		queue(int s)
		{
			size=s;
			noe=0;
			front=-1;
			rear=-1;
			arr=new int[s];
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
				rear=(rear+1)%size;
				arr[rear]=d;
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
				front=(front+1)%size;
		    	cout<<arr[front];
			    noe--;
			 }
		}
		int frontvalue()
		{
			return arr[front];
		}
		
};









int main()
{
	queue q(5);
	q.enqueue(34);
	q.enqueue(54);
	q.enqueue(98);
	q.enqueue(65);
	q.enqueue(87);
	q.enqueue(45);
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.enqueue(34);
	q.enqueue(54);
	q.enqueue(98);
	q.enqueue(65);
	q.enqueue(87);
	q.enqueue(45);

	return 0;
}
