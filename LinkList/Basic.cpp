#include<iostream>
using namespace std;
class Node {
    public:
    int data ;
    Node * next ;

     Node(int value){
        data = value;
        next = NULL;
    }
};
class List{
    public:
    Node * head ;
    Node * tail;

 List(){
    head= tail = NULL;
 }

     //Push the front of the Node 
     void pushFront( int value ){
        Node * newNode = new Node(value);
        if(head == NULL){
            head = tail = NULL;
    
        }else{
            Node * newNode = head;
            head = newNode;
        }
    }    

    //Push back in the linklist 
    void pushBack(int value){
        Node * newNode = new Node(value);
        if( tail == NULL){
            head = tail = newNode;
        }else{
            Node * tail= newNode ;
            tail = newNode;
    
        }
    }


    //Print the linkList 
    void printLL(){
        Node * temp = head ;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp= temp -> next ;
        }
        cout<<endl;
    }


   //popFront of the linklist 
   void popFront(){
       if(head == NULL){
           cout<<"linklist is empty";
       }
   
       Node * temp = head ;
       temp -> next = NULL;
   
       head = head -> next ;
       delete temp;
    }


    void popBack(){
        if(head == NULL){
            cout<<"LinkList is Empty";
            return ;
        }

        Node *temp = head ;
        while ( temp -> next != NULL){
            temp -> next = temp;
        }
        temp -> next = NULL;
        delete tail;
        tail = temp;
    }


    // Insert node at given position
    void pushPosition(int value, int pos) {
        if (pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }
    
        // If inserting at beginning
        if (pos == 0) {
            pushFront(value);
            return;
        }
    
        Node* temp = head;   // Start from head
    
        // Traverse to (pos-1)th node
        for (int i = 0; i < pos - 1; i++) {
    
            if (temp == NULL) {   // Position greater than length
                cout << "Position out of range" << endl;
                return;
            }
    
            temp = temp->next;
        }
    
        // If temp becomes NULL
        if (temp == NULL) {
            cout << "Position out of range" << endl;
            return;
        }
    
        Node* newNode = new Node(value);
        newNode->next = temp->next;  //connection of newnode and temp
        temp->next = newNode;
    }


    //Search in the LinkList 
    void SearchLL(int key){
        int idx = 0;
        
    }


};
int main(){
return 0;
}