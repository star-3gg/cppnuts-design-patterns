#include "CarFactory.cpp"
using AFDP::Car;
using AFDP::CarFactory;
using AFDP::LuxuryCarFactory;
using AFDP::SimpleCarFactory;

// INFO: Macros contorl type of factory (uncomment to set type)
// #define SIMPLE_CAR 1
#define LUXURY_CAR 1

int main(int argc, char *argv[]) {
#ifdef SIMPLE_CAR

  CarFactory *factory = new SimpleCarFactory();

#elif LUXURY_CAR
  CarFactory *factory = new LuxuryCarFactory();

#endif // DEBUG

  Car *car = factory->buildWholeCar();
  car->printDetails();

  return 0;
}
