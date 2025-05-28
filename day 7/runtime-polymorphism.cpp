#include<iostream>
using namespace std;

class Base{ // base class
    public:
        void showBase(){
            cout << "Base member function has been called!" <<  endl;
        }
};

class Derived : public Base {
    public:
     void showBase(){// overriding base class function
        cout << "Derived member function has been called!" << endl;
        // syntax:base-class-name::member-function
        Base::showBase(); // calling the member of base class using scope resolution operator
     }
};

//Example2:
class Animal{ // base class
    public:
        void makeSound(){
            cout << "Animal make some sound!" << endl;
        }
};

class Dog : public Animal{ //Derived class
    public:
         void makeSound(){ // function overloading (same member function name)
            Animal :: makeSound(); // calling the member of base class using scope resolution operator
            cout << "dog barks!" << endl;
        }
};

class Cat : public Animal{ //Derived class
    public:
         void makeSound(){ // function overloading (same member function name)
            cout << "Cat meows!" << endl;
        }
};

int main(){
    //Base b1;
    //b1.showBase();

    Derived d1;
    d1.showBase();

    Dog dog1;
    dog1.makeSound();

    Cat cat1;
    cat1.makeSound();

}
