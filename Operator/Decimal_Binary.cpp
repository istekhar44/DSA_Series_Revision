/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout <<"Enter the no "<<endl;
    cin>>n;
    int ans = 0;
    int i = 0;
    
    while(n !=0){
        int bit  = n&1;
        ans = (bit * pow(10,i)) +ans;
        n= n >> 1;
        i++;

    }
    cout<<"Answer is "<< ans <<endl;


   
return 0;
}*/





/*//Write the code to covert the Negative no into the Binary Code ?
#include<iostream>
using namespace std;
int main(){

    cout<<"hellow "<<endl;
   
return 0;
} */





// Write the code to convert the No into the binary code?
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the Number"<<endl;
    cin>>number;
    int digit = 0;
    int ans = 0;
     int i = 0;
   
    while(number != 0){
        int digit = number % 10;
        int ans = ( digit * pow(10,i)) + ans ;
        ans +=1;

    }
    cout<<"Answer is "<<ans<<endl;
            

           //This code is wrong correct the code 
   
return 0;
}
     


     //Decimal to binary no conversion


