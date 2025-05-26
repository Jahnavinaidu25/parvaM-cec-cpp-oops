#include<iostream>
using namespace std;

class Bike{
    public:
        string brand,model,engine_type;
        int year,price;
    
    void injectFuel(){
        cout << "Ignited the Fuel-petrol!" << endl;  
    }

    void igniteFuel(){
        cout << "Ignited the Fuel " ;   
    }

    void start(string bikeModel){
        injectFuel();// Abstraction
        igniteFuel();// Abstraction
        cout << model << " Started, Happy Journey!" << endl;
    }

    void stopAcceleration(){//Internal data-hidden
        cout << "Acceleration Stopped!" << endl;
    }

    void stopFuelFlow(){//Internal data-hidden
        cout << "Stopping the Fuel" << endl;
    }

    void stop(){
        stopAcceleration();// Abstraction
        stopFuelFlow();// Abstraction
        cout << model << " stopped,Lock the Vehical!";
    }
};

int main(){
    Bike bike1;
    bike1.brand = "GT650";
    bike1.model = "Royal Enfield Continental GT 650";
    bike1.engine_type = "Twin engine";
    bike1.year = 2024;
    bike1.price = 350000;
    bike1.start(bike1.model);
    bike1.stop();
}