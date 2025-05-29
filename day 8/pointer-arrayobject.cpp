#include <iostream>
using namespace std;

class Employee
{
private:
    string employeeID, employeeName;
    int experiance;
    float salary;

public:
    void addDetails(string id, string name, int exp, float salary)
    {
        employeeID = id;
        employeeName = name;
        experiance = exp;
        this->salary = salary;
    }

    void showDetails()
    {
        cout << "The employee with name " << employeeName << " bearing " << employeeID << " having "
             << experiance << " years of experiance and receives a salary of Rs. " << salary << "/-" << endl;
    }
};

class Skill : public Employee
{
private:
    int skillCount;
    string skills[10]; //normal/static array of size 10

public:
    void setSkills(int count){
        skillCount = count;
        cout << "Enter the " << count << "technologies you're familier with: " << endl;
        for (int i = 0; i < count; i++)
        {
            cout << "skill " << i + 1 << ":";
            cin >> skills[i];
        }
    }

    void showSkills() {
        cout << "Skills known: " << endl;
        for (int i = 0; i < skillCount; i++)
        {
            cout << " i+1 " <<" . " << skills[i] << endl;
        }
    }
};
int main(){
    string emp_name, emp_id;
    int emp_exp, skill_count;
    float emp_salary;

    cout << "Enter the following details of the employee: " << endl;
    cout << "Employee ID, Name, Years of Experiance, Salary: " << endl;
    cin >> emp_id >> emp_name >> emp_exp >> emp_salary;
//pointer reffering to the object s1 of skill class which can also inherit the properties of Employee class
    Skill s1;
    Skill *emp1 = &s1;

    s1.addDetails(emp_id, emp_name, emp_exp, emp_salary);
    s1.showDetails();

    cout << "Enter the number of technologies you know: " << endl;
    cin >> skill_count;

    emp1->setSkills(skill_count);
    emp1->showDetails();
    emp1->showSkills();
}