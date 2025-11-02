/*#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node * next;
    
     Node(int value ){
        value = data ;
        next = NULL;
    }
};
class List{
    Node * head ;
    Node * tail;

    public :

    List(){
        head = tail = NULL;

    }

    void push_front(int value ){
        Node * newNode =new Node(value);
        if(head == NULL){   //if the head was empty
            head = tail = newNode ;
            return ;

        }
        else{
            newNode -> next  = head;
            head = newNode; 
        }
    }

    void PrintList(){
        Node * temp = head ;   //initlize the liklist first head 
        while(temp != NULL){
            cout<<temp->data <<"->";  //temparery ka data print ker do 
            temp = temp-> next;   //print kerna ka bad next pa move ker jao
        }
        cout<<"NULL"<<endl;
    }

};
int main(){
    List ll;
    ll.push_front(45);
    ll.push_front(55);

    ll.PrintList();
    return 0 ;

}


*/




/*#include <iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node * next;

    Node(int value ){
        data = value;
        next = NULL;

    }
};
class list{
    Node * head ;
    Node * tail ;

    public:

    list(){                   
        head = tail = NULL;
    }

    void push_front( int value ){
        Node * newNode = new Node (value );  //ek Node ha jo 
        if(head == NULL){
            head = tail = NULL;

        }
        else{
            newNode -> next = head;
            head = newNode;
        }

    }

    void printList(){
        Node * temp = head ;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp -> next;
        } 
        cout<<"NULL"<<endl;
    }

};
int main(){
    list ll;
    ll.push_front(45);
    ll.push_front(56);

    ll.printList();    

}*/


//Push Back to the linklist 

/*#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node * next;

    Node(int value){
        data = value ;
        next = NULL;
    }

};
class List{
    Node * head ;
    Node * tail;

    List(){
        head = tail = NULL;
    }

    void push_front(int value ){
        Node * newNode = new Node(value );
        if(head == NULL){
            head = tail = NULL;
        }
        else{
            newNode -> next = head;
            head = newNode;
        }

    }

    void push_back(int value){
        Node * newNode = new Node(value); //create the new Node 
        if(tail == NULL){
            tail = head = newNode ;
            
        }
        else{
            tail -> next = newNode ;
            tail = newNode;
        }
    }

    void printList(){
        Node * temp = head;
        while(temp == NULL){
            cout<<temp->data << "->";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;

    }

};
int main(){
    List ll;
    ll.push_back(45);
    ll.push_front(78);



} */




/*
#include <iostream>
using namespace std;
class Node {
    public:
    int data ;
    Node * next;

    Node(int value){
        data = value ;
        next = NULL;
    }

};
class List{
    Node * head ;
    Node * tail ;
    public :

    List(){
        head = tail = NULL;
    }

    void Push_front(int value ){  //Push the front in the linklist 
        Node * newNode = new Node(value );
        if(head == NULL){
            head = tail = NULL;
        }
        else{
            Node * newNode = head;
            head = newNode;
        }
    }

    void Push_back(int value){   //Push back in the linklist 
        Node * newNode = new Node(value);
        if(tail == NULL){
            head = tail = newNode;
        }
        else{
            tail -> next = newNode ;
            tail = newNode ;
        }
    }

    void printList(){   //Print the linklist 
        Node * temp = head;
        while( head != NULL){
            cout<<temp-> data <<"->";
            temp = temp ->next;

        }
        cout<<"NULL"<<endl;
    }

    void popFront(){
    if(head == NULL){
    cout<<"linklist is empty"<<endl;
    return ;
    }
    Node * temp = head;
    head = head -> next;

    temp -> next =  NULL;
    delete temp;

    }

    void pop_back 

};
int main(){
    List ll;
    ll.Push_back(56);
    ll.Push_back(78);

    ll.Push_front(45);
    ll.Push_front(2);

    ll.printList();

    return 0;
}


*/


/*#include <iostream>
using namespace std;
class Node{
    public :
    int data ;
    Node * next;

    Node(int value){
        data = value ;
        next = NULL;
        
    }


};
class List{
    Node * head ;
    Node * tail ;

    List(){
        head = tail = NULL;
    }

    void push_front(int value){  //push the value in the front 
        Node * newNode = new Node(value);
        if(head == NULL){
            head = tail = NULL;
        }
        else{
            Node * newNode = head ;
            head = newNode ;
        }


    }

    void pop_front(){
        if(head == NULL){    //first check the linklist is empty 
            cout<<"Lisnlist is Empty"<<endl;
            return ;   // if it was empty then out the program  

        }

        Node * temp = head ;   // head ko temp ma store kera lenga 
        head = head -> next;   // head ka next ma move keranga denga    NOTE=> next jo ki 2 node ka address ha 

        temp ->next  = NULL; // 1 node ka next ko null ker genga    TAki 1 node alag ho jay
        delete temp;
    }


    void pop_back(){

    }

    void printList(){
        

    }



};
int main(){

}*/



#include <iostream>
using namespace std;
class Node {
    
}
int main(){

}


