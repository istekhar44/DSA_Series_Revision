//Write the programe using the (STL) standard Template Library 

#include<iostream>
#include <list>
using namespace std;
int main(){
    list<int>ll; //Create the linklist interger type

    ll.push_front(45);
    ll.push_front(54);

    ll.push_back(67);
    ll.push_back(78);

    ll.pop_front();
    ll.pop_back();

    

    


}