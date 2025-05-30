#include<iostream>
#include<fstream>
using namespace std;
class Car {
    private:
    string brand,model,varient,features[10];
    int year,price,featureCount;
    public:
        void addCarDetails(string carBrand, string carModel, string carVarient, int year, int price) {
            brand = carBrand;
            model = carModel;
            varient=carVarient;
            this->year=year;
            this->price=price;
        }
        void addCarFeatures(int count){
            featureCount=count;
             cin.ignore();
            cout<<" Enter the "<<count<<" features of the car: ";
            for ( int i=0; i<count; i++) {
                cout << "Feature- " << i + 1 << ": ";
               getline(cin,features[i]); // can enter multiple words along with space
        }
        cout << "Click Enter Button for next input"<< endl;
    }
        void storeCarDetails(){
            ofstream store("car_details.txt",ios::app);
            store<<" The car details are as follows : "<< endl;
            store<<" Car Brand : "<< brand<< endl;
            store<<" Car Model : "<< model<< endl;
            store<<" Car varient : "<< varient<< endl;
            store<<" Launch year : "<< year<< endl;
            store<<" Offer Price: "<< price<< endl;
            store<<" Car has these features: "<< endl;
            for(int i=0; i < featureCount; i++){
                store << "\t" << i+1 << "." << features[i] << endl;
        }
        store << "--------------------------------------------------\n";
    }
    void appendCarDetails(){
        ofstream store("car_details.txt",ios::app);
        storeCarDetails();
    }
};
int main(){
    string car_brand, car_model, car_variant, car_features[10];
    int features_count, launch_year, launch_price;

    cout << "Enter the Car Details: " << endl;
    cout << "Brand, Model, Variant, Launch Year, Launch Price: " << endl;
    cout << "Ex: Tata, Curvv, (Petrol/Diesel/EV), 2025, 1500000" << endl;
    cin >> car_brand >> car_model >> car_variant >> launch_year >> launch_price;

    cout << "Enter the Number of features: " << endl;
    cin >> features_count;

    Car car1;
    car1.addCarDetails(car_brand, car_model, car_variant, launch_year, launch_price);
    car1.addCarFeatures(features_count);
    car1.storeCarDetails();

    Car car2;
    car2.addCarDetails("Audi","Q6","petrol",2019,12000000);
    car2.addCarFeatures(4);
    car2.storeCarDetails();
}

