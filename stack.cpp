#include <iostream>
#include<assert.h>
using namespace std;

class Stack{

private:
    struct Node{
        int data;
        Node *next;
        };
    Node *head;
public:
    void push(int);
    int pop();
    bool isFull();
    bool isEmpty();

};

void Stack::push(int value)
{
    assert(!isFull());
    Node *temp=new Node;
    temp->data=value;
    temp->next=head;
    head=temp;
}
int Stack::pop()
{
    assert(!isEmpty());
    int result=head->data;
    Node *temp=head;
    head=head->next;
    delete temp;
    return result;//will return top value from the stack

}

bool Stack::isFull(){
    return false;
}

bool Stack::isEmpty()
{

    if(head!=NULL)
        return false;
    else
        return true;

}
int main()
{
    cout << "Hello world!" << endl;
    Stack s;
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    return 0;
}
