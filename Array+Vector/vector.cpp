//Vector is the Dynamic Array from the Standard Template Library(STL).
//It Automatically grow and shrink according to insert or delete the element .
//Stores elements in contiguous memory
//Fast random access (like arrays)
//Supports many methods: push_back(), pop_back(), size(), clear(), etc.

    //   vector define => Vector<type> name ; 




    /*| Function         | Description                                               |
| ---------------- | --------------------------------------------------------- |
| `push_back(val)` | Adds an element to the end of the vector                  |
| `pop_back()`     | Removes the last element of the vector                    |
| `size()`         | Returns the number of elements                            |
| `capacity()`     | Returns the size of the storage space                     |
| `empty()`        | Checks if the vector is empty                             |
| `clear()`        | Removes all elements                                      |
| `resize(n)`      | Resizes the vector to contain `n` elements                |
| `at(index)`      | Access element at a specific position (with bounds check) |
| `front()`        | Returns the first element                                 |
| `back()`         | Returns the last element                                  |
| `begin()`        | Returns iterator to the first element                     |
| `end()`          | Returns iterator to the end (after the last element)      |
*/
    
    
#include<iostream>
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
}









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
    cube.pop_back();    //DElete the element from the back
    for(char value : cube){
       cout<<value<<endl; 
    }


    //Exor of the two number give the zero  eg1=> 2^2= 0    eg2=> n^0 = n

    /*// logic to find the unique no in the array
    int ans = 0;
    int nums;
    for(int value : nums){
        ans = ans ^ nums;
    }
    return ans;*/

  
   
return 0;
}