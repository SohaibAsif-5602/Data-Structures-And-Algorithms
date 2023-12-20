#include<iostream>
#include<stdlib.h>
using namespace std;
int main()



{
    int array[100],darray[100], check=0,count=0 ,f=1, b,c=0 ,value,value1,value2,value3 ,loc ,a=0,index,index1,index2,index3;
    for(int i =0;i<5;i++)
    

    while(c!=11) 
    {
    	cout<<endl<<endl;
    	system("pause");
    	system("cls");
    cout<<"====== list operations =======\n";
    cout<<endl<<"1.Create list"<<endl<<"2.Insertion menu"<<endl<<"3.Deletion menu"<<endl<<"4.display"<<endl<<"5.update"<<endl;
    cout<<"6.Find value"<<endl<<"7.Find length of list"<<endl<<"8.Copying menu"<<endl<<"9.Swapping menu"<<endl;
    cout<<"10.Delet entire list"<<endl<<"11.Exit"<<endl;
    cout<<"Enter your choice";
    cin>>c;
    system("cls");
    if(c==1)
    {
        int i=0;
        
        while(f!=0)
        {
            cout<<"Enter "<<i+1<<" value(enter 0 to exit)  ";
            cin>>array[i];
            f=array[i];
            i++;
            count++;
            check=1;
        }
    }

    if(check==1)
    {

    if(c==2)                                                                          //insert function
       {
        b=0;
        while(b!=4)
        {
        ;
        cout<<endl<<"1.start"<<endl<<"2.end"<<endl<<"3.specific"<<endl<<"4.back to main menu"<<endl<<"exit"<<endl;
        cout<<"Enter your choice";
        cin>>b;
        if(b==1){ cout<<"enter the value"<<endl;
                    cin>>value;
                    for(int i=0;i<count;i++)
                    {
                        darray[i+1]=array[i];
                        darray[0]=value;
                        
                    }
                    count++;
                    for(int i=0;i<count;i++)
                    {
                        array[i]=darray[i];
                                        
                    }
                 }
       else if(b==2){ cout<<"enter the value"<<endl;
                    cin>>value;
                    array[count]=value;
                    count++;
                 }     
       
       else if(b==3){ cout<<"Enter the value";
                       cin>>value;
                       cout<<"enter loc";
                       cin>>loc;       
       
                      if(loc>=count)
                      {
                        cout<<"value does not exist";
                      }
                      else
                      {
                                    for(int i=0;i<count;i++)
                                                        {
                                                        if(i!=loc-1){
                                                    
                                                       darray[a]=array[i];
                                                       a++;
                                                       }
                                                        
                                                           }
                                                           
                        for(int i=0;i<count;i++)
                    {
                        array[i]=darray[i];
                                        
                    }
                      }
                      
                     count++;
                    }                
        
                    }                
      if (b==5){
        return 0;
      }
       }
        
    






       else  if(c==3)                                                                 // delete function
    {
        b=0;
        while(b!=4)
        {
        cout<<endl<<"1.start"<<endl<<"2.end"<<endl<<"3.specific"<<endl<<"4.back to main menu"<<endl<<"exit"<<endl;
        cout<<"Enter your choice";
        cin>>b;
        if(b==1){    
                   for(int i=0;i<count;i++)
                    {
                        darray[i]=array[i+1];
                        
                    }
                    count--;
                    for(int i=0;i<count;i++)
                    {
                        array[i]=darray[i];
                                        
                    }
                 }
       else if(b==2){ 
                    
                    count--;
                 }     
       
       else if(b==3){
                      cout<<"enter the location"<<endl;
                      cin>>loc;
                      if(loc>=count)
                      {
                        cout<<"value does not exist";
                      }
                      else
                      {
                                    for(int i=0;i<count;i++)
                                                        {
                                                        if(i!=loc-1){
                                                    
                                                       darray[a]=array[i];
                                                       a++;
                                                       }
                                                        
                                                           }
                                                           
                        for(int i=0;i<count;i++)
                    {
                        array[i]=darray[i];
                                        
                    }
                      }
                      
                     count--;
                    }                
    else if (b==5){
        return 0;
      }
       }
        
    }

    







    else if(c==4)                                                                               // display function
    {
        for(int i=0;i<count;i++)
        {
            cout<<"\nIndex"<<"       Value\n";
            cout<<i+1<<"        "<<array[i]<<endl;
        }
    }


    else if (c==5)                                                                              //update function
    {  
        b=0;
        while(b!=3)
        {
            cout<<"1.update by value,2.upate by index,3.back to main menu,4.exit";
            cin>>b;
            if(b==1)
            {
                int x=0,m=0,dar[100];
                while(x!=1){
                cout<<"Enter the value";
                cin>>value;
                for(int i=0;i<count;i++){
                    if(array[i]=value)
                    {
                        for(int i=0;i<count;i++){
                        if(array[i]=value)
                        {
                            darray[m]=value;
                            dar[m]=i;
                            m++;
                        }}
                        if(m==1)
                        {
                        cout<<"value found";
                        cout<<"enter the value to update";
                        cin>>value;
                        array[dar[m-1]]=value;
                        }
                        else if(m>1){
                        cout<<"multiple values found at indexes ";
                        for(int i=0;i<m;i++)
                        { cout<<dar[i+1]<<" "; }
                        cout<<"select one index  ";
                        cin>>index;
                        cout<<"enter value to update";
                        cin>>value;
                        array[index-1]=value;
                        }
                        x=1;
                    }
                    else
                    {
                        cout<<"value not found";
                    }
                }
                }



            }
    
            else if(b==2)
            {
                cout<<"Enter the  index";
                cin>>index;
                int e=0;

                while(e!=1)
                {
                if(index<count && index>0){
                cout<<"Enter the value to update"<<endl;
                cin>>value;
                array[index-1]=value;
                e=1;
                }
                else
                {
                    cout<<"index didnt found";
                    cout<<"enter index again";
                    cin>>index;
                }
                }
            }
            else if(b==4)
            {
                return 0;
            }
            }}
        


    else if (c==6)                                            //find value
    {
        int p=0;
        while(p!=1){
        cout<<"enter the value to find";
        cin>>value;
        for(int i=0;i<count ;i++)
        {
            if(array[i]==value)
            {
                cout<<endl<<"value found at index  ";
                cout<<i+1;
                p=1;
            }
            
        }
        if(p==0)
            {
                cout<<endl<<"value not found";
            }
        }
    }   

    else if(c==7)                                    //find length
    {
        cout<<endl<<"length of the list is "<<count;
    }

    else if (c==8)                                   //copying menu             
    {
        b=0;
        while(b!=4)
        {
        cout<<endl<<"1.copy by index,2.copy by value,3.back to main menu,4.exit";
        cin>>b;
        if(b==1){
            int w=0;
            while(w!=1){
            cout<<"enter the index you want to copy";
            cin>>index;
            if(index<count && index>0){
                value1=array[index-1];
                index1=index-1;
                w=1;
            }
            else 
            {
                cout<<"Index not found";
            }
            }
            int r=0;
            while(r!=1){
            cout<<"enter the index where you want to copy";
            cin>>index;
            if(index<count && index>0){
                value2=array[index-1];
                index2=index-1;
                r=1;
            }
            else 
            {
                cout<<"Index not found";
            }
            array[index2]=value1;

            }           
        }
        if(b==2){
            int t=0;
            while(t!=1){
                cout<<"enter the value to copy";
                cin>>value;
                for(int i=0;i<count;i++)
                {
                    if(array[i]==value){
                        value1=value;
                        cout<<"value copied";
                    t=1;
                    }
                    else 
                    {
                        cout<<"value not found";
                    }
                }
            }
            int y=0,m=0,darr[100];
            while(y!=1)
            {
                cout<<"enter the value where you want to copy";
                cin>>value;
                for(int i=0;i<count;i++)
                {
                    if(array[i]==value){
                        if(array[i]==value)
                        {
                            darray[m]=value;
                            darr[m]=i;
                            m++;
                        }
                        if(m==1){
                        value2=darray[m-1];
                        index2=darr[m-1];
                        cout<<"value found";}

                        else if(m>1){
                        cout<<"multiple values found at indexes ";
                        for(int i=0;i<m;i++)
                        { cout<<darr[i+1]<<" "; }
                        cout<<"select one index  ";
                        cin>>index2;
                        
                        }

                    y=1;
                    }
                    else 
                    {
                        cout<<"value not found";
                    }
                }
            }
            array[index2]=value1;
        }
        }
    
        if (b==4){return 0;}
    }
         if (c==9)                                   //swaping menu             
    {
        b=0;
        while(b!=4)
        {
        cout<<"1.swap by index,2.swap by value,3.back to main menu,4.exit";
        cin>>b;
        if(b==1){
            int w=0;
            while(w!=1){
            cout<<"enter the index you want to swap";
            cin>>index;
            if(index<count && index>0){
                value1=array[index-1];
                index1=index-1;
                w=1;
            }
            else 
            {
                cout<<"Index not found";
            }
            }
            int r=0;
            while(r!=1){
            cout<<"enter the index 2 you want to swap";
            cin>>index;
            if(index<count && index>0){
                value2=array[index-1];
                index2=index-1;
                r=1;
            }
            else 
            {
                cout<<"Index not found";
            }
            array[index2]=value1;
            array[index1]=value2;

            }           
        }
        if(b==2){
            int t=0,j=0,d[100];
            while(t!=1){
                cout<<"enter the value to swap";
                cin>>value;
                for(int i=0;i<count;i++)
                {
                    if(array[i]==value){
                        if(array[i]=value){
                            darray[j]=value;
                            d[j]=i;
                            j++;
                        }
                        if(j==1){
                        value1=darray[j-1];
                        index1=d[j-1];
                        }
                        if(j>1)
                        {
                            cout<<"value find at multiple indexes ";
                            for(int i=0;i<j;i++)
                            {cout<<d[j-1]<<"  ";}
                            cout<<"select one index   ";
                            cin>>index1;
                            cout<<"enter the value    ";
                            cin>>value1;
                        }
                    t=1;
                    }
                    else 
                    {
                        cout<<"value not found";
                    }
                }
            }
            int y=0,g=0,ga[100];
            while(y!=1)
            {
                cout<<"enter the value where you want to swap";
                cin>>value;
                for(int i=0;i<count;i++)
                {
                    if(array[i]==value){
                        if(array[i]=value){
                            darray[g]=value;
                            ga[j]=i;
                            g++;
                        }
                        if(g==1){
                        value2=darray[g-1];
                        index2=d[g-1];
                        }
                        if(g>1)
                        {
                            cout<<"value find at multiple indexes ";
                            for(int i=0;i<g;i++)
                            {cout<<ga[g-1]<<"  ";}
                            cout<<"select one index   ";
                            cin>>index2;
                            cout<<"enter the value    ";
                            cin>>value2;
                        }
                    t=1;
                    }
                    else 
                    {
                        cout<<"value not found";
                    }
                }           }
            array[index2]=value1;
            array[index1]=value2;
        }
    }
   }
   else if(c==10)
   {
    check=0;
   }
}
    else {
        cout<<"\n\n      Create list first     \n\n";
    }
}

    return 0;
}
