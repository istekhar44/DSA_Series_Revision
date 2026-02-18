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


    //Insert the value in the LinkList 
    void insertValue(int value, int &  position){
        Node * newNode = new Node(value);

        if( position < 0 ) {   //Less than the zero (Simple Return )
            cout<<"Invalid Positon is Given "<<endl;
            return ;

        } 
        if(position = 0 ){  //this is the case of push front 

        } 
        
        Node * temp = head ;
        for(int i = 0 ; i <= position ; i++){
            temp = temp -> next;

        }
        Node * newNode  = temp ->next ;
        temp -> next = new Node ;

    }




    //Insert the Node in the given position
    void pushPosition(int value, int pos){
        if()
    }


}
int main(){
return 0;
}