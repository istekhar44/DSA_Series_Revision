//Recursion 
//components of the Recursion 1. mandotary => Base Case  recursion Realation  2 optional






/*#include<iostream>
using namespace std;
int factorial(int n ){

    
    if(n == 0 )    ////Base Case
return 1;

int choti = factorial(n - 1);     //recursive 
int badi = n * choti;             //recursive relation
}


int main(){
    int n;
    cin>>n;                            //Factorial

    int ans = factorial(n);

    cout<<ans <<endl;

   
return 0;
}*/



/*//calculate the power of the function 
#include<iostream>
using namespace std;
int power(int n){
    if(n == 0)
    return 1;

    int smallproblem = power(n-1);
    int largeproblem = 2 * smallproblem;  //1 Way

    return 2 * power(n-1);     //2 Way
}
int main(){
int n;
cin>>n;

int ans = power(n);
cout<<ans<<endl;
   
return 0;
}*/






/*//Print the Back counting
#include <iostream>
using namespace std;
void print(int n ){
    if(n == 0){
        return;
    }
    cout<<n<<endl;      //This print the backCounting
    print(n-1);
    cout<<n<<endl;       //This print the straignt counting
}
int main(){
    int n ;
    cin>>n;
    cout<<endl;
    print(n);

    return 0;


}*/





