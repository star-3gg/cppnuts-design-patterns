#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#ifndef TOY

#define TOY
#include "../include/Toy.h"

#endif // !TOY

#include "../include/ToyFactory.h"

using FDP::Toy;
using FDP::ToyFactory;

int main(int argc, char *argv[]) {
  int type;
  while (true) {
    cout << endl << "Enter type number (1 ... 3) or Zero for exit" << endl;
    cin >> type;
    if (!type) {
      break;
    }

    Toy *v = ToyFactory::createToy(type);

    if (v) {
      v->showProduct();
      delete v;
    }
  }

  cout << "[ Exit ]" << endl;

  return 0;
}
