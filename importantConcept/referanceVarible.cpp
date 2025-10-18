#include <iostream>
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