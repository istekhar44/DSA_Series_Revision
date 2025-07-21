#include<iostream>
using namespace std;
int main(){
    
    //Write the code to reverse the integer ? 
    //find the digit from the number:  134%10= 4
    //ans = num * 10 + 3 = no ka digit 
    int num;
    cin>>num;
    int ans;
    while(num!=0){
        //two condition in the if 
        int Int_Max  ,  Int_Min;   //This are the Range
        if( (ans > Int_Max/10) || ( ans<Int_Min/10)){
            return 0;
        }


        int digit= num % 10 ;
         ans = (num*10) + digit;
         num = num /10;
    }
    return ans;

}