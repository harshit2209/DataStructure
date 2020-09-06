#include<iostream>
#include<string>
using namespace std;

template <typename T>
class Node
{
    public:
    Node *next;
    T value;
    Node(T value)
    {
        this->value=value;
        next=NULL;
    }
};

template <typename T>
class SortedSingleLinkedList
{
    public:
    static int count;
    Node<T> *first;
    SortedSingleLinkedList()
    {
        first=NULL;
    }
    void setHead(Node<T> *node);
    void display();
    void noOfNode();
    void insert(T value);
};
template <typename T>
int SortedSingleLinkedList<T>::count=0;
template <typename T>
void SortedSingleLinkedList<T>::insert(T value)
{
    Node<T> *newNode=new Node<T>(value);
    Node<T> *node=first;
    if(node==NULL)
    {
        setHead(newNode);
        count++;
        return;
    }
    else if(node->value>value)
    {
        newNode->next=node;
        first=newNode;
        count++;
        return;
    }
    else
    {
        Node<T> *prev=node;
        node=node->next;
        while(node!=NULL&&node->value<value)
        {
            prev=node;
            node=node->next;
        }
        newNode->next=node;
        prev->next=newNode;
        count++;
    }
}
template <typename T>
void SortedSingleLinkedList<T>::setHead(Node<T> *node)
{
    first=node;
}

template <typename T>
void SortedSingleLinkedList<T>::noOfNode()
{
    cout<<"Total Number Of nodes:"<<count;
}

template <typename T>
void SortedSingleLinkedList<T>::display()
{
    Node<T> *node=first;
    while(node)
    {
        cout<<node->value<<"-->";
        node=node->next;
    }
    cout<<"NULL";
}
int main()
{
    SortedSingleLinkedList<int> list;
    int ch;
    while(1)
    {
        cout<<"\n**** MENU ****"<<endl;
        cout<<"1.Insert"<<endl;
        cout<<"2.Count Total Node"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"\nEnter Your Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
        {
            int value;
            cout<<"Enter the value:";
            cin>>value;
            list.insert(value);
        }
        break;
        case 2:
        {
            list.noOfNode();
        }
        break;
     
        case 3:
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