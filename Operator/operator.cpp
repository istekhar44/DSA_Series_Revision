//Oerator in the cpp
// &   (and) operator.   simple treat as a multipley operator 
// |   (OR) operatir.   Simple treate as a addition operator 
// ~   (NOT) oprator .  NOt operator It generally reverse the bit . 0 to 1
// ^   (XOR) Operator . Xor operator is dono one rahange to zero da dega .

#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int c = 8;

    cout<< "a&c :" << (a&c) << endl;   //And Operator
    cout<< "a^c :" << (a^c) << endl;   // XOR Operator
    cout<< "~c :" << (~c) << endl;     // NOT Operator
    cout<< "a|c :" << (a|c) << endl;   //OR Operator

    int i = 7;
    cout << ++i << endl;     
    cout << i++ << endl;  
    cout << i-- << endl;  
    cout << --i << endl;  



    //Print the counting ?
    int num ;
    cout<<"enter the Number to Print the Counting:"<<endl;
    cin>>num ;
    for(int i = 1 ; i<=num ; i++){
        cout<<i<<endl;
    }

    //Print the sum to n number ?
    int number;
    cout <<"Writer the Number to print the Sum"<<endl;
    cin>> number;
    int sum  = 0;
    for(int i = 1 ; i<=number ; i++){
        sum += i;
        
    }
    cout<<sum<<endl;

    //





    



    
    

return 0;
}

