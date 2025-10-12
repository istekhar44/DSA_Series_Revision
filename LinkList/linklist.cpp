/*#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int value ){
        data = value;
        next = NULL;
    }


};
class List {
    Node * head ;
    Node * tail ;
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return; 
        }
        else{
            newNode -> next = head;
            head = newNode ;

        }
    }
    void printLL(){
        Node* temp = head ;
        while (temp != NULL){
            cout<<temp<< " ";
            temp = temp-> next;
        }
        cout<<"NULL"<<endl;
    }

};

int main(){
    List ll;

    ll.push_front(5);
    ll.push_front(6);
    ll.push_front(9);   

    return 0;



}*/

//There are the four function in the linklist 
//push_front => this create the new node in the front of the linklist   and requide to update the head pointer of the linklist
//push_back  => this create the new node in the back of the linklist    ans requide to update the null pointe of the linklist 
//pop_front  => this delete the front node of the linklist 
//pop_back   => this delete the back node of the linklist 



/*#include <iostream>
using namespace std ;
class Node {
    public :
    int data ;
    Node * next ;

    Node(int value ){
        data = value ;
        next = NULL;
    }
};
class List{
    Node *head ;
    Node *tail;

    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            return;

        }
        else{
            newNode -> next = head;
            head = newNode;

        }
    }

    void printLL(){
        Node *temp = head;
        while ( head == NULL){
            cout << temp << endl;
            temp = temp -> next;
        }
        cout<<NULL<<endl;
    }


}
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(3);
    ll.push_front(4);


    int linklist = printLL();
    cout<<linklist<<endl;

    printLL();


}*/

#include <iostream>
using namespace std;
class Node{
    
}
int main(){

}
