#include<iostream>
using namespace std;

class Customer{
    public:
    string firstName, lastName;
    int age,Rating;

    //initialize the constuctor
    Customer(){
        firstName = " John";
        lastName = "Doe";
        age = 25;
        Rating = 3;
    }

    void showDetails(){
        cout << "Customer Name: " << firstName << " " << lastName << endl;
        cout << "Customer age: " << age << endl;
    }

    void giveRating(int Rating);//declared the member function

    void showRating(){
       cout << " You've given " << Rating << " star rating. Thank You!" << endl;
    } 
};
//scope resolution operator
void Customer :: giveRating(int rating){//defined the member function
    Rating = rating;
}

int main(){
    Customer cust1;//invoke the customer to assign the value

    cust1.showDetails();
    cust1.showRating();

    Customer cust2;

    cust2.firstName ="janu";
    cust2.lastName = "naidu";
    cust2.age=24;

    int starRating;

    cout << "Give your Rating(0 to 5):";
    cin >> starRating;
    cust2.showDetails();    
    cust2.giveRating(starRating);
    cust2.showRating();
}
