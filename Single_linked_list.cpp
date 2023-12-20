#include <iostream>
using namespace std;

class Node
{
    int value;
    Node *nextNode;

public:
    void setvalue(int v)
    {
        value = v;
    }
    int getvalue()
    {
        return value;
    }
    void setnextNode(Node *n)
    {
        nextNode = n;
    }
    Node *getnextNode()
    {
        return nextNode;
    }
};
class SLL
{
    int noE;
    Node *head;
    Node *current;
    Node *previous;

public:
    SLL();
    void insert_at_start(int);
    void insert_at_last(int);
    void insert_at_index(int, int);
    void delete_at_head();
    void delete_at_specificPoint(int);
    void update_at_index(int, int);
    void update_at_value(int, int);
    bool search(int);
    void copy(int, int);
    void copy_by_value(int, int);
    void swap(int, int);
    void swap_by_value(int, int);
    void display();
};
int main()
{
    int d1, a, b, counter = 0;
    SLL mylist;
    int n;
    int *arry = new int[counter];
    do
    {
        cout << "1-Create List" << endl;
        cout << "2-Insert" << endl;
        cout << "3-Delete" << endl;
        cout << "4-Display" << endl;
        cout << "5-Update" << endl;
        cout << "6-Swap" << endl;
        cout << "7-copy" << endl;
        cout << "8-search" << endl;
        cout << "9-Length Of List" << endl;
        cout << "10-Delete Entire List" << endl;
        cout << "11-Exit" << endl;
        cout << "Enter your choice: ";
        cin >> a;
        switch (a)
        {

        case 1:
            cout << "How many values do you insert in linked List" << endl;
            cin >> n;
            cout << n << endl;
            for (int i = 1; i <= n; i++)
            {  cout<<"Enter value "<<i<<" :";
                cin >> arry[i];
                counter++;
            }
            for (int i = 1; i <= n; i++)
            {
                mylist.insert_at_last(arry[i]);
            }
            break;
        case 2:
            system("CLS");

            do
            {
                cout << "1-Insert At Start" << endl;
                cout << "2-Insert At Last" << endl;
                cout << "3-Specific location" << endl;
                cout << "4-Exit" << endl;

                cout << "Enter your choice";
                cin >> b;
                switch (b)
                {

                case 1:
                    system("CLS");
                    cout << "Enter the value which you want to insert" << endl;
                    int sv;
                    cin >> sv;
                    mylist.insert_at_start(sv);
                    break;
                case 2:
                    system("CLS");
                    cout << "Enter the value which you want to insert" << endl;
                    int lv;
                    cin >> lv;
                    mylist.insert_at_last(lv);
                    break;
                case 3:
                    system("CLS");
                    cout << "Enter the location of value" << endl;
                    int loc;
                    cin >> loc;
                    cout << "Enter the value which you want to insert" << endl;
                    int iv;
                    cin >> iv;
                    mylist.insert_at_index(iv, loc);
                    break;
                }
            } while (b != 4);

            break;
        case 3:
            system("CLS");
            do
            {
                cout << "1-Delete from Start" << endl;
                cout << "2-Delete from specific point" << endl;
                cout << "3-Back to main menu" << endl;
                cout << "Enter your choice: ";
                cin >> d1;
                switch (d1)
                {
                case 1:
                    system("CLS");
                    mylist.delete_at_head();
                    break;
                case 2:
                    cout << "Enter the index which you want to delete :";
                    int di;
                    cin >> di;
                    mylist.delete_at_specificPoint(di);
                    break;
                }
            } while (d1 != 3);

            break;
        case 4:
            system("CLS");
            mylist.display();
            break;
        case 5:
            system("CLS");

            int value, l, v;
            do
            {
                cout << "1-Update at index" << endl;
                cout << "2-Update at value" << endl;
                cout << "3-Exit" << endl;
                cin >> value;
                switch (value)
                {
                case 1:
                    system("CLS");
                    cout << "Enter the index which you want update :" << endl;
                    int iu, uv;
                    cin >> iu;
                    cout << "Enter the updated value" << endl;
                    cin >> uv;
                    mylist.update_at_index(uv, iu);
                    break;

                case 2:
                    system("CLS");
                    cout << "Enter the value which you want update :" << endl;
                    int iu1, uv1;
                    cin >> iu1;
                    cout << "Enter the updated value" << endl;
                    cin >> uv1;
                    mylist.update_at_value(uv1, iu1);
                    break;
                }

            } while (value != 3);

            break;
        case 6:
             system("CLS");

            int value1, l1, v1;
            do
            {
                cout << "1-Swap at index" << endl;
                cout << "2-Swap at value" << endl;
                cout << "3-Exit" << endl;
                cin >> value1;
                switch (value1)
                {
                case 1:
                    system("CLS");
                    cout << "Enter the two index which you want to swap" << endl;
            int v11, v22;
            cin >> v11>> v22;
            mylist.swap(v11, v22);
                    break;
                case 2:
                    system("CLS");
                    cout << "Enter the two values which you want to swap" << endl;
            int v1, v2;
            cin >> v1 >> v2;
            mylist.swap_by_value(v1, v2);
            break;
                }

            } while (value != 3);
          break; 

        case 7:
        int v, l1, v1;
            do
            {
                cout << "1-Copy at index" << endl;
                cout << "2-Copy at value" << endl;
                cout << "3-Exit" << endl;
                cin >> v;
                switch (v)
                {
                case 1:
                   system("CLS");
                     cout << "Enter the index which you want to copy" << endl;
            int cp, indloc;
            cin >> cp;
            cout << "Enter the location which you want to copy Element :" << endl;
            cin >> indloc;
            mylist.copy(indloc, cp);
                    break;
                case 2:
                    system("CLS");
                      cout << "Enter the index which you want to copy" << endl;
            int cp1, indloc1;
            cin >> cp1;
            cout << "Enter the location which you want to copy Element :" << endl;
            cin >> indloc1;
            mylist.copy_by_value(indloc1, cp1);
            break;
            }
            } while (value != 3);
            break;
        case 8:
            system("CLS");
            cout << "Enter the value which you want to search" << endl;
            int search;
            cin >> search;
            if (mylist.search(search) == 1)
            {
                cout << "Match Found" << endl;
            }
            else
            {
                cout << "Match Not Found" << endl;
            }
            break;
        case 9:
            system("CLS");
            break;
        case 10:
            break;
        }
    } while (a != 11);
}



void SLL::swap_by_value(int node1,int node2){
  if (noE == 0)
    {
        cout << "List is Empty" << endl;
        return;
    }
    int counter=0;
    int counter1=0;
     Node *pos1 = head;
    Node *pos2 = head;
    Node *pos3 = head;
    Node *pos4 = head;
    int getv1;
    int getv2;
     while (pos1 != NULL)
    {  counter++;
        if (pos1->getvalue() == node1)
        {
            cout<<counter<<" ";
        }
        pos1 = pos1->getnextNode();
    }
    cout<<"\n";
    cout<<"Please Select the value which you want to swap"<<endl;
    cin>>getv1;
     while (pos2 != NULL)
    {  counter1++;
        if (pos2->getvalue() == node2)
        {
            cout<<counter1<<" ";  
        }
        pos2 = pos2->getnextNode();
    }
    cout<<"\n";
    cout<<"Please Select the value which you want to swap"<<endl;
    cin>>getv2;
    
    for (int i = 1; i < getv1; i++)
    {
        pos3 = pos3->getnextNode();
    }

    for (int i = 1; i < getv2; i++)
    {
        pos4 = pos4->getnextNode();
    }

    // 4. swap the values of two nodes
    int val = pos3->getvalue();
    pos3->setvalue(pos4->getvalue());
    pos4->setvalue(val);    
   
}

void SLL::swap(int node1, int node2)

{
    if (noE == 0)
    {
        cout << "List is Empty" << endl;
        return;
    }
    // 1. count the number of nodes in the list
   

    // 2. check if the swap positions are valid entries
    if (node1 < 1 || node1 > noE || node2 < 1 || node2 > noE)

        return;

    // 3. traverse to the nodes where values to be swapped
    Node *pos1 = head;
    Node *pos2 = head;
    for (int i = 1; i < node1; i++)
    {
        pos1 = pos1->getnextNode();
    }
    for (int i = 1; i < node2; i++)
    {
        pos2 = pos2->getnextNode();
    }

    // 4. swap the values of two nodes
    int val = pos1->getvalue();
    pos1->setvalue(pos2->getvalue());
    pos2->setvalue(val);
}
void SLL::copy_by_value(int index, int value){

if (noE == 0)
    {
        cout << "List is Empty" << endl;
        return;
    }
    Node *pos1 = head;
    Node *pos2 = head;
     for (int i = 1; i < value; i++)
    {
        pos1 = pos1->getnextNode();
    }

    while (pos2 != NULL)
    {
        if (pos2->getvalue() == index)
        {cout<<"Copy"<<endl;
            pos2->setvalue(pos1->getvalue());
        }
        pos2 = pos2->getnextNode();
    } 
}
void SLL::copy(int index, int value)
{
    if (noE == 0)
    {
        cout << "List is Empty" << endl;
        return;
    }

    Node *pos1 = head;
    Node *pos2 = head;
    for (int i = 1; i < value; i++)
    {
        pos1 = pos1->getnextNode();
    }
    for (int i = 1; i < index; i++)
    {
        pos2 = pos2->getnextNode();
    }

    // 4. swap the values of two nodes
    pos2->setvalue(pos1->getvalue());
}
bool SLL::search(int key)
{
    if (noE == 0)
    {
        cout << "List is Empty" << endl;
        return false;
    }
    current = head;
    while (current != NULL)
    {
        if (current->getvalue() == key)
        {
            return true;
        }
        current = current->getnextNode();
    }
    return false;
}
void SLL::update_at_index(int v, int index)
{
    if (noE == 0)
    {
        cout << "List is Empty" << endl;
        return;
    }
    current = head;
    while (current->getvalue() != index)
    {
        current = current->getnextNode();
    }
    current->setvalue(v);
}
void SLL::update_at_value(int v, int index)
{
    if (noE == 0)
    {
        cout << "List is Empty" << endl;
        return;
    }
    current = head;
    while (current != NULL)
    {
        if (current->getvalue() == index)
        {
            current->setvalue(v);
        }
        current = current->getnextNode();
    }
}
void SLL::insert_at_index(int v, int index)
{
    if (noE < 0 && noE > 0)
    {
        cout << "Invalid Index" << endl;
    }
    if (noE == 0)
    {
        insert_at_start(v);
        return;
    }
    if (noE == index)
    {
        insert_at_last(v);
        return;
    }
    int count = 1;
    current = head;
    while (current != NULL)
    {
        if (count == index - 1)
        {
            Node *newnode = new Node;
            newnode->setvalue(v);
            newnode->setnextNode(current->getnextNode());
            current->setnextNode(newnode);
            break;
        }
        current = current->getnextNode();
        count++;
    }
}
void SLL::insert_at_start(int v)
{
    if (head == NULL)
    { /// CASE-1
        Node *newnode = new Node;
        newnode->setvalue(v);
        newnode->setnextNode(NULL);
        head = newnode;
        noE++;
    }
    else
    {
        Node *newnode = new Node;
        newnode->setvalue(v);
        newnode->setnextNode(head);
        head = newnode;
        noE++;
    }
}
void SLL::insert_at_last(int v)
{
    if (head == NULL)
    {
        Node *newnode = new Node;
        newnode->setvalue(v);
        newnode->setnextNode(NULL);
        head = newnode;
        noE++;
    }
    else
    {

        Node *newnode = new Node;
        newnode->setvalue(v);
        current = head;
        while (current->getnextNode() != NULL)
        {
            current = current->getnextNode();
        }
        current->setnextNode(newnode);
        newnode->setnextNode(NULL);
        noE++;
    }
}
void SLL::display()
{
    if (noE == 0)
    {
        cout << "List is Empty" << endl;
        return;
    }
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        Node *temp = head;
        cout<<"_______________________________________________________________________________________________________________________"<<endl;
        while (temp != NULL)
        {
            cout << temp->getvalue() << "->";
            temp = temp->getnextNode();
        }
        cout << "NULL" << endl;
        cout<<"_______________________________________________________________________________________________________________________"<<endl;

    }
}
SLL::SLL()
{
    noE = 0;
    head = NULL;
    current = NULL;
    previous = NULL;
}
void SLL::delete_at_head()
{
    if (noE == 0)
    {
        cout << "List is Empty" << endl;
        return;
    }
    Node *toDelete = head;
    head = head->getnextNode();
    delete toDelete;
    noE--;
}
void SLL::delete_at_specificPoint(int index)
{
    if (noE == 0)
    {
        cout << "List is Empty" << endl;
        return;
    }
    if (head == NULL)
    {
        cout << "List is not created" << endl;
        return;
    }
    if (head->getnextNode() == NULL)
    {
        delete_at_head();
        return;
    }
    current = head;
    while (current->getnextNode()->getvalue() != index)
    {
        current = current->getnextNode();
    }
    Node *todelete = current->getnextNode();
    current->setnextNode(current->getnextNode()->getnextNode());
    delete todelete;
    noE--;
}