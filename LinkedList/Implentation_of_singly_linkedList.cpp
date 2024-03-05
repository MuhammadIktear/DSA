#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int val;
    Node* next;
    Node(int data)
    {
        val=data;
        this->next=NULL;
    }
};
void print_linked_list(Node *head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}
int main()
{
    Node* head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    head->next=a;
    a->next=b;
    print_linked_list(head);

}