//Queue is the fifo first in first out contain the ( front , rear)
// push -> Rear ( Enqueue => push the element in the back of the queue)
//pop -> front  ( Dequeue => delete the element in the fornt of the queue)

// front() => head-> data 
// push()  => insert data at tail of linklist 
// pop()   => delete data from head of linklist


//implementation of the queue using linklist 
#include <iostream>
using namespace std;

class Node{
public: 
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Queue{
    Node *head; // front of queue
    Node *tail; // rear of queue

public:
    Queue(){
        head = tail = NULL;
    }

    bool empty(){
        return head == NULL;
    }

    void push(int data){
        Node *newNode = new Node(data);

        if(empty()){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop(){
        if(empty()){
            cout << "Queue is empty\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;

        if(head == NULL)   // when last node removed
            tail = NULL;
    }

    int front(){
        if(empty()){
            cout << "Queue is empty\n";
            return -1;
        }
        return head->data;
    }
};

int main(){
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
