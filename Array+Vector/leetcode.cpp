//Get the all the sub array form the main array 
void solution{
    public :
    void subArray(vector<int>& array){
        int n = array.size() -1;

        for(int start = 0 ; start < n; start++ ){  //loop for the start 
            for(int end = start; end < n ; end++){ //loop for the end 
                for(int i = start; i< n; i++ ){ //loop for print the array
                    cout<<array[i]<<" ";

                }
                cout<<" ";

            }
            cout<<endl;


        }
        return 0;

    }
}


//find the Maximum of the array(brute force ) 
#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n = 5;
    int arr[5]= { 3,4,5,6,7,8};

    int maxSum = INT_MIN;

    for(int st = 0 ; st< n ; st++){
        int currSum = 0;
        for(int end = 0 ; end <n ; end++){
            currSum +=arr[end];
            maxSum = max(currSum , maxSum );

        }
    } cout<<maxSum<<endl;
return 0;
}

//Kadne's Algorithm (find the maximum of the subarray)
#include<iostream>
using namespace std;


int main(){
    int size = 6;
    int arr[6]= {4,5,6,7,8,7};

    
return 0;
}

