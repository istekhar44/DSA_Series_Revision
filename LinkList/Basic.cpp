#include <iostream>
using namespace std;
class Node {
    public:
    int data ;
    Node * next;

    Node(int value ){
        data = value;
        next = NULL;

    }
};
class List{
    Node * head ;
    Node * tail ;

    List(){
        head = tail = NULL;
    }

    void push_front(int value ){  //Push the value in the front of the linklist 
        Node * newNode = new Node(value);
        if(head == NULL){
            head = tail = NULL;
        }
        else{
            Node * newNode = head ;
            head = newNode ;
        }
    }

    void push_back(int value){  //Push the value in the back of the linklist 
        Node * newNode = new Node(value);
        if(tail == NULL){
            head = tail = newNode;
        }
        else{
            Node * tail = newNode ;
            tail = newNode;
        }
    }



    void pop_front(){   //Delete the value front of the  linklist 
        if(head == NULL){
            cout<<"Linklist is empty"<<endl;
            return ;
        }

        Node * temp = head ;  //Phala head ko temp ma store ker do  
        temp ->next = NULL;    //1st node ka next ko NULL bana do

        head = head  -> next;   //1 node ka next ko null bna dia
        delete temp;

    }


    

    void pop_back(){   //delete the element from the last of the linklist 
        if(tail == NULL){
            cout<<"LinkList is Empty"<<endl;
            return ;
        }
        else {

            Node * tail ;
        }
    }





};
int main(){

}



//Write the linklist code 
#include <iostream>
using namespace std;
int main(){
    
}

