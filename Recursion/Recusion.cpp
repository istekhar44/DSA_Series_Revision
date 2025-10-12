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


// #include<iostream>
// using namespace std;

// int printFabonnacci(int n) {
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;

//     return printFabonnacci(n - 1) + printFabonnacci(n - 2);
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << printFabonnacci(n) << endl;

//     return 0;
// }






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


// //check it is palindrome 
// #include<iostream>
// using namespace std;
// bool checkPalindrome(string str ,int i, int j){
//     if(i > j){
//          return 0;
//     }
       

//         if(str[i] != str[j]){
//             return false;
//         }
//         else{
//             return checkPalindrome( str , i+1 , j-1);
//         }

// }
// int main(){
//     string name = "abbccbba";
//     cout<<endl;

//     bool ispalindrome = checkPalindrome(name , 0 , name.length()-1);

//     if(ispalindrome){
//         cout<<"It is Palindrome"<<endl;
//     }
//     else{
//         cout<<"It is not Palindrome"<<endl;
//         }
// return 0;
// }








// //Find the bubble short
// #include<iostream>
// using namespace std;
// void shortArry(int *array , int size){
//     if(size == 0 || size == 1){
//         return ;

//     }
//     for(int i = 0 ; i< size-1 ; i++){
//         if(array[i] > array[i+1]){
//             swap(array[i] , array[i+1]);
//         }

//     }
//     shortArry(array , size-1);
// }
// int main(){
//     int arrary[5] = {20,3,34,5,9};
//     shortArry(arrary,5);

    

      
// }




// //Merge Short
// #include<iostream>
// using namespace std;
// void merge(int *array, int s , int e ){
//     int mid = (s+e)/2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid ;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     //Copy the values 1 split array
//     int k = s;
//     for(int i=0 ; i< len1 ; i++){
//         first[i] = array[k+1];
//     }

//     //Copy the value 2 split array
//     int k = mid+1;
//     for(int i = 0 ; i < len2 ; i++){
//         first[i] = array[k++];

//     }

//     //merge 2 shorted Array 
//     int index1 = 0 ;
//     int index2 = 0 ;

//     mainArrayIndex = s;
//     while(index1 < len1 && index2 < len2){
//         if(first[index1] < second[index2]){
//             array[mainArrayIndex++] = first[index1++];
//         }
//         else{
//             array [mainArrayIndex] = second[index2++];
//         }
//     }

// }
// void mergeShort(int *array, int s , int e){
//     if( s > e){
//         return;
//     }
//     int mid = (s+e)/2;

//     //Short the left part of the array 
//     mergeShort(array , s , mid);

//     //short the right part of the array
//     mergeShort(array , mid+1 , e);

// }
// int main(){
//     int array[7]={3,6,7,21,65,32,4};
//     int size = 7;

//     mergeShort(array , s , e);



// }



                           //Day 6 love babbar


//Quick Short find the solution 
// #include <iostream>
// using namespace std;

// int partision(int arr[], int s , int e ){
//     int pivort = arr[s];

//     int cnt = 0;
//     for (int i = s+ 1 ,)
// }
// void quickShort( int arr[], int s , int e){
//     if(s > e ){
//         return ;

//     }
//     //Calling the partion function
//     int p = partision( arr , s, e);

//     //left part short kero 
//     quickShort(arr , s , p-1);

//     //right wala part shorr kero
//     quickShort(arr, p + 1 , e);
// }
// int main(){  
    
//     int arr[9]={4,6,8,12,45,80,90,34,45};
//     int  n = 9;

//     quickShort(arr, 0 , n-1);
//     for(int i = 0 ; i<n ; n-1){
//         cout<< arr[i]<< " ";
//     }
//     cout<<endl;

//     return 0;


// }




//Subset of the array
#include<iostream>
using namespace std;
int main(){
     
    
}





























