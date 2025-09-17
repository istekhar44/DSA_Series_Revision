//Recursion 
//components of the Recursion 1. mandotary => Base Case  recursion Realation  2 optional






/*#include<iostream>
using namespace std;
int factorial(int n ){

    
    if(n == 0 || n == 1 )    ////Base Case
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



// #include<iostream>
// using namespace std;
// int power(int n){
//     if(n == 0)         //Base Case
//     return 1;
//     int choti = power(n-1);
//     int large = 2*choti;    //1 Way to Calculate the power of the 2n

//     return 2*power(n-1);    //2 Way to Calculate the power of the 2n


// }
// int main(){
//     int n;
//     cin >> n ;
//     int answer = power(n);
//     cout<<answer<<endl;


   
// return 0;
// }



// //Write the program to reach the source to destiantion
// #include<iostream>
// using namespace std;
// void reachHome(int src, int dest){
//     cout<<"source"<<src<< "Destination"<<dest<<endl;

//     if (src == dest ){
//         cout<<"Pouch Gaya"<<endl;
//     }

//     src++;

//     reachHome(src , dest);
    
// }

// int main(){
//     int dest = 10;
//     int src = 1 ;

//     cout<<endl;

//     reachHome(src , dest);

//     return 0;
// }



// //Write the code of the binary search
// #include <iostream>
// using namespace std;
// bool isShorted(int *arr, int size){
//     if(size ==0 || size == 1)
//     return true;

//     if(arr[0] > arr[1]){
//         return false;
//     }
//     else{
//         bool remaining =  isShorted(arr + 1 ,size -1 );
//         return remaining;
//     }
// }
// int main(){
//     int arr[5]= {3,6,8,30,45};
//     int size = 5;

//     bool ans = isShorted(arr, size);

// }






/*//A Array is given find the sum of the arry 
#include<iostream>
using namespace std;
int arrSum(int *arr,int size){
    if(size == 0){
        return 0;

    }

    if(size == 1){
        return 1;
    }
    
    else {
        int reamining = arrSum(arr+1 , size -1);
        int sum = arr[0] + reamining;
        return sum;
    }
  
}
int main(){
    int arr[5]= {5,6,3,9,52};
    int size = 5;
    
    int sum  = arrSum(arr, size);

    cout<<"Sum of the array "<<sum <<endl;

   
}*/



/*
//Write the program to find linear Search in the array
#include <iostream>
using namespace std;
bool linearSearch(int arr[],int size , int key){
    
    if(size == 0){
        return false ;
    }
    
    if(arr[0] == key){
        return true ;

    }
    else{
        bool remaining = linearSearch(arr  +1 , size - 1 , key);

        return remaining; 
    }
}
int main (){
   int arr[5] = {5,6,21,4};
   int size = 5;
   int key = 4;
   bool ans = linearSearch( arr[] ,size,key);

   if(ans){
    cout<<"Present"<<endl;
   }
   else{
    cout<<"Absent"<<endl;
   }

   return 0;


}

*/



//A String is give trverse the string
/*#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
    string hellow = "a,b,c,d,e";
    reverse(hellow.begin() , hellow.end());
    cout<<hellow<<endl;

   
return 0;
}*/





/*// //write program to reverse the stirg using the recusion
#include<iostream>
using namespace std;
void reverse(int i , int j , string& str){
    if(i > j ){
        return ;
    }
    
    swap(str[i] , str[j])
    i++;
    j--;

    reverse(i , j , str);
    

}
int main(){
    string name  = "babbar ";
    reverse(0,name.length(),name)
    cout<<name<<endl;
    


   
return 0;
}
*/




/*//Write the code to reverse the string using without the recursion
#include<iostream>
#include<string>
using namespace std;
string reverse(string hell){
    int i = 0;
    int j = hell.length() - 1; 
    while(i<j){
        swap(hell[i] , hell[j]);
        i++ ;
        j--;
    }
}
int main(){
    string hell = "a,b,f,h,j,f,d";
    string ans = reverse(hell );
    cout<<ans<<endl;

    return 0;
    


}
*/



//WAP to check it is palindrome 
#include<iostream>
using namespace std; 
bool checkPalindrome(string str , int i , int j ){
    if(i> j)
    return ;
    swap(str[i],str[j])``                       sdfgsdfgsdfgsdfgsdfgsdfgsdfgsdfgsdfgsdfg
    i++;
    j--;

    reverse(str,i,j); 
}
