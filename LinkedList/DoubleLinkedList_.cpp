//Easy
#include <iostream>
using namespace std;

class Node
{
    public:
    Node *next;
    Node *prev;
    int value;
    Node(int value);
   
};
Node:: Node(int value)
{
   this->value=value;
   prev=NULL;
   next=NULL;     
}
class DoublyLinkList
{
    public:
        Node *head;
        Node *tail;
        
        DoublyLinkList()
        {
            head = NULL;
            tail = NULL;
        }
        
        void setHead(Node *node)
        {
            if(head==NULL)
            {
            head=node;
            tail=node;
            return;
            }
            insertBefore(head,node);
        }
        void setTail(Node *node)
        {
            if(tail==NULL)
            {
                setHead(node);
                return;
            }
            insertAfter(tail,node);
        }
        void .(Node *node,Node *nodeToInsert)
        {
            if(nodeToInsert==head&&nodeToInsert==tail)
                return;
            remove(nodeToInsert);           
            nodeToInsert->prev=node->prev;
            nodeToInsert->next=node;
            if(node->prev==NULL){
                head=nodeToInsert;
            }else{
                node->prev->next=nodeToInsert;
            }    
        node->prev=nodeToInsert;    
        }
        void insertAfter(Node *node,Node *nodeToInsert)
        {
            if(nodeToInsert==head&&nodeToInsert==tail)
                return;
            remove(nodeToInsert);
            nodeToInsert->next=node->next;
            nodeToInsert->prev=node;
            if(node->next==NULL)
                tail=nodeToInsert;
            else
                node->next->prev=nodeToInsert;
            node->next=nodeToInsert;
        }
        void insertAtPosition(int position,Node *nodeToInsert)
        {
              if(position==1)
              {
                  setHead(nodeToInsert);
                  return;
              }
              Node *node=head;
              int currentPosition=1;
              while(node!=NULL&&currentPosition++!=position)
              {
              node=node->next;
              if(node!=NULL)
                insertBefore(node,nodeToInsert);
              else
                setTail(nodeToInsert);
              }
        }
        // void removeNodeWithValue(int value)
        // {
        //     Node *node;
        //     while(node!=NULL)
        //     {
        //         Node *nodeToRemove=node;
        //         node=node->next;
        //         if(nodeToRemove->value==value)
        //             remove(nodeToRemove);
        //     }
                
        // }
        void remove(Node *node)
        {
            if(node==head)
            head=head->next;
            if(node==tail)
            tail=tail->prev;
            removeNodeBinding(node);
        }
        // bool containNodeWithValue(int value)
        // {
        //     Node *node=head;
        //     while(node!=NULL&&node->value!=value)
        //         node=node->next;
        //     return node!=NULL;    
        // }
        void removeNodeBinding(Node *node)
        {
            if(node->prev!=NULL)
                node->prev->next=node->next;
            if(node->next!=NULL)
                node->next->prev=node->prev;
            node->prev=NULL;
            node->next=NULL;
        }
        void traverse()
        {
            Node *node=head;
            while(node!=NULL)
            {
            cout<<node->value<<"\t";
            node=node->next;
            }
        }
};

//My driver program
int main()
{
    DoublyLinkList list;
    int operation;
    cout<<"Enter 1 to Insert in begining\n";
    cout<<"Enter 2 to Insert at End\n";
    cout<<"Enter 3 to Insert at position\n";
    cout<<"Enter 4 to Remove node with value\n";
    cout<<"Enter 5 Search node with value\n";
    cout<<"Enter 6 traverse\n";
    cout<<"Enter Any Other value to Exit\n";

  
    while(1)
    {  
    cout<<"Enter your choice\n"<<endl;
    cin>>operation;
    switch(operation)
    {
        case 1:
        {
            int value;
            cout<<"Enter value\n";
            cin>>value;
           Node *node=new Node(value);
            list.setHead(node);
        }
        break;
        case 2:
        {
            int value;
            cout<<"Enter value\n";
            cin>>value;
            Node *node=new Node(value);
            list.setTail(node);
        }
        break;
        case 3:
        {
            int value;
            cout<<"Enter value\n";
            cin>>value;
            int position;
            cout<<"Enter position\n";
            cin>>position;
            Node *node=new Node(value);
            list.insertAtPosition(position,node);
        }
        break;
        case 4:
        {
 
        }
        break;
        case 5:
        {

        }
        break;
        case 6:
        {
            list.traverse();
        }
        break;
        default:
        exit(1);
    }
    }
    return 0;
}
