#include<iostream>
using namespace std;

class animal{ //base class - level 0
    public:
        string name;
        void setName(string animalName){
            name = animalName;
        }

        void showAnimal(){
            cout << "name of the animal:" << name<<endl;
        }
        
};
//Animal-> carnivore (symbolic representation)
//animal class is deriving from carnivore class
//= carnivore(symbolic representation)
class carnivore : public animal{ //derived class - level 1
    string vegitation;
    public:
        void setFood(string food){
            vegitation = food;
        }
        void showFood(){
            cout << "type of animal:" << vegitation << endl;
        }

};

//mammal : carnivore (symbol representation)
class mammal : public carnivore{ //derived class - level 2
    string habitat;
    public:
        void setHabitat(string place){
            habitat = place;

        }
        void showHabitat(){
            cout << "living place:" << habitat << endl;
        }
};

int main(){
    string animal_name, food_type, place_of_living;

    cout << "enter the name of animal & food type and place of living:";
    cin >> animal_name  >> food_type >>place_of_living;

    carnivore c1;
    c1.setName(animal_name);
    c1.setFood(food_type);

    mammal m1;
    m1.setName(animal_name);
    m1.setFood(food_type);
    m1.setHabitat(place_of_living);

    m1.showAnimal();
    m1.showFood();
    m1.showHabitat();
}