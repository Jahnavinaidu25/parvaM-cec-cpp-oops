#include<iostream>
using namespace std;

class Name {
    private:
        string name,branch;
        int sem;
    public:
        void setName(string n) {
            name = n;
        }
// as the parameter name& private member name are same, it will assign the garbage value
// to avoid the issue ,we can use 'this' keyword to refer the private member name
        void setDetails(string branch,int sem) {
           this->branch = branch;
            this->sem = sem;
        }

        void showName() {
            cout << "Your name is: " << name << endl;
        }
        void showDetails() {
            cout << "You're from " << branch << " branch, and you're studying in " << sem << " sem." << endl;
        }

};

int main() {
    string studentName,studentBranch;
    int studentSem;

    cout << "Enter your name,branch,sem: ";
    cin >> studentName >>studentBranch >> studentSem;

    Name name1;
    name1.setName(studentName);
    name1.showName();
    name1.setDetails(studentBranch,studentSem);
    name1.showDetails();
}