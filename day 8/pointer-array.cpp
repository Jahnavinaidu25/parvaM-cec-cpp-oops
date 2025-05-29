#include<iostream>
using namespace std;

class employee{
    private:
        string employeeid , employeename;
        int experience ;
        float salary;

    public:
        void adddetails(string id , string name , int exp , float salary){
            employeeid = id;
            employeename = name;
            experience = exp;
            this->salary = salary;
        }

        void showdetails(){
            cout << "the employee with name " << employeename << " bearing "<< employeeid << "have"
            << experience << "years of experioence and recive a salary of rs." << salary << "/-" << endl;
        }

};

class skill : public employee{ // default constructor without initialising any value
        int skillcount;
        string*skills;
    public:
        skill(){
            cout << "no data found!";
        }
        skill(int count){ // parameterized constructor
            skillcount = count;
            skills = new string[skillcount];
            cout << "enter the " << count << "tecnologies you're familiar with:" << endl;
            for(int i=0; i<count; i++){ // array initiation
                cout << "skill" << i+1 << ":"<<endl;
                cin >> skills[i];
            }
        }
        void showskills(){
            cout << "skills know: " << endl;
            for(int i=0; i< skillcount ; i++){//display the contect of skill array
                cout << i+1 << "." << skills[i] << endl;
            }
        }
        ~skill(){
            delete[] skills; //free uo the memory located by the pointer array using delete keyword
            cout << "memory has been cleared by thr destructor";
        }
};

int main(){
    string emp_name, emp_id;
    int emp_exp , skill_count;
    float emp_salary;

    cout << "enter the following details of the employee : " << endl;
    cout << "employee id, name, years of experience and salary : " << endl;
    cin >> emp_id >> emp_name >> emp_exp >> emp_salary;
    
    cout << "enter the number of tecnologies you're familar with :  " << endl;
    cin >> skill_count;

    skill s1(skill_count);
    skill * emp1 = &s1;//pointer reffering to ther object s1 of skill class can also inherit the properties of employee class

    s1.adddetails(emp_id , emp_name , emp_exp , emp_salary);

    emp1->showdetails();
    emp1->showskills();

    skill s2;
}