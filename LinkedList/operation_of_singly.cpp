#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_any_position(Node *&head, int val, int position)
{
    Node *newNode = new Node(val);
    if (position == 1)
    {
        insert_at_head(head, val);
    }
    else
    {
        if (position <= 0)
        {
            cout << "Invalid position" << endl;
            return;
        }

        Node *temp = head;
        for (int i = 1; i <= position - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int main()
{
    Node *head = NULL;
    while(true){
    cout << "Option:" << endl;
    cout << "1.Insert tail" << endl
         << "2.Insert Head" << endl
         << "3.Insert at any position" << endl
         << "4.Print Linked List" << endl
         << "-1.End operation "<< endl;
    int op;
    cin >> op;
    if (op == 1)
    {
        cout << "Input value:" << endl;
        int val;
        cin >> val;
        insert_at_tail(head, val);
    }
    else if (op == 2)
    {
        cout << "Input value:" << endl;
        int val;
        cin >> val;
        insert_at_head(head, val);
    }
    else if (op == 3)
    {
        cout << "Input value:" << endl;
        int val;
        cin >> val;
        cout << "Input position:" << endl;
        int position;
        cin >> position;
        insert_at_any_position(head, val, position);
    }
    else if (op == 4)
    {
        Node *temp = head;
        while (temp != NULL && temp->next != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
    else if(op==-1)break;
    else
    {
        cout << "Invalid option" << endl;
    }
    }

    return 0;
}
