#ifndef TOY
#define TOY
#include "Toy.h"
#endif // !TOY
namespace FDP {
class Car : public Toy {
public:
  Car();
  Car(string, float);
  void prepareParts();
  void combineParts();
  void assembleParts();
  void applyLabel();
  void showProduct();
  ~Car();

private:
};
} // namespace FDP
