<<<<<<< HEAD
#include<iostream>
using namespace std;

class Calculate{
      public:
        //member data
         int num1,num2;
         float res;

         //Declare the constructor & It is also a Default Construction (no parameters)
         //ctrl+?:comment
         Calculate(){
            num1=5;
            num2=10;
        }

        //member function
        void showOutput(){
            cout << "Addition:"<< num1+num2 << endl;
            cout << "Subtraction:"<< num1-num2 << endl;
            cout << "Multipliction:"<< num1*num2 << endl;
            cout << "Quotient:"<< num2/num1 << endl;
            cout << "Remainder:"<< num2%num1 << endl;
          }
};

int main(){
    //initializing the value using constructor autometically when the object is declared
    Calculate c1;//call is object
    //Assigning the value to the data members
    Calculate c2;
    c2.num1=25;
    c2.num2=30;
    c1.showOutput();
    cout << " -------------------" <<endl;
    c2.showOutput();
}
=======
#include<iostream>
using namespace std;

class Calculate{
      public:
        //member data
         int num1,num2;
         float res;

         //Declare the constructor & It is also a Default Construction (no parameters)
         //ctrl+?:comment
         Calculate(){
            num1=5;
            num2=10;
        }

        //member function
        void showOutput(){
            cout << "Addition:"<< num1+num2 << endl;
            cout << "Subtraction:"<< num1-num2 << endl;
            cout << "Multipliction:"<< num1*num2 << endl;
            cout << "Quotient:"<< num2/num1 << endl;
            cout << "Remainder:"<< num2%num1 << endl;
          }
};

int main(){
    //initializing the value using constructor autometically when the object is declared
    Calculate c1;//call is object
    //Assigning the value to the data members
    Calculate c2;
    c2.num1=25;
    c2.num2=30;
    c1.showOutput();
    cout << " -------------------" <<endl;
    c2.showOutput();
}
>>>>>>> e3e3cabe7110e2fd9ae54e2f43bd4f5f3e664403
