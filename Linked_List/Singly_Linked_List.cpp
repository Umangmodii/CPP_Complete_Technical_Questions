#include <iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }

        ~Node()
        {
            int value = this->data;

            if(this->next != NULL)
            {
                delete next;
                next = NULL;
            }

            cout << "Memory Free is : " << value << endl;
        }
};

// First Insert Data

void insertHead(Node *&head,int data)
{
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;
}

// Last Insert Data

void insertTail(Node *&tail, int data)
{
    Node *temp = new Node(data);

    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void postion(int position, int data, Node *&head)
{
    Node *temp = head;
    int count = 1;

    while(count < position - 1) //  1 < 2  = 2 + 1 = 3
    { 
        temp = temp->next;
        count++;
    }

    // Create a new Node

    Node *insertNode = new Node(data);

    insertNode->next = temp->next;

    temp->next = insertNode;
}

int main()
{
    Node *node = new Node(10);

    // cout << node->data << endl;
    // cout << node->next << endl;

     Node *head = node;
     Node *tail = node;
     print(head);

    insertHead(head,15); // Insert Data
    insertTail(tail,20);
    print(head);

    postion(3,40,head);
    print(head);

    print(head);

    return 0;
}