#include<iostream>
using namespace std;
class Node
{
    public:
    int info;
    Node *next;
    Node (int info)
    {
        this->info=info;
        next=NULL;
    }
};
class SingleLinkedList
{ 
    public:
    Node *first;
    Node *last;
    static int count;
    SingleLinkedList()
    {
        first=NULL;
        last=NULL;
    }
    void setFirst(int info);
    void insertbegining(Node *nodeToInsert);
    void insertAtEnd(int info);
    void insertAtPos(int info,int pos);
    void display();
    void noOfNodes();
    void deleteAtBegining();
    void deleteAtEnd();
    void deleteAtAnyPosition(int pos);
    void deleteNodeOfValue(int value);
    void searchForANode(int value);
    void displayNthNode(int pos);
    void findMinMax();
};
int SingleLinkedList::count=0;
void SingleLinkedList::setFirst(int info)
{
    Node *newNode=new Node(info);
    if(first==NULL)
    {
        first=newNode;
        count++;
        return;
    }
    insertbegining(newNode);
}
void SingleLinkedList::insertbegining(Node *nodeToInsert)
{
    if(nodeToInsert==NULL||first==NULL)
    return;
    else
    {
        nodeToInsert->next=first;
        first=nodeToInsert;
        count++;
    }
}
void SingleLinkedList::insertAtEnd(int info)
{
    if(first==NULL||last==NULL)
    {
        setFirst(info);
        return;
    }
    else
    {
    Node *newNode=new Node(info);
    Node *node=first;
    while(node->next)
    {
        node=node->next;
    }
    node->next=newNode;
    count++;
    }    
}

void SingleLinkedList::insertAtPos(int info,int pos)
{
    if(pos>count+1)
    {
        cout<<"Position exceed max element"<<endl;
        cout<<"max position"<<count+1;
    }
    else if(pos==1)
    {
        setFirst(info);
    }
    else if(pos==count+1)
    {
        insertAtEnd(info);
    }
    else
    {
        Node *newNode=new Node(info);
        Node *node=first;
        int posCount=2;
        while(posCount<pos)
        {
            node=node->next;
            posCount++;
        }
        if(node->next!=NULL&&posCount==pos)
        {
                Node *temp=node->next;
                node->next=newNode;
                newNode->next=temp;
        }
        count++;  
    }
}
void SingleLinkedList::deleteAtBegining()
{
    if(first==NULL)
    {
        cout<<"List empty"<<endl;
        return;
    }
    else
    {
    first=first->next;
    count--;
    }
}
void SingleLinkedList::deleteAtEnd()
{
    Node *node=first; 
    Node *prev=NULL;
    if(node==NULL)
    {
        cout<<"List Empty"<<endl;
        return ;
    }
    else if(node->next==NULL)
    {
        first=NULL;
        count--;
        return ;
    }
    else
    {
        while(node->next)
        {
        prev=node;
        node=node->next;
        }
        prev->next=NULL;
        count--;
    }  
}
void SingleLinkedList::deleteAtAnyPosition(int pos)
{
    if(pos>count)
    {
        cout<<"Position exced count"<<endl;
        cout<<"MAX Position  "<<count<<endl;
        return;
    }
    if(pos==1)
    {
        deleteAtBegining();
        return;
    }
    else if(count==pos)
    {
        deleteAtEnd();
        return;
    }
    else
    {
        Node *node=first;
        int countPos=2;
        while(countPos<pos)
        {
            node=node->next;
        }
        node->next=node->next->next;
        count--;
        return;
    }
    
}
void SingleLinkedList::deleteNodeOfValue(int value)
{
    Node *node=first;
    int noOfNodeDeleted=0;
    if(node==NULL)
    {
        cout<<"List Empty"<<endl;
        return;
    }
    while(first->info==value)
    {
        deleteAtBegining();
        noOfNodeDeleted++;
    }
    node=first->next;
    while(node!=NULL)
    {
        if(node->info==value)
        {
             noOfNodeDeleted++;
             node->next=node->next->next;
             node=node->next;
             count--;
        }
        else
        {
             node=node->next;
        }
    }
    cout<<"TotalNodeDelete  "<<noOfNodeDeleted<<endl;
}
void SingleLinkedList::searchForANode(int value)
{
    Node *node=first;
    int countPos=1;
    if(node==NULL)
    {
        cout<<"List is empty";
    }
    while(node!=NULL)
    {
        if(node->info==value)
        {
            cout<<"Node present at Position: "<<countPos<<endl;
            countPos++;
            node=node->next;
        }
        else
        {
            node=node->next;
            countPos++;
        } 
    }
}
void SingleLinkedList::displayNthNode(int pos)
{
    Node *node=first;
    int posCount=1;
    if(first==NULL)
    {
        cout<<"List Empty"<<endl;
        return;
    }
    else if(pos>count)
    {
        cout<<"Value exceed total count"<<endl;
        cout<<"Max count"<<count;
    }
    else
    {
        while(node!=NULL)
        {
            if(posCount==pos)
            {
                cout<<"Element at given positon is: "<<node->info<<endl;
                node=node->next;
                return;
            }
            else
            {
                node=node->next;
                posCount++;
            }
        } 
    } 
}
void SingleLinkedList::findMinMax()
{
    Node *node=first;
    int min=INT_MAX;
    int max=INT_MIN;
    if(node==NULL)
    {
        cout<<"List Empty"<<endl;
        return;
    }
    while(node!=NULL)
    {
        if(node->info>max)
        max=node->info;
        if(node->info<min)
        min=node->info;

        node=node->next;
    }
    cout<<"MAX Element  "<<max<<endl;
    cout<<"MIN Element  "<<min<<endl;
}
void SingleLinkedList::display()
{
    Node *node=first;
    while(node!=NULL)
    {
        cout<<node->info<<"-->";
        node=node->next;
    }
    cout<<"NULL";
}
void SingleLinkedList::noOfNodes()
{
    cout<<"Total Node\t"<<count<<endl;
}
int main()
{
    SingleLinkedList list;
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
        cout<<"7.Delete Node of a value"<<endl;
        cout<<"8.Search For a Node"<<endl;
        cout<<"9.Find Min and Max in List"<<endl;
        cout<<"10.Count Total Node"<<endl;
        cout<<"11.Display the nth Node"<<endl;
        cout<<"12.Display"<<endl;
        cout<<"\nEnter Your Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
        {
            int info;
            cout<<"\nEnter an Element:";
            cin>>info;
            list.setFirst(info);
        }
        break;
        case 2:
        {
            int info;
            cout<<"\nEnter an Element:";
            cin>>info;
            list.insertAtEnd(info);
        }
        break;
        case 3:
        {
            int info;
            int pos;
            cout<<"\nEnter an Element:\t";
            cin>>info;
            cout<<"Enter Position\t";
            cin>>pos;
            list.insertAtPos(info,pos);
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
            int pos=0;
            cout<<"Delete AT position  ";
            cin>>pos;
            list.deleteAtAnyPosition(pos);
        }
        break;
        case 7:
        {
            int value;
            cout<<"Enter value to be delete  ";
            cin>>value;
            list.deleteNodeOfValue(value);
        }
        break;
        case 8:
        {
            int value;
            cout<<"Enter Value to be search  ";
            cin>>value;
            list.searchForANode(value);
        }
        break;
        case 9:
        {
            list.findMinMax();
        }
        break;
        case 10:
        {
            list.noOfNodes();
        }
        break;
        case 11:
        {
            int n;
            cout<<"Enter Position  ";
            cin>>n;            
            list.displayNthNode(n);
        }
        break;
        case 12:
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