#include<iostream>
using namespace std;

int main(){
    //Declaring the variables with different datatype
    string name, college, branch , usn;
    char section;
    int age, sem;
    bool isStudent;
    float height;
    
    //Intializing/assigning the values to the variables
    name = "Jahnavi";
    section = 'A';
    age = 18 ;
    college = "CEC";
    branch = "AI/ML";
    usn = "1CE24AI033";
    sem = 2;
    isStudent = true;
    height = 4.7;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "College: " << college << ", Branch: " << branch << endl;
    cout << "USN: " << usn << ", Sem:" << sem << endl;
    cout << "Section: " << section << ", Is he/she a student:" << isStudent << endl;
}
