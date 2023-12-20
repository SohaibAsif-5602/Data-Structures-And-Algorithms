#include<iostream>
#include<stdlib.h>
using namespace std;
			


class stack
{
	int* arr;
	int noe;
	int size;
	public:
		stack(int s)
		{
			size=s;
			noe=0;
			arr=new int[size];
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
			arr[noe++]=d;
		}
		}
		void pop()
		{
			if(isempty())
			{
				cout<<"IS EMPTY";
			}
			else{
		    cout<<arr[--noe];
			
			 }
		}
		int top()
		{
			return arr[noe];
		}
		
};









int main()
{
	stack s(5);
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
