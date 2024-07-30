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
  // ToyFactory();

  static Toy *createToy(int type);

  // ToyFactory(ToyFactory &&) = default;
  // ToyFactory(const ToyFactory &) = default;
  // ToyFactory &operator=(ToyFactory &&) = default;
  // ToyFactory &operator=(const ToyFactory &) = default;
  // ~ToyFactory();

private:
};

} // namespace FDP
