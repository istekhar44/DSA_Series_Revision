#include <iostream>
#include <string>
using namespace std;
class teacher{
    public:

    //Properties or can we say the Attribute 
    string name;
    string dept;
    int age;

    //method or can be say methodlogies
    void changeDept(string newDept){
        dept = newDept;
    }
    double salary ;

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }

    private:
    double salary;
};

int main(){
    teacher t1;
    t1.name = "rohit";
    t1.dept= "ECE";

    t1.setSalary(25000);
    cout<<t1.getSalary()<<endl;
return 0;

}