/*
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



    //Fabonacci series
    int numbera= 10;
    int g = 0 ;
    int h = 1 ;
    for(int i = 1 ; i<=numbera; i++){
        int nextnum = g + h;
        cout<<nextnum<<" ";
        g = h;
        h = nextnum;


    }
    cout<<endl;

return 0;
}*/





#include<iostream>
using namespace std;
int main(){
    //Write the Programe to Print the prime no

    int no;
    cout<<"Enter the value of the no "<<endl;
    cin>>no;
    bool isPrime= 1;
    for(int i = 2 ; i<no ; i++){
        if(no%i==0){
            isPrime = 0;
            cout<<"This is not a prime No "<<endl;
            break;
        
        }  

    }
    if (isPrime==0) {
            cout<<"This is Not Prime"<<endl;
        }
        else{
            cout<<"This is  Prime";
        }
      
return 0;
}






#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prod = 1;
    int sum = 0 ;               // 456 % 10 = 6   modulus to find the remender
    while(n!=0){                // 456 / 10 = 45   division to find the digit
        int remender = n%10;
        prod = prod * remender;
        sum = sum + remender ;
        n = n/10;

    }
    int ans = prod - sum;
    return ans;

}