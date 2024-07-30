#ifndef TOY
#define TOY
#include "Toy.h"
#endif // !TOY
namespace FDP {
class Plane : public Toy {
public:
  void prepareParts();
  void combineParts();
  void assembleParts();
  void applyLabel();
  void showProduct();

private:
};
} // namespace FDP
