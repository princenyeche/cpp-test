#include <iostream>
#include <string>
using namespace std;

class Car {
// access modifier
public:
  int x;
  string y;
  string model;
  // constructor class inside class, you can also declare this outside
  // the class by using scope resolution ( :: )
  Car(string brand, int year, string z) {
    x = year;
    y = brand;
    model = z;

  }
private:
  string j;

// setter method, using void doesn't return anything
public:
  void setCar(string c) {
    j = c;
  }
  // getter method
  string getCar() {
    return j;
  }


};

class Animals {
public:
  string dog;
  string cat;

  string Bark(string c) {
    dog = c;
    return dog;
  }
};
// inheritance
class Vehicle: public Animals {
};

int main() {
  Car mycar("Mazda", 2020, "Series X");
  mycar.setCar("BMW");
  Vehicle myv;
  cout << "My Car is " + mycar.getCar() + " and the brand is " + mycar.model + "\n";
  cout << "My Dog speaks " << myv.Bark("Woof") << " and the car is " + mycar.getCar() + "\n";
  return 0;
}
