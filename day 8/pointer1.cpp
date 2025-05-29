#include<iostream>
using namespace std;

int main(){
    int age;
    int *ptrAge = &age; // pointer to age variable

    string name;
    string *namePtr = &name; // pointer to name variable
    cout << "Enter your name & age: ";
    cin >> name >> age;

    //*PtrAge & *namePtr -pointer dereferencing
    cout << "Your name is " << (*namePtr) << ",You're " << (*ptrAge) << "years old." << endl;
    cout << "The address of name is stored in pointer(namePtr):" << namePtr << endl;
    cout << "The address of age is stored in pointer(ptrAge):" << ptrAge << endl;

    int *num1 = new int(5); // dynamic Memory Allocation
    //the reference variable is not needed for assigining the address to the pointer wecan use new keyword
    cout << "The value within the pointer num:" <<(*num1) << endl;
    int size;

    int *arr = new int[size];

    cout << " Enter the size of the array: ";
    cin >> size;

    cout << "Enter the " << size << "elements of the array: ";
    for (int i = 0; i<size; i++){
    cin >> arr[i];
    }

    cout << "The array contains " << size << "elements, they are:" << endl;
    for (int i = 0; i<size; i++){
    cout << arr[i] << endl;
    }
}
