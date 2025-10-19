/*//create the 2d array using the dynamic memory allocation
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int arr[n][m];  //it crashes the progema becaue the stack memory is small

    //create the dynamic 2 d array
    int ** arr = new int* [5];   //create the double pointer 

    for(int i = 0 ; i < n ; i++){  
        arr[i] = new int [n];
    }


    //creation done 
    for(int i = 0 ; i<n ; i++){
        for(int j = 0; j<n ; j++){
            cin>>arr[i][j];

        }
    }

    for(int i = 0 ; i<n ; i++){ //print the array
        for(int j = 0; j<n ; j++){
            cout<<arr[i][j]<<" ";

        }cout<<endl;
    }


    //realease the memory    the heap memory
    for(int i = 0 ; i<n ; i++){
        delete[] arr[i];
    }

    delete [] arr;



}*/


/*//best way to create the 2d array
#include <iostream>
using namespace std;
int main(){
    int row , columns;
    cin>>row, columns;

    //create the array of pointer
    int ** arr = new int * [row];

    //create the columns for the each row
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j< columns ; j++){
            cin>>row>>columns;
        }
    }

    //print the array
    for(int i  = 0 ; i < row ; row++ ){
        for(int j = 0 ; j< columns ; j++){
            cout<<arr[i][j]<<endl;
        }
    }

    //free the heap memory
    for(int i = 0 ; i< row ; i++){
        delete [] arr;
    }
    delete [] arr;
}
*/

#include <iostream>
using namespace std;

int main() {
    int row, columns;
    cout << "Enter number of rows and columns: ";
    cin >> row >> columns;  // ✅ Fix: use >> not ,

    // Create array of pointers (rows)
    int **arr = new int*[row];

    // Create columns for each row
    for (int i = 0; i < row; i++) {
        arr[i] = new int[columns];  // ✅ allocate memory for each row
    }

    // Input elements
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> arr[i][j];  // ✅ Fix: store input in arr[i][j]
        }
    }

    // Print the array
    cout << "2D Array is:\n";
    for (int i = 0; i < row; i++) {        // ✅ Fix: increment i, not row
        for (int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free the heap memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];  // ✅ Fix: delete each row
    }
    delete[] arr;         // ✅ delete the array of pointers

    return 0;
}




