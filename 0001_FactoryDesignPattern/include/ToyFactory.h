#include "Bike.h"
#include "Car.h"
#include "Plane.h"
#ifndef TOY
#define TOY
#include "Toy.h"
#endif // !TOY
namespace FDP {
class ToyFactory {
public:
  static Toy *createToy(int type);

private:
};
} // namespace FDP
