/*👉 Stack is a linear data structure that follows the LIFO (Last In, First Out) principle.
That means — the last element inserted into the stack is the first one to be removed.

🧠 Example:
Think of a stack of plates:
You put plates on top, and you remove plates from the top.

⚙️ Basic Operations:
push(x) → Add an element x to the top of the stack.
pop() → Remove the top element.
peek() / top() → See the top element without removing it.
isEmpty() → Check if the stack is empty.*/





//write the stack using the vector 

#include<iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;   //stack <dataType> nameOfTheStack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<"stack Element"<<st.top()<<endl;   //show the top element of the stack

    st.pop(); //remove the 40 

    cout<< "Print the size"<<st.size()<<endl; //print the size of the stack



    //Remove all the element form the stack
    



    //write the program to check the stack is empty or not 
    if(st.empty()){
    cout<<"Stack is Empty"<<endl;
    }
    else{
    cout<<"Stack is not Empty"<<endl;
    }


      
return 0;
}