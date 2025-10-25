/*//write the program to find the fibonacci Series
#include<iostream>
using namespace std;
int fib(int n){
    if(n== 0 || n==1){
        return n;
    }
    int small = fib(n-1);  //First way to solve the problem
    int large = fib(n-2);
    return small+large;

    return fib(n-1) + fib(n-2); //2 Way to solve the problem
    

}
int main(){ 
    int n ;
    cin>>n;
    int ans = fib(n);
    cout<<ans<<endl;  
return 0;
}*/





#include <iostream>
using namespace std;
int fab(int n){
    if(n == 0 || n == 1){
        return n;

    }
    int small = fab
}
int main(){

}


//Write the programe to check the array is shorted
#include <iostream>
#include <vector>
using namespace std;
bool isShorted( vector<int> arr, int n ){
    if(n== 0 || n == 1){
        return true ;
    }
    return arr[n-1]>=arr[n-2] && isShorted isShorted(arr,n-1);

}
int main(){

}