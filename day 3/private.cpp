#include<iostream>
using namespace std;

class Company {
    private:
        string cin;  // Corporate Identity Number
        int totalWorth=0;
    public:
        string gstNumber, location;
        int numofEmp;

        // Setter method
        void setDetails(string cinNum, int worth) {
            cin = cinNum;
            totalWorth = worth;
        }

        // Getter method
        void getDetails() { // Removed parameter
            cout << "Corporate Identity Number: " << cin << endl;
            cout << "Total worth of the Company: " << totalWorth << endl;
        }

        void getBasicDetails(); // Declare the member function
};

// Function definition outside the class
void Company::getBasicDetails() {
    cout << "GST Number: " << gstNumber << endl;
    cout << "Location: " << location << endl;
    cout << "Number of Employees: " << numofEmp << endl;
}

int main() {
    Company comp1; // Object created

    // Corrected input statements
    cout << "Enter the GST Number: ";
    cin >> comp1.gstNumber; 
    cout << "Enter the Location: ";
    cin >> comp1.location;
    cout << "Enter the number of Employees: ";
    cin >> comp1.numofEmp;

    comp1.getBasicDetails();

    string cinNumber;
    int CompanyWorth;

    cout << "Enter the Corporate Identity Number: ";
    cin >> cinNumber;
    cout << "Enter the Total Worth of the Company: ";
    cin >> CompanyWorth;

    comp1.setDetails(cinNumber, CompanyWorth);
    comp1.getDetails(); // Removed unnecessary parameter

    return 0;
}