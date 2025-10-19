/*//pass by referance have the same memory but name is different


/*#include <iostream>
using namespace std;
int update (int x){  //copy the value  =>Pass by value 
    x++;
}

int update2(int &x){   // creat the new element  =>Pass by referance
    x++;
}
int main(){
    int i = 5;

    int &j = i;   //Referance varible
    cout<<j<<endl;
    cout<<i<<endl;
    cout<<++j<<endl;
    cout<<j++<<endl;

    int x = 30 ;
    update(x);
    cout<<"before"<<x<<endl;
    

    update2(x);
    cout<<"after"<<x<<endl;


    
}


//heap memory allocation
#include <iostream>
using namespace std;
int main(){
    char ch = 'g';
    cout<<sizeof(ch)<<endl;

    char* c = &ch;
    cout<<sizeof(c)<<endl;




}
    



*/






//want to use the heap memory use the new keyword
#include <iostream>
using namespace std;
int getSum(int *arr , int n ){
    int sum = 0 ;
    for (int i = 0 ; i<n; i++){
        sum += arr[i];
    }
    return sum;
    
}
int main(){

    //create the heap memory of the integer
    int *i = new int;
    *i = 30;
    cout<<*i<<endl;
    cout<<i<<endl;


    //create the heap memory of the string
    
    char * ch = new char ;
     *ch = 'b';
    cout<<*ch<<endl;
    cout<<ch<<endl;

    
    while(true){
        int i = 5;  //any instant of time create only one integer
    }

    while(true){
        int * ptr = new int ;  //it crash the memory
    }


}

//importnat 
//arr[i] = *(arr+i)



