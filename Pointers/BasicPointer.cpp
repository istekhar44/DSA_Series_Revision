#include <iostream>
using namespace std;
int main(){
   int num = 5;
   int *ptr = &num;
   

   cout<<*ptr<<endl;  //return the value of the poiner 
   cout<<ptr<<endl;//return the address of the pointer
   cout<<"address of the num "<<&num<<endl;  //return the address the the pointer

   cout<<"increment"<<ptr++<<endl;//return the same address of the pointer

   int d= 45;
   int *hr = &d;   //it not necessary the pointer is write only the ptr or the pointer
   cout<<"Print the value of the d "<<*hr<<endl;  
   cout<<&d<<endl; //print the address of the pointer 


   int p = 5;
   int *pr= &p;
   cout<<"print the address of the p: "<<*pr<<endl;


   int no = 30;
   int a = no ;
   a++;     //increase the pointer of the number
   cout<<a<<endl;



   //copy the one pointer to other pointer 
   int hellow = 45;
   int *x = &hellow;
   int  *j = x;
   cout<<"print the pointer "<<*x<<endl;
   cout<<"copy of the pointer"<<*j<<endl;


}



#include <iostream>
using namespace std;
int main(){
    int arr[10] ={2,3,4,5,6,7,8};
    int *ptr = &arr[10];

    cout<<"address of the array"<<&arr<<endl;  //print the address of the array  *return the 1 location address 
    cout<<"address of the array"<<&arr[0]<<endl;
    cout<<"address of the array"<<&arr[1]<<endl;  //return the address  of the 1 location

    cout<< "Print the 1 location element"<<*arr+1 <<endl;  //print the value of the 1 location
    cout<<"print the 2 locaction element "<<*arr+2<<endl; //print the 3 loacation element

    cout<<"print the address of the array"<<arr<<endl;  //print the first location of the array
    cout<<"print the address of the array"<<&arr<<endl;  

    cout<<*(arr+2)<<endl; //return the value of the array 3 location

    int temp[10];
    cout<<sizeof(temp)<<endl; //return the 4 *10 = 40 bytes
    
    int *pointer= &temp[10];

    cout<<&temp<<endl; //return the address of the temp array
    cout<<"print the byte "<<sizeof(*pointer)<<endl;  //the the 40 bite there are byte of data 


}







#include <iostream>
using namespace std;
int main(){
    int array[4] = {1,2,3,4};
    char ch[5] = "abcd";

    cout<<array<<endl;  //return the address
    cout<<ch<<endl;    //return the value 1 value 

    cout<<*ch<<endl;  //print the 1 value of the character array
    cout<<&ch<<endl;  //return the address of the character array

    cout<<*(&ch)<<endl;//print the whole character array

    // cout<<*(*ch)<<endl;  //show the error


}