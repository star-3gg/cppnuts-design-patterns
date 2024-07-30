#include "../include/Toy.h"

namespace FDP {

Toy::Toy() {
  this->name = "default";
  this->price = 3.4f;
}

Toy::Toy(string name, float price) {
  this->name = name;
  this->price = price;
};

void Toy::prepareParts() {}
void Toy::combineParts() {}
void Toy::assembleParts() {}
void Toy::applyLabel() {}
void Toy::showProduct() {}

Toy::~Toy() {}

} // namespace FDP
