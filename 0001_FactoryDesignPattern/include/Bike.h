#ifndef TOY
#define TOY
#include "Toy.h"
#endif
namespace FDP {
class Bike : public Toy {
public:
  void prepareParts();
  void combineParts();
  void assembleParts();
  void applyLabel();
  void showProduct();

private:
};
} // namespace FDP
