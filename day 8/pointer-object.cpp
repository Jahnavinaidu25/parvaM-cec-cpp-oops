#include<iostream>
using namespace std;

class Employee{
    private:
        string employeeID,employeeName;
        int experiance;
        float salary;

    public:
        void addDetails(string id,string name,int exp,float salary){
            employeeID=id;
            employeeName=name;
            experiance=exp;
            this->salary=salary;
        }

        void showDetails(){
            cout<< "The employee with name " << employeeName << " bearing " << employeeID << " having " 
            << experiance << " years of experiance and receives a salary of Rs. " << salary << "/-" << endl;
        }
};

int main(){
    string empName,empID;
    int empexp;
    float empsalary;

    cout << "Enter your name, Employee ID, years of experiance and salary: " << endl;
    cin >> empName >> empID >> empexp >> empsalary;

    Employee emp1; // object created
    Employee *empPtr = &emp1; // pointer is created and assigned the address of emp1

    // using the pointer we are assigning the value to the object using pointer dereferencing & dot operator
    (*empPtr).addDetails(empID,empName,empexp,empsalary);
    (*empPtr).showDetails();

    //using the pointer we are assigning the value to the object using pointer dereferencing &arrow operator
    empPtr->addDetails(empID,empName,empexp,empsalary);
    empPtr->showDetails();
//dynomically allocating memory for the pointer object
//syntax:className * pointerName = new className();
    Employee *ptrEmp = new Employee;
    ptrEmp->addDetails(" 1234","Rahul",5,50000);
    ptrEmp->showDetails();
    //emp1.addDetails <==> (*empPtr).adddetails <==> empPtr->add details
}
