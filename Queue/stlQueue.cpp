//Queue Implementation of the stl
/*#include <iostream>
#include <queue>
using namespace std;
int main(){
     queue<int> q;
     q.push(1);
     q.push(2);
     q.push(3);

     while (!q.empty()){
        cout<< q.front()<<" ";
        q.pop();
        
     }
     cout<<endl;
     
     return 0;
     
}*/

//Deque is double ended queue
//It is a STL container that allows insertion and deletion of elements from both ends (front and back).
#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3); //123

    dq.push_front(4);
    dq.push_front(5);
    dq.push_front(6);

    cout<<dq.front()<< " "<<dq.back()<<endl;


    return 0;
}


