#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
int main()
{
    int n;
    cout<<"Enter the element"<<endl;
    cin>>n;
    Node* head=NULL;
    Node* newNode=NULL;
    Node* ptr=NULL;

    for(int i=0; i<n; i++)
    {
        newNode=new Node();
        cin>>newNode->data;
        newNode->next=NULL;
        if(head==NULL)
        {
            head=newNode;
        }
        else{
            ptr->next=newNode;
        }
        ptr=newNode;
    }
    cout<<"The data element in a single linked list "<<endl;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
    int x;
    cout<<"Enter the search item"<<endl;
    cin>>x;

    newNode=new Node();
    cin>>newNode->data;
    newNode->next=NULL;

    ptr=head;
    while(ptr!=NULL){
    if(ptr->data==x){
        newNode->next=ptr->next;
        ptr->next=newNode;
        break;
    }
    ptr=ptr->next;
  }
  ptr=head;
  while(ptr!=NULL)
  {
    cout<<ptr->data<<"  ";
    ptr=ptr->next;

  }
}
