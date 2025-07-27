//Vector is the Dynamic Array from the Standard Template Library(STL).
//It Automatically grow and shrink according to insert or delete the element .
//Stores elements in contiguous memory
//Fast random access (like arrays)
//Supports many methods: push_back(), pop_back(), size(), clear(), etc.

    //   vector define => Vector<type> name ; 
    
    
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>name;   // first Way to create the vector

    vector<int> hellow= {1,2,3,4};  // second Way to create the vector 
    cout<<hellow[0]<<endl;
    cout<<hellow[3]<<endl;
    cout<<hellow[4]<<endl;


    vector<int>khelo(3,4);    // (3 <= size of vector , 4 <= all pace have four)
    for(int i : khelo){
        cout<<i<<endl;   
    }

    
 return 0;
}*/


#include<iostream>
#include<vector>
using namespace std;
int main(){



    vector<char>name={'a','b','c','d'};   //Char Vector 
    for(char i : name){
        cout<<i<<endl;
    }
    cout<<name[3]<<endl;  //Print the 3 Element of the vector
    cout<<name.size()<<endl;    //Print the size of the vector 





    vector<int>cube;   //vacent vector 
    cube.push_back(12);  //Push the element in the vector
    cube.push_back(14);
    cube.push_back(18);
    cout<<"sizeof "<<cube.size()<<endl;     //Print the vector using for each loop
    for(char value : cube){
       cout<<value<<endl; 
    }





 



  
   
return 0;
}