//Implemementaion of the stack using the array/Vector/linklist 
//Because the vector is the dynamic implementaion no limit on the data 
//what is the stack =>  it is the last in first out 


//implementation of the stack using the vector
#include <iostream>
#include <vector>
using namespace std;
class stack{

  vector<int> v;   
  
  public:

  void push(int value){  //Push the value in the stack
    v.push_back(value);  //Use the back because the vector push in the last 
  }

  void pop(){  //remove the element from the vecotor
    v.pop_back();  //We know the vector know the last index or the first index of the vector 
  }

  int top(){
    return  v[v.size()-1];   // return the top element [last - 1]
  }

  bool empty(){
    return v.size() == 0;  //tab retun ker data jab size of the vector = 0 ho jay
    
  }
  

};

int main(){ 
  stack s;
  s.push(56);
  s.push(67);
  s.push(78);

  while(!s.empty()){  //run the loop when the stack is empty  
    cout<<s.top()<<" ";
    s.pop();
  }

  return 0 ;

}




//Implementaion of the stack using the array
#include <iostream>
#include <vector>
using namespace std;
class stack{
  vector<int>v;
  public:

  void push(int value){
    v.push_back(value);
  }

  void pop(){
    v.pop_back();
  }

  int top(){
    return v[v.size()-1];
  }

  bool empty{
    return v.size() == 0;
  }

};
int main(){
  stack st;
  st.push(34);


}


//implementtation of the stack using the vector
#include<iostream>
#include<vector>
using namespace std;
class stack{
  public:
  void push(int value){
    pus  
  }

};

int main(){

   
return 0;
}
 



//Impementation of the stack using the linklist 
#include <iostream>
#include <list>
class{
  list<int>ll;
  public:
  int main(){
    int value o index vauer of d
  }
    

};
int main(){
  stack 
}