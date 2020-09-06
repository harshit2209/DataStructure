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
    void display();
    void noOfNodes();
    void deleteAtBegining();
    void deleteAtEnd();
};
int SingleLinkedList::count=0;
void SingleLinkedList::setFirst(int info)
{
    Node *newNode=new Node(info);
    if(first==NULL)
    {
        first=newNode;
        last=newNode;
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
        last->next=first;
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
    last->next=first;
    count--;
    }
}

void SingleLinkedList::display()
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
            int info;
            cout<<"\nEnter an Element:";
            cin>>info;
            list.setFirst(info);
        }
        break;
        case 3:
        {
            list.deleteAtBegining();
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
        }
    }
}