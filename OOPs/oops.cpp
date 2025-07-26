/*#include <iostream>
#include <string> // Required for using the string data type
using namespace std;
class Student {
private:
    string Sname;
    int Sage;

public:
    int fatherAge; // Renamed for clarity

    // Getter for father's age
    int getFatherAge() {
        return fatherAge; // Accesses the public member
    }

    // Setter for father's age
    void setFatherAge(int saal) {
        fatherAge = saal;
    }


    // Getter for student's name
    string getName() {
        return Sname;
    }

    // Setter for student's name
    void setName(string name) {
        Sname = name;
    }
};

int main() {
    Student mohit;

    // Set the private member 'Sname' using a public setter function
    mohit.setName("Mohit");

    // Access the private member 'Sname' using a public getter function
    cout << "Name of the Student: " << mohit.getName() << endl;

    // Call the void setter function. It does not return a value.
    mohit.setFatherAge(45);

    // Call the getter function inside cout to print the value
    cout << "Father's age: " << mohit.getFatherAge() << endl;

    return 0; // Good practice to return 0 from main
}
*/









/*#include<iostream>
#include<string>
using namespace std;
class student{
    private:

    string name;
    int age ;
    int roll;

    public:
    string getName(){
        string name;
    }

    void setName(string newName){
        name = newName;
    }



};
int main(){
    student karan;

    cout<<"Get the name of the Student"<<karan.getName()<<endl;
    //Call the setter function in the cpp
    karan.setName("Mohit");
    cout<<"The name of the student"<<karan.getName()<<endl; 
return 0;
}*/







#include <iostream>
using namespace std;
class Car{
    public :
    string Brand;
    int plateNo;
    int EnrollYear;

    //create the Default constructor 
    Car(){
        cout<<"Fortuner"<<endl;

    }
    //paramerterised constructor 
    Car(string newName , int  newPlateNo, int newEnrollYear){
        Brand = newName ;
        plateNo = newPlateNo;

    }


};
int main(){
    Car Carinfo;
    

    cout<<Carinfo.Brand<<endl;

}