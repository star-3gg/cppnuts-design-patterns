#include "../include/ToyFactory.h"
#include <cstddef>
#include <iostream>

using std::cout;
using std::endl;

namespace FDP {

// ToyFactory::ToyFactory() {}

Toy *ToyFactory::createToy(int type) {

  Toy *toy = NULL;

  switch (type) {
  case 1: {
    toy = new Car("fancy car", 2.3f);
    break;
  }
  case 2: {
    toy = new Bike;
    break;
  }
  case 3: {
    toy = new Plane;
    break;
  }
  default: {
    cout << "invalid toy type. Please enter valid type" << endl;
    return NULL;
  }
  }

  toy->prepareParts();
  toy->combineParts();
  toy->assembleParts();
  toy->applyLabel();

  return toy;
}

// ToyFactory::~ToyFactory() {}
} // namespace FDP
