/*#include<iostream>
using namespace std;
//make the function of sum
int sum(int a , int b){
    int sum = a + b;
    return sum;
}
int main(){
   int hellow = sum(34,56);
   cout<<hellow<<endl;
    return 0 ;
}*/




/*//Print the  Counting ?
#include<iostream>
using namespace std;
int  counting(int i , int n){
    for(i = 0; i< n ; i++){
        cout<< i<<endl;
    }
     
}
int main(){
cout<<"Enter the No To Print the counting"<<endl;
int hellow = counting(0 , 20);
cout<<counting<<endl;

   
return 0;
}*/




/*//WRITE THE PROGRAM TO FIND THE MAXIMUM AND THE MINIMUM
#include<iostream>
using namespace std;
int MaxMin(int a , int b){      //Parameter 
    if (a>b){
        cout<<"A is Grater "<<endl;
    }else {
        cout<<"B is Grater "<<endl;
    }
}
int main(){
    cout<<MaxMin(560,90)<<endl;     //Argument

   
return 0;
}*/




/*
#include<iostream>
using namespace std;
int countSum(int i , int num){
    int sum = 0;
    for(int i= 1; i<= num ; i++){
        sum = sum + i;

    }
    return sum ;

}
int main(){
    cout<<countSum(1 , 4)<<endl;  //1 Way to execute the sum 

    int hellow= countSum(1 , 60);  //2 Way to execute the sum 
    cout<<hellow<<endl;
   
return 0;
}*/


            // IMPORTANT   /* PASS bY VALUE  */




/*#include<iostream>
using namespace std;
int sum(int a , int b){
    int sum = a + b;

}
int main(){
int a = 56;
int b = 65 ;
int hellow = sum(a,b);   //Use the concept of Pass by Value 
cout<<hellow<<endl;

cout<<sum(a, b)<<endl;
   
return 0;
} */           




//Calculate Sum of Digit of a number  = 3456
#include<iostream>
using namespace std;
int SumofDigit(int num){
    int digSum = 0;
    while (num > 0 ){
        int lastDigit = num % 10;
        int number = number / 10 ;
         digSum  +=  lastDigit;
    }
return digSum ;                                // Infomative Question    Fint the Sum of the last digit of the number?

}
int main(){
    int hellow = SumofDigit(178);
    cout<<hellow<<endl;

    cout<<"Hellow"<<endl;
   
return 0;
}





//Find the sum of the nCr  
#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;

}

int ncr(int n , int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}
int main(){
    int n = 8 , r= 3;
    cout<< ncr(n,r)<<endl;  //Use the concept of ncr
    return 0;
   
}



//  HomeWork
// Q1  wAP to check if the a number is prime or not 
#include <iostream>
using namespace std;
int isPrime(int num){
    if(num % 1 == 0 ){
        cout<< ("this is prime ");
    }
    else{

    }
}
int main(){

}
// Q2  WAP to print all prime number from 2 to N 
#include<iostream>
using namespace std;
int primeNO(int num ){
    for(int i = 0 ; i <= num ; i++){
        if(num % 2 == 0 && num % num == 0){
            int print(){

            }

        }
    }

}

int main(){

}
// Q3  Wap to print the fabonacci series to n given num?   
#include <iostream>
using namespace std;
int fib(int n){
    

}
int main(){

}     
