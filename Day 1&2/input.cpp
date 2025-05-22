#include<iostream>
using namespace std;

int main(){
    string first_Name, college, branch;
    char sem;
    int age;

    cout << "Enter your name: ";
    cin >> first_Name;
    cout << "Enter your college name in short-form: ";
    cin >> college;
    cout << "Enter your branch name in short-form : ";
    cin >> branch;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your semester: ";
    cin >> sem;
    cout << "Your name is " << first_name << ",You're " << age 
    << " Years old.you're studying in " << college << " college in "
    << branch << " branch in " << sem << "semester";
}