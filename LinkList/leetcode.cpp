//write the code to merge the linklist 
#include <iostream>
using namespace std;
class Node{
    public:
    Node * next ;
    int data ;

    Node(int value ){
        data = value ;
        next = NULL;
        
    }

};
class List {
    Node * head ;
    Node * tail ;
    public:
    
    List(){
        head = tail = NULL;
    }

    void push_front(int value){
        Node * newNode = new Node(value);
        if(head == NULL){
            head = tail = NULL;
        }
        else{
            Node * newNode = head ;
            head = newNode ;
        }

    }

    void printLinklist(){
        Node * temp = head ;
        if(head == NULL ){
            cout<<"linklist is Empty"<<endl;
        }
        while( head == NULL){
            cout<<temp-> data ;
            head = head -> next ;
        }
        
    }


    //Question = there is given a linklist which is the cycle linklist return the vlaue at which the cycle is form 
    void return_value_at_which_cycle(){
        List * fast = head  ;
        List * slow = head  ;

        bool isCycle = false ;

        while(fast != NULL && fast -> next !=NULL){
            fast = fast ->next -> next ;
            slow = slow -> next ;

            while(slow = fast){
                return NULL;
            }
        }

    }

    //Merge the two shorted list 
    void merge(h1,h2){
        if(head1-> value <= h2 ->value ){  //there is given two linklist head value 
            head1 -> next = merge(head1-> next , head2)
            return head1;

             
        }
        else{
            head2 -> next = merge(head1, head2 -> next)
        }

        
    }

    //copy list with random pointer 
    poi




};
int  main(){
    List ll;
    ll.push_front(23);

    return 0;

}