/*//swap the array odd and the even array
#include <iostream>
using namespace std;
void swapAlternate( int arr[],  int size){
    for( int i = 0 ; i< size ; i +=2){
        if(i+1 < size){
            swap( arr[i] , arr[i+1]);
        }
    }
}

void printArray(int arr[] , int n){
    for( int i =0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    
    }
    cout<<endl;
}
int main(){
    int odd[5] = {1,2,3,4,5};
    int even[6] = {55,66,77,88,99,33}

    //call the swapalternate
    swapAlternate(even, 6);
    printArray(even ,6 );
    return 0;
}*/





/*/liner search the target elemement = 8 elese return -1
#include<iostream>
#include <vector>
using namespace std;
void linerSearch(vector<int> & arr , int target){
        for( int i = 0 ; i< size ; i++){
            if( arr[i] == target){
                return i;// return the in
            }
            else{
                return -1;
                
            }
        }
    }
int main(){
    vector<int> hellow = { 2,4,6};
    int result = linerSearch(hellow ,2);
    if( result != -1){
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<" Element not fonund "<<endl;
    }
    
return 0;
}

*/


// Reverse the array element 
#include <iostream>  //( use the two pointer approch)
void reverseArray(int arr , int size){
    for(int i = 0; i< size ; i++){
        int start = 0;
        int end = size - 1;
        while(start < end){
            swap( arr[start] , arr[end]);
            start++ ; end --;

        }
        
    }
}
using namespace std;
int main(){
    int brr[5] = {1,2,3,4,5};
    swapArray(brr , 5);

    for(int i = 0 ; i< size ; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}


//