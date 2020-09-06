#include<iostream>
using namespace std;
class Node
{
    public:
    int info;
    Node *next;
    Node *prev;
    Node (int info)
    {
        this->info=info;
        next=NULL;
        prev=NULL;
    }
};
class DoubleLinkedList
{ 
    public:
    Node *first;
    Node *last;
    static int count;
    DoubleLinkedList()
    {
        first=NULL;
        last=NULL;
    }
    void setFirst(int info);
    void insertbegining(Node *nodeToInsert);
    void setlast(int value);
    void insertAtEnd(Node *nodeToInsert);
    void insertAtPos(int info,int pos);
    void display();
    void noOfNodes();
    void deleteAtBegining();
    void deleteAtEnd();
    void deleteAtAnyPosition(int pos);   
};
int DoubleLinkedList::count=0;

void DoubleLinkedList::setFirst(int value)
{
    Node *newNode=new Node(value);
    if(first==NULL&&last==NULL)
    {
        first=newNode;
        last=newNode;
        count++;
        return;
    }
    insertbegining(newNode);
}
void DoubleLinkedList::insertbegining(Node *nodeToInsert)
{
    if(nodeToInsert==NULL||first==NULL)
    return;
    else
    {
      nodeToInsert->next=first;
      first->prev=nodeToInsert;  
      first=nodeToInsert;
      count++;
    }
}
void DoubleLinkedList::setlast(int value)
{
     Node *newNode=new Node(value);
     if(last==NULL&&first==NULL)
     {
         first=newNode;
         last=newNode;
         count++;
         return;
     }
     insertAtEnd(newNode);
}
void DoubleLinkedList::insertAtEnd(Node *nodeToInsert)
{
    if(nodeToInsert==NULL||last==NULL)
    return;
    else
    {
        last->next=nodeToInsert;
        nodeToInsert->prev=last;
        last=nodeToInsert;
        count++;
    } 
}
void DoubleLinkedList::insertAtPos(int pos,int value)
{
    Node *node=first;
    int countPos=1;
    if(first==NULL)
    {
        cout<<"List Empty"<<endl;
        return;
    }
    else if(pos>count+1)
    {
        cout<<"Position exceed maximum count Max position  "<<count+1;
        return;
    }
    else
    {
        if(pos==countPos)
        setFirst(value);
        else if(pos==count+1)
        setlast(value);
        else 
        {
            Node *nodeToInsert=new Node(value);
            Node *prev=node;
            node=node->next; 
            countPos++;
            while(node!=NULL)
            {
                if(countPos==pos)
                {
                    nodeToInsert->prev=prev;
                    nodeToInsert->next=node;
                    node->prev=nodeToInsert;
                    prev->next=nodeToInsert;
                    count++;
                    return;
                }
                else
                {
                    prev=node;
                    node=node->next;
                    countPos++;
                }
                
            }
        }
    }
}

void DoubleLinkedList::deleteAtBegining()
{
    Node *node=first;
    if(node == NULL)
    {
        cout<<"List empty";
    }
    else
    {
        node->next->prev=NULL;
        first=node->next; 
        count--;
    }
}
void DoubleLinkedList::deleteAtEnd()
{
    Node *nodefst=first;
    Node *nodelst=last;
    if(first==NULL)
    {
        cout<<"List Empty";
        return;
    }
    else
    {
       last->prev->next=NULL;
       last=last->prev;
       count--;
    }  
}
void DoubleLinkedList::deleteAtAnyPosition(int pos)
{
    Node *node=first;
    int countPos=1;
    if(first==NULL)
    {
        cout<<"List Empty";
        return;
    }
    else if(pos>count)
    {
        cout<<"Max position exceed Max position: "<<count<<endl;
    }
    else if(pos==1)
    {
       deleteAtBegining();
    }  
    else if(pos==count)
    {
        deleteAtEnd();
    }
    else
    {
         Node *prev=node;
         node=node->next;
         countPos++;
        while(node!=NULL)
        {
            if(countPos==pos)
            {
                prev->next=node->next;
                node->next->prev=prev;
                node->prev=NULL;
                node->next=NULL;
                return;
            }
            else
            {
                prev=node;
                node=node->next;
                countPos++;
            }
            
        }
    }
    
}
void DoubleLinkedList::display()
{
    Node *node=first;
    while(node!=NULL)
    {
        cout<<node->info<<"-->";
        node=node->next;
    }
    cout<<"NULL";
}
void DoubleLinkedList::noOfNodes()
{
    cout<<"Total Node\t"<<count<<endl;
}
int main()
{
    DoubleLinkedList list;
    int ch;
    while(1)
    {
        cout<<"\n**** MENU ****"<<endl;
        cout<<"1:INSERT At Begining"<<endl;
        cout<<"2:Insert At End"<<endl;
        cout<<"3.Insert AT position"<<endl;
        cout<<"4.Delete At Begining"<<endl;
        cout<<"5.Delete At End"<<endl;
        cout<<"6.Delete At Any Position"<<endl;
        cout<<"7.Count Total Node"<<endl;
        cout<<"8.Display"<<endl;
        cout<<"\nEnter Your Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
        {
            int value;
            cout<<"Enter the Node value"<<endl;
            cin>>value;
            list.setFirst(value);
        }
        break;
        case 2:
        {
            int value;
            cout<<"Enter the Node value"<<endl;
            cin>>value;
            list.setlast(value);
        }
        break;
        case 3:
        {
           int value;
           int pos;
           cout<<"Enter the value"<<endl;
           cin>>value;
           cout<<"Enter the position"<<endl;
           cin>>pos;
           list.insertAtPos(pos,value);
        }
        break;
        case 4:
        {
          list.deleteAtBegining();
        }
        break;
        case 5:
        {
            list.deleteAtEnd();
        }
        break;
        case 6:
        {
            int pos;
            cin>>pos;
            list.deleteAtAnyPosition(pos);
        }
        break;
        case 7:
        {
             list.noOfNodes(); 
        }
        break;
        case 8:
        {
             list.display();
        }
        break;
        default:
        {
            return 0;
        }
        break;
        }
    }
}