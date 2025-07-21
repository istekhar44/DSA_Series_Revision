//Use the multiple if else condition operation int he cpp
#include <iostream>
using namespace std;
int main(){
    int a = 34;
    int b = 67;

                // Use the multiple if else if
    if(a>b){        
        cout<<"print the A is Grater "<<endl;

    }
    else if (a<b){
        cout<<"Print the B is Grater"<<endl;
    }
    else{
        cout<<"Both are the Equal"<<endl;
    }

    return 0;

}





#include<iostream>
using namespace std;
int main(){
    //Print the counting
    int n;                  //Print the counting
    cin>>n;
    int i = 0;
    while(i<=n){
        cout<<i << endl;
        i +=1 ;
    }

return 0;
}






//Print the Sum of the n number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int sum = 0;
    while(i<=n){
        sum = sum+i;
        i=i+1;
        

    }
    cout<<sum<<endl;

   
return 0;
}



//Print the sum of the even NO
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum;
    sum = 0;
    int i=1;
    while(i<=n){
        sum = sum +i;
        i = i+2;
    }

    cout<<sum<<endl;


   
return 0;
}




#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;                    //Print this no is prime or not
    int i = 2;
    while(i<n){
        if(n%i==0){
            cout<<"this is NOt Prime"<<endl;

        }
        else {
            cout<<"this is Prime "<<endl;
        }

        i=i+1; 
        
    }   
return 0;
}


//





