//creation of the employee class
//start with includes
#include <iostream>
#include <string>
using namespace std;
//now we can define the class
class Employee{
//we're going to need a constructor for the data types
//employee class is one of:
//first name(type string), last name(type string) monthly salar(type int)
//if the salary not positive set to zero, create setters and getters for all
public:
Employee( string firstname, string lastname, int monthlysalary){
    setFirstname(firstname);
    setLastname(lastname);
    setMonthlysalary(monthlysalary);
}
    //now create setters and getters for each
    //let's start with the string firstname
    //create a getter first
    string getFirstname(){
        return Firstname;
    }
    void setFirstname(string firstname){
        Firstname= firstname;
    }
    //now with lastname
    string getLastname(){
        return Lastname;




    }
    void setLastname(string lastname){
        Lastname= lastname;
    }
    int getMonthlySalary(){
        return Monthlysalary;

    }
    void setMonthlysalary(monthlysalary){
        Monthlysalary= monthlysalary;
    }
// we can test this out








};