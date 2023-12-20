#include <iostream>
#include <stack>
using namespace std;

#define n 20

class stacks{
char* a;
int top;
public:
	
stacks(){
    a=new char[n];   
    top=-1;          //empty stack
}
void push(char d){   //push  function
if(top==n-1){
cout<<"Stack is overflow"<<endl;
return;
}
top++;
a[top]=d;
}
void pop(){        //pop function
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    top--;         
}
void display(){
    for(int i=0;i<=top;i++){
        cout<<a[i]<<endl;
    }
}
char Top(){       // return the top element
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    return a[top];
}
bool empty(){     
    return top==-1;
}
};



void bal_prn(string s)//balanced paranthesis
{
    bool check = false;
    
    stacks st;
                                                         //single char string  push in stack 
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }



        else
        {                                     //if char is closing bracket match the top element with input string
            char br = st.Top();

            switch (s[i])
            {
            case ')':
                if (!st.empty() and br == '(')
                {
                    cout << "Balanced Parenthesis" << endl;
                    st.pop();
                    check = true;
                }
                else
                {
                    cout << "Not Balanced" << endl;
                }
                break;
            case ']':
                if (!st.empty() and br == '[')
                {
                    cout << "Balanced Parenthesis" << endl;
                    st.pop();
                    check = true;
                }
                else
                {
                    cout << "Not Balanced" << endl;
                }
                break;
            case '}':
                if (!st.empty() and br == '{')
                {
                    cout << "Balanced Parenthesis" << endl;
                    st.pop();
                    check = true;
                }
                else
                {
                    cout << "Not Balanced" << endl;
                }
                break;
            }
        } 
    }
}
int main()
{
    
    bal_prn("[(}]");
    
	bal_prn("([])");
	stacks st;
    
    return 0;
}
