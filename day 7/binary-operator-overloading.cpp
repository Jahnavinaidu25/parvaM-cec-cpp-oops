#include<iostream>
using namespace std;

class Complex{
    int real, imaginary ; //Private member

    public:
        Complex(){
            real = 0; //default constructor
            imaginary = 0;
        }

        Complex(int r,int i){ // parameterised constructor
            real = r;
            imaginary = i;
        }
        //binary Operator Overloading
        // Binary Operator Overloading

    Complex operator +(const Complex &c){
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        cout << "First Number:" << real << "+" << imaginary << "i" << endl;
        cout << "Second Number:" << c.real << "+" << c.imaginary << "i" << endl;
        return temp;
    }

    Complex operator -(const Complex &c){
        Complex temp;
        temp.real = real - c.real;
        temp.imaginary = imaginary - c.imaginary;
        cout << "First Number:" << real << "-" << imaginary << "i" << endl;
        cout << "Second Number:" << c.real << "-" << c.imaginary << "i" << endl;
        return temp;
    }

    void showSum(){
        cout << "Sum of two Complex Numbers: " << real << " + " << imaginary << "i" << endl;
    }

    void showDifference(){
        cout << "Difference of two Complex Numbers: " << real << " - " << imaginary << "i" << endl;
    }
};
 
int main(){
    int r1,r2,i1,i2;
    cout << "Enter the first Complex number(real number & imaginary number:eg.5 + 3i):" << endl;
    cin >> r1 >> i1;

    cout << "Enter the second Complex number(real number & imaginary number:eg.10 + 6i):" << endl;
    cin >> r2 >> i2;

    Complex comp1(r1,i1);
    Complex comp2(r2,i2);

    Complex sum = comp1 + comp2 ;
    Complex diff = comp1 - comp2 ;

    cout << "First Complex Number:" << r1 << "+" << i1 << "i" << endl;
    cout << "Second Complex Number:" << r2 << "+" << i2 << "i" << endl;

    sum.showSum();
    diff.showDifference();
}