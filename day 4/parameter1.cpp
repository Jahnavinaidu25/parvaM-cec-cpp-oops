#include<iostream>
using namespace std;

class Wish{
      private:
         string name;
         int age;

      public:
         Wish(){// Default constructor
            name = "Unknown";
            age = 0;
         }

         Wish(string n, int a);// Parameterized constructor
         
         void birthdayWishes(); //Declared the member functions
};

//Defining the rules of Parameterized constructor outside the class using scope Resolution operator
Wish :: Wish(string n, int a){ //syntax:className::constructor(parameters)(no return type required)
    name = n;
    age = a;
}
//definig the member function out of the class using scope resolution operator
void Wish :: birthdayWishes(){ // syntax:return_type className ::member(parameters)(return type is must)
        cout << "Happy Birthday " << name << "! Now you're " << age << " years old." << endl;
         }

int main(){
    string personName;
    int personAge;

    Wish person1; // object declared
    person1.birthdayWishes();

    cout << " Enter your name:";
    cin >> personName;
    cout << " Enter your age:";
    cin >> personAge;

    Wish person2(personName,personAge);
    person2.birthdayWishes();
}