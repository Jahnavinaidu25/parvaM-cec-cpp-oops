#include<iostream>
using namespace std;

int main(){
    int a;
    // syntax for declaring the pointer:
    //datatype *pointer_name
    //assign the address to the pointer: &variable_name
    //datatype of pointer should be same as reference variable datatype
    // *refers to the pointer variable
    // ptr refers to the address of the pointer
    // & refers to the address of the variable
    // *ptr refers to the value of the pointer
    int *ptr = &a;

    float decimal;
    float *f = &decimal;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter any decimal value : ";
    cin >> decimal;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of Pointer ptr: " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;
   
    cout << "Value of decimal: " << decimal << endl;
    cout << "Address of decimal: " << &decimal << endl;
    cout << "Value of Pointer ptr: " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;
}