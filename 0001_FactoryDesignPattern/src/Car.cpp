#include "../include/Car.h"
#include <iostream>

using std::cout;
using std::endl;

namespace FDP {
Car::Car() {
  this->name = "default";
  this->price = 3.4f;
}

Car::Car(string name, float price) {
  this->name = name;
  this->price = price;
};

void Car::prepareParts() {
  cout << "preparing car '" << this->name << "' parts" << endl;
  return;
}
void Car::combineParts() {
  cout << "combining car parts" << endl;
  return;
}
void Car::assembleParts() {
  cout << "assembling car parts" << endl;
  return;
}
void Car::applyLabel() {
  cout << "applying car label" << endl;
  return;
}
void Car::showProduct() {
  cout << "showing car product" << endl;
  return;
}

Car::~Car() {}
} // namespace FDP
