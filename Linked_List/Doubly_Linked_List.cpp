#include <iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }

        ~Node()
        {
            int value = this->data;

            while(next !=  NULL)
            {
                delete next;
                next = NULL;
            }
                cout << "Memory Free is : " << value << endl;
        }
};

//traversing a linked list
void print(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    cout << endl;
}

int getlength(Node *head)
{
    int length = 0;
    Node *temp = head;

    while(temp != NULL)
    {
        length++;
        temp = temp->next;
    }

        return length;
}

void inserthead(Node *&tail, Node *head,int data)
{
    if(head == NULL)
    {
        Node * temp = new Node(data);

        head = temp;
        tail = temp;
    }
    
    else
    {
        Node * temp = new Node(data);

        temp->next = head;
        temp->prev = temp;

        head = temp;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    // print in Head
    print(head);
    cout << getlength(head);

    inserthead(tail,head,10);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl;

    return 0;
}