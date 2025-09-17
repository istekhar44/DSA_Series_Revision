/*#include<iostream>
using namespace std;
void reachHome(int src , int dest){
    if(src == dest){
        cout<<"Pouch Gaya "<<endl;  //Base Class
        return ;
    }
    src ++;

    reachHome(src , dest);
    

}
int main(){
    cout<<"Enter the Destination"<<endl;
    int dest ;
    cout<<"Enter the Sourse"<<endl;
    int src = 1;
 
 cout<<endl;
 int  reachHome(src , dest); 

   
return 0;
}*/




/*
//Print the ficonnacci Series
#include<iostream>
using namespace std;
int printFibonnacci(int n){
  
    if(n == 0)
        return 0;
    

     if (n == 1)
     return 1;
    
     
    
   int ans= printFibonnacci((n-1) + (n-2));
   return ans;

}
int main(){
    int n ;
    cin>>n;
    cout<<endl;
    printFibonnacci(n);

   
return 0;
}*/


#include<iostream>
using namespace std;

int printFabonnacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return printFabonnacci(n - 1) + printFabonnacci(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << printFabonnacci(n) << endl;

    return 0;
}






/*//Check the Array is Shorted or Not 

#include <iostream>
using namespace std;
bool shortedArray(int arr[], int size){
    if(arr == 0 || size == 1 ){
        return true;              //Base Casse 
    }
    
    if(arr[0]> arr[1]){
        return false;
    }
    else{
        bool remainingpart = shortedArray(arr + 1 , size -1);      //recursion Relation
        return remainingpart;
    }
}
int main(){
    int arr[6]={7,9,3,2,67,21};
    int size = 6;

    bool ans = shortedArray(arr,size);
    if(ans){
        cout<<"Array is Shorted"<<endl;
    }
    else{
        cout<<"Array is Not Shorted"<<endl;
    }
}
*/







// //Take the Array and find the key element ? Array = 1,2,3,4,5  key/element = 6 o/p=Not found
// #include<iostream>
// using namespace std;
// int main(){

   
// return 0;
// }





// Calculate the sum all element in the array
/*#include<iostream>
using namespace std;
int ArraySum(int array[],int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return array[0];
    }

    int remaining = ArraySum(array+1 , size-1);
    int sum = array[0] + remaining ;
    return sum ;
}
int main(){
    int array[5]={1,2,3,4,5};
    int size= 5;
    cout<<endl;
    ArraySum(array, size);
    return 0;
}*/





//Write the program to check the array is shorted or not
/*#include<iostream>
using namespace std;
bool isShorted(int arr[] ,int size ){
    if(size == 0 || size == 1){
        return true ;
    }
    if(arr[0]>arr[1]){
        return false ;

    }
    else{
        int remaining = isShorted(arr +1 , size -1);
        return remaining;
    }
}
int main(){
    int arr[5]={5,3,7,1,9};
    int size = 5;
    cout<<endl;
    bool ans = isShorted(arr,size);
    if(ans){
        cout<<"Array is Shorted"<<endl;

    }
    else{
        cout<<"Array is Not Shorted"<<endl;
    }
}
*/



//Liner Search find the key element from the array 
#include<iostream>
using namespace std;
int main(){
    

}
