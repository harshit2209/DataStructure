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
    void display();
    void noOfNodes();
    void deleteAtBegining();
    void deleteAtEnd();
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
      last->next=first;
      first->prev=last;
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
        last->next=first;
        first->prev=last;
        count++;
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
        first->prev=last;
        last->next=first;
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
       first->prev=last;
       last->next=first;
       count--;
    }  
}

void DoubleLinkedList::display()
{
    Node *node=first;
    int countDisplay=0;
    int countNode=0;
    while(node!=NULL&&countDisplay<3)
    {
        if(countNode<count)
        {
            cout<<node->info<<"-->";
            node=node->next;
            countNode++;
        }
        else
        {
            countDisplay++;
            countNode=0;
            cout<<endl;
        }
    }
    //cout<<"NULL";
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
        cout<<"3.Delete At Begining"<<endl;
        cout<<"4.Delete At End"<<endl;
        cout<<"5.Count Total Node"<<endl;
        cout<<"6.Display"<<endl;
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
          list.deleteAtBegining();
        }
        break;
        case 4:
        {
            list.deleteAtEnd();
        }
        break;
        case 5:
        {
             list.noOfNodes(); 
        }
        break;
        case 6:
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