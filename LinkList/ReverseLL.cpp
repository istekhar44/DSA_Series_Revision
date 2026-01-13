/*// Reverse the linklist 
#include<iostream>
using namespace std;
class Node {
    int data ;
    Node * next ;

    Node(int value){
        data = value ;
        next = NULL;

    }

};
class List{
    Node * head;
    Node * tail;

    public:
    List(){
        if(head = NULL){
            head = tail = NULL;
        }
        
    }

    void push_front(int value){
        Node * newNode = new Node(value);
        if(head == tail){
            head = tail = NULL;
        }
        else{
            Node * newNode = head ;
            head = newNode ;
        }

    }


    List * reverseList(List* head){  //code to reverse the linklist  
        List * prev = NULL;
        List * next = NULL ;
        List * curr =  head ;

        while ()
        {
            next = curr -> next ;   // Step 1: अगले node को store करें
            curr -> next = prev;  // // Step 2: current node का pointer उल्टा कर दें

            prev  = curr; // Step 3: prev को current पर ले जाएं
            curr = next;  // Step 4: curr को अगले node पर बढ़ाएं
        }
        return prev; // Step 5: prev अब नए head को point कर रहा होगा
        

    }

};



int main(){
    List ll;
    ll.push_front(45);
    ll.push_front(67);
    ll.push_front(78);

    
     
    

}*/


#include <iostream>
using namespace std;
class Node {
    public:
    Node * next ;
    int data ;

    Node (int value ){
        data = value ;
        next = NULL;

    }

};
class List{
    Node * head ;
    Node* tail;

    public:

    List(){
        if(head = NULL){
            head = tail = NULL;
        }
    }

    void push_front(int value){
        Node * newNode = new Node(value);
        if(head == tail ){
            head = tail = NULL;
        }
        else{
            Node * head = newNode ;
            head = newNode;

        }

    }


    void push_back(int value){
        Node * newNode = new Node(value);
        if(tail == NULL){
            head = tail = newNode ;
        }
        else{
            Node * tail = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
       if(head == NULL){
        cout<<"linklist is empty"<<endl;
       }
       Node * temp = head ;
       temp->data = NULL;
       head = head ->next;

       delete temp;
    }

    void reverseList(){

    }

    //Brut force approch to find the middle of the linklist 
    void Middle_of_list(){
        List * slow = head ;
        List * fast = head ;
        while ( fast != NULL && fast ->next !=  NULL){
            slow = slow-> next ;
            fast = fast -> next -> next;
        }
        return slow;
    }

    // detect the cycle in the and remove the cycle linklist 
    bool cycle_is_present(){
        List * slow = head ;
        List * fast = head ;
        while ( fast != NULL && fast ->next !=NULL ){
            slow = slow ->next ;
            fast = fast ->next ->next ;

        }
        return false //beacasue there is no cycle exist in the loop

    } 

    //there are the two question are form in the linklist 
    //retune the value at which the cycle is form 
    //remove the value at which the cycle is form

    void remove_the_value(){
        List* fast = head;
        List * slow = head;
        while (fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next ;
            slow = slow ->next ;

        }
        
    }

    //find the node at which the cycle is form in the linklist
    void find_point_cycle_is_form(){
        List * fast = head ;
        List * slow = head ;
        
        bool isCycle = false ;
        
        while (fast != NULL && fast -> next != NULL )  //logic of the cycle detection
        {
            fast = fast ->next ->next ;
            slow = slow ->next ;

            if(slow = fast ){
                isCycle = true ;
                break;
            }

        }
        if(!isCycle){
            return NULL;
        }
        slow = head ;
        while (slow != fast)
        {
            slow = slow -> next;
            fast = fast -> next;
        }
        return slow ;
        
        
    }
}


int main(){
    List ll;
    ll.push_front(67);
    ll.pop_front(67);
    return 0;

}


