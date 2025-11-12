// Reverse the linklist 
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

    
     
    

}


#include <iostream>
using 