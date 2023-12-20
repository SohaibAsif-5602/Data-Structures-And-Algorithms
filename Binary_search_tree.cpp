#include<iostream>
using namespace std;
class node{
    private:
int data;
node* left;
node* right;
public:
node( ){
data=0;
left=NULL;
right=NULL;
}
void setdata(int d)
{
data=d;
}
void setleft(node* n)
{
left=n;
}
void setright(node* n)
{
right=n;
}
int getdata()
{
return data;
}
node* getleft()
{
return left;
}
node* getright()
{
return right;
}
};

class BST {

    node* root;
    public:

    node* insert(int x, node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->setdata(x);
            t->setleft(NULL); 
            t->setright(NULL);
        }
        else if(x < t->getdata())
            t->setleft(insert(x, t->getleft()));
        else if(x > t->getdata())
            t->setright(insert(x, t->getright()));
        return t;
    }

    node* findMin(node* t)
    {
        if(t == NULL)
            return NULL;
        else if(t->getleft() == NULL)
            return t;
        else
            return findMin(t->getleft());
    }

    node* findMax(node* t) {
        if(t == NULL)
            return NULL;
        else if(t->getright() == NULL)
            return t;
        else
            return findMax(t->getright());
    }

    
void remove(int v){
   
        node* c = root;
        node* p = NULL;
        node* newcur = NULL;
   
        while( (c != NULL) && (v != c->getdata()) ){
            p = c;
           
            if( c->getdata() > v)  
                c = c->getleft();
           
            else  
                c = c->getright();
           
        }///while
       
       
        if(c == NULL)
            cout<<"\nEntered value is not Found";
       
        else{
       
        if( c->getright() == NULL || c->getleft() == NULL ){  /// handle both cases (leave node / single child )
           
            if( c->getleft() == NULL)
                newcur = c->getright();
           
            else
                newcur = c->getleft();
           
            if(p == NULL){
                root = newcur;      
                cout<<"\nValue deleted.";
            }
           
            else{
                if( c == p->getright() )
                    p->setright(newcur);
               
                else
                    p->setleft(newcur);
           
           }
            delete c;
           
        } /////  (leave node / single child )
       
        else {    ///case 3, if node has two childs
           
            node* prv = NULL;
            node* temp = NULL;
           
            temp = c->getright();
           
            while( temp->getleft() != NULL ){
                prv = temp;
                temp = temp->getleft();
            } //while            
       
            if( prv != NULL )
                prv->setleft( temp->getright() );
           
            else
                c->setright( temp->getright() );
               
            c->setdata( temp->getdata() );
           
            delete temp;
           
        } ///case 3, if node has two childs
    }

    } ////deletion function
    void inorder(node* t) {
        if(t == NULL)
            return;
        inorder(t->getleft());
        cout << t->getdata() << " ";
        inorder(t->getright());
    }
	void preorder(node* t) {
        if(t == NULL)
            return;
        cout << t->getdata() << " ";
		preorder(t->getleft());
        preorder(t->getright());
    }
	void postorder(node* t) {
        if(t == NULL)
            return;
		postorder(t->getleft());
        postorder(t->getright());
        cout << t->getdata() << " ";
    }
    node* find(node* t, int x) {
        if(t == NULL)
            return NULL;
        else if(x < t->getdata())
            return find(t->getleft(), x);
        else if(x > t->getdata())
            return find(t->getright(), x);
        else
            return t;
    }

    BST() {
        root = NULL;
    }


    void insert(int x) {
        root = insert(x, root);
    }

   
    void display() {
    int a;
    cout<<"Press 1 to display in postorder \nPress 2 to display in preorder\nPress 3 to display in inorder\nPress 3 to display all\n";
cin>>a;
if(a==1)
{
postorder(root);
cout<<endl;
}
if(a==2)
{
preorder(root);
cout<<endl;
}
if(a==3)
        {
        inorder(root);
        cout << endl;
}
if(a==4)
{
	postorder(root);
cout<<endl;
preorder(root);
cout<<endl;	
        inorder(root);
        cout << endl;
	
	
}
    }

    void search(int x) {
        root = find(root, x);
    }
    int finddmax()
    {
        node* temp=findMax(root);
        return temp->getdata();
    }
    int finddmin()
    {
        node* temp=findMin(root);
        return temp->getdata();
    }
    void searchh(int val)
    {
        node* temp=find(root,val);
        if (temp==NULL)
        {
            cout<<"Value not found"<<endl;
        }
        else
        {
            cout<<"Value Found"<<endl;
        }
    }
};

int main() {
    BST t;
    int val;
    int choice=9;
    while(choice!=7)
    {
    cout<<endl<<endl;
    system("pause");
    system("cls");
    cout<<"Press 1 to insert value"<<endl;
    cout<<"Press 2 to display"<<endl;
    cout<<"Press 3 to delete value"<<endl;
    cout<<"Press 4 to find min"<<endl;
    cout<<"Press 5 to find max"<<endl;
    cout<<"Press 6 to search"<<endl;
    cout<<"Press 7 to exit"<<endl;
    cout<<"Choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter Value to Insert: ";
        cin>>val;
        t.insert(val);
        break;
        case 2:
        t.display();
        break;
        case 3:
        cout<<"Enter value to delete: ";
        cin>>val;
        t.remove(val);
        break;
        case 4:
        cout<<"Minimum Value: "<<t.finddmin()<<endl;
        break;
        case 5:
        cout<<"Maximum Value: "<<t.finddmax()<<endl;
        break;
        case 6:
        cout<<"Enter Value to Search: ";
        cin>>val;
        t.searchh(val);
        break;
        case 7:
        break;
    }
    }
    return 0;
}
