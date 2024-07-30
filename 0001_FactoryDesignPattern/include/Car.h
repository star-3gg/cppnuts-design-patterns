#ifndef TOY
#define TOY

#include "Toy.h"

#endif // !TOY

namespace FDP {
class Car : public Toy {
public:
  Car();
  Car(string, float);

  // Car(Car &&) = default;
  // Car(const Car &) = default;
  // Car &operator=(Car &&) = default;
  // Car &operator=(const Car &) = default;
  void prepareParts();
  void combineParts();
  void assembleParts();
  void applyLabel();
  void showProduct();
  ~Car();

private:
};

} // namespace FDP
