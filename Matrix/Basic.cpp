/*#include<iostream>
using namespace std;

int main(){
    int matrix[3][4] ;
    int row = 3;
    int col = 4;

    //loop for input the 2 D array
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin>>matrix[i][j] ;
        }
        cout<<endl;
    }

    //print the matrix
    for(int i = 0 ; i< row ; i++){
        for(int j = 0 ; j< col; j++){
            cout<<matrix[i][j]  ;
        }
        cout<<endl;


    }
    cout<<endl;
    

return 0;
}*/




/*//linear Search for the matrix
#include<iostream>
using namespace std;
bool linearSearch(int matrix[][3], int row , int col , int key){
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if( matrix[i][j] == key){
                return true ;
            }
        }
        
    }
    return false;
}
int main(){
    int matrix [2][3] = { {1,2,3} , {4,5,6}};
    int row = 2;
    int col = 3;

     
    cout<<linearSearch(matrix,row , col, 6)<<endl;   //this give the output  : 1    because the element found 

    int result = linearSearch(matrix,row , col, 7);  // this give the : element not found
    if( result  == 0){
        cout<<"element not foud"<<endl;

    }
    else{
        cout<<"element found"<<endl;
    }

    
    
return 0;
}
*/


/*//Maximum row sum 
#include<iostream>
#include <climits>
using namespace std;
int getmaxSum(int matrix[3][3], int row, int col ){
    int maxSum = INT_MIN;
    for(int i = 0 ; i< row ; i++){
        int sumI = 0;
        for(int j = 0 ; j< col ; j++){
            sumI += matrix[i][j];         
        }
        maxSum = max(sumI , maxSum);
    }
    return maxSum;
}
int main(){
    int matrix [3][3] = { {1,2,3} , {4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;

    cout<<getmaxSum(matrix, row, col )<<endl;



return 0;
}*/






/*//Find the Diogonal sum of the matrix
#include <iostream>
using namespace std;
int digonalSum(int matrix[][4], int n){
    int sum = 0;
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<n; j++ ){
            if(i == j){
                sum += matrix[i][j];
            }else if(j == n-i-1){
                sum += matrix[i][j];

            }
            
        }
    }
    return sum;
}
int main(){
    int matrix[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int row = 4;
    int col = 4;
    int n = 4;

    cout<<digonalSum(matrix, 4)<<endl;

    return 0;
}*/


/*//find the digonal sum of the matrix
#include <iostream>
using namespace std;
int digonalSum(int matrix[][4], int n ){
    int sum =0;
    for(int i= 0 ; i< n ; i++){
        sum += matrix[i][i];
        if(i != n-i-1){
            sum += matrix[i][n-i-1];
        }
    }
    return sum;
}
int main(){
    int matrix[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int row = 4;
    int col = 4;
    int n = 4;

    cout<<digonalSum(matrix, n)<<endl;

}
*/


/*#include <iostream>
#include <climits>
using namespace std;
int sumOfCol(int matrix[3][3], int row, int col){
    int maxSum = INT_MIN;
    for(int i =0 ; i< row ; i++){
        int sumJ = 0;
        for(int j =0; j<col ; j++){
            sumJ += matrix[j][i];
        }
        maxSum = max(sumJ , maxSum);

    }
    return maxSum;


}
int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;

    
    cout<<sumOfCol(matrix , row, col)<<endl;
    return 0;

}*/








