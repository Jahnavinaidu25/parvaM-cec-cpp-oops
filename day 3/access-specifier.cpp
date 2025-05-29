<<<<<<< HEAD
#include<iostream>
using namespace std;

class Bank{
    private:
       int balance=0;
    public:
       //member data of the class
       string custName,custEmail;
       int acNumber;

       void createAccount(string cName, string cEmail){
           custName = cName;
           custEmail = cEmail;
       }

       void displayInfo(){
        cout << "Customer Name:" << custName << endl;
        cout << "Customer Email:" << custEmail << endl;
       }
       //setter
       void addBalance(int account,int amount){
            balance += amount;
            cout << "The amount has been deposited successfully!" << endl;
       }
       //setter
       void withdrawAmount(int account,int amount){
            balance -= amount;
            cout << "The amount has been withdrawn successfully!" << endl;
       }
       //getter
       void checkBalance(){
          cout << " Bank Balance: " << balance << endl;
       }
};

int main(){
    Bank cust1; //object declared
    string name, email;
    int acNumber, amount;

    // we can assign the value to the public memeber
    cust1.custName = " janu";
    cust1.custEmail = "janu@gmail.com";
    cust1.acNumber = 1234567890;

    //cust1.balance=8000;//we cant assign the value to the private member
    cout << "Enter your name:";
    cin >> name;
    cout << "Enter your email id:";
    cin >> email;
    cout << "Enter your account number :";
    cin >> acNumber;
    cout << "Enter the amount to be deposited:";
    cin >> amount ;

    cust1.createAccount(name, email);
    cust1.displayInfo();
    cust1.addBalance(acNumber , amount);
    cust1.checkBalance();

    cout << "Enter your account number :";
    cin >> acNumber;
    cout << "Enter the amount to be withdrawn:";
    cin >> amount;
    cust1.withdrawAmount(acNumber,amount);
    cust1.checkBalance();

=======
#include<iostream>
using namespace std;

class Bank{
    private:
       int balance=0;
    public:
       //member data of the class
       string custName,custEmail;
       int acNumber;

       void createAccount(string cName, string cEmail){
           custName = cName;
           custEmail = cEmail;
       }

       void displayInfo(){
        cout << "Customer Name:" << custName << endl;
        cout << "Customer Email:" << custEmail << endl;
       }
       //setter
       void addBalance(int account,int amount){
            balance += amount;
            cout << "The amount has been deposited successfully!" << endl;
       }
       //setter
       void withdrawAmount(int account,int amount){
            balance -= amount;
            cout << "The amount has been withdrawn successfully!" << endl;
       }
       //getter
       void checkBalance(){
          cout << " Bank Balance: " << balance << endl;
       }
};

int main(){
    Bank cust1; //object declared
    string name, email;
    int acNumber, amount;

    // we can assign the value to the public memeber
    cust1.custName = " janu";
    cust1.custEmail = "janu@gmail.com";
    cust1.acNumber = 1234567890;

    //cust1.balance=8000;//we cant assign the value to the private member
    cout << "Enter your name:";
    cin >> name;
    cout << "Enter your email id:";
    cin >> email;
    cout << "Enter your account number :";
    cin >> acNumber;
    cout << "Enter the amount to be deposited:";
    cin >> amount ;

    cust1.createAccount(name, email);
    cust1.displayInfo();
    cust1.addBalance(acNumber , amount);
    cust1.checkBalance();

    cout << "Enter your account number :";
    cin >> acNumber;
    cout << "Enter the amount to be withdrawn:";
    cin >> amount;
    cust1.withdrawAmount(acNumber,amount);
    cust1.checkBalance();

>>>>>>> e3e3cabe7110e2fd9ae54e2f43bd4f5f3e664403
}