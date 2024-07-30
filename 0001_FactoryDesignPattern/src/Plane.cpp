#include "../include/Plane.h"
#include <iostream>
using std::cout;
using std::endl;
namespace FDP {
void Plane::prepareParts() {
  cout << "preparing plane '" << this->name << "' parts" << endl;
  return;
}
void Plane::combineParts() {
  cout << "combining plane parts" << endl;
  return;
}
void Plane::assembleParts() {
  cout << "assembling plane parts" << endl;
  return;
}
void Plane::applyLabel() {
  cout << "applying plane label" << endl;
  return;
}
void Plane::showProduct() {
  cout << "showing plane product" << endl;
  return;
}
} // namespace FDP
