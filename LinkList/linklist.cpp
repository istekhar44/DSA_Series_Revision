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



#include<iostream>
using namespace std;
int main(){

   
return 0;
}