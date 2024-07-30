#ifndef TOY
#define TOY
#include "Toy.h"
#endif

namespace FDP {
class Bike : public Toy {
public:
  // Bike();
  // Bike(Bike &&) = default;
  // Bike(const Bike &) = default;
  // Bike &operator=(Bike &&) = default;
  // Bike &operator=(const Bike &) = default;
  void prepareParts();
  void combineParts();
  void assembleParts();
  void applyLabel();
  void showProduct();
  // ~Bike();

private:
};

} // namespace FDP
