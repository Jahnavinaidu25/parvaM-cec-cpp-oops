#include<iostream>
using namespace std;

class Area{
    private:
        int length , breadth;

    public:
        int result;
        Area(){ // default constructors ( no parameters)
          length=0;
          breadth=0;
        }
        Area(int a , int b){ // parameterized constructors
           length=a;
           breadth=b;
        }

        void calculateArea(){
            result = length * breadth;
            cout << "Area of rectangle with length:" << length << " and breadth:" << breadth 
            << " is equal to " << result << endl;
        }
};
 
int main(){
    int len , wid;
    Area rect1;//object 1 created
    rect1.calculateArea();

    cout << " Enter the length & breadth for finding the Area of rectangle:" ;
    cin >> len >> wid;

    Area rect2(len,wid); //object 2 created
    rect2.calculateArea();
}
