/*#include <iostream>
using namespace std;
void print (int *p){
    cout<<*p<<endl;
}

void update(int *p){
    *p = *p+ 1;
    cout<<"updated value : "<< *p <<endl;
    cout<<"print the size "<<sizeof(*p)<<endl;  //return the size of the pointer  

}

int getSum(int array[], int n){
    int sum = 0;
    for (int i = 0 ; i< n  ; i++){
        sum += array[i];
    }

    return sum ;


}



int main(){
    int no = 5;
    int *p = &no;

    print(p);
    update(p);

    int array[19] ={1,2,3,4,5,6};


} */





/*//create the double pointer 
#include <iostream>
using namespace std;
void update (int **ptr2){
    // ptr2 = ptr2 +1 ;  //there is no change in the pointer 

    // *ptr2 = *ptr2 + 1;  //undefine reference undefine error

    **ptr2 = **ptr2 + 4 ;
    cout<<"print the exact value "<<endl;


}
int main(){
    int hellow = 40;
    int * ptr = &hellow;
    int* *ptr2 = &ptr;  //double pointer 
    int *** ptr3 = &ptr2; //triple pointer


    cout<<"return the address of the 3 pointer "<<*ptr3<<endl;

    cout<<**ptr2<<endl; //Important the multiple of star increase the no of  get the exact value 

    cout<<"ptr"<<ptr<<endl;//print the value of the pointer 

    cout<<&ptr2<<endl;  //print the address of the pointer 

    cout<<"*ptr:  print the value "<<*ptr<<endl; //print the value of the pointer 

    cout<<&hellow<<endl; //Print the address of the pointer 

    cout<<hellow<<endl; //print the exact value 

    update(ptr2);


}*/



//Multiple choice question












