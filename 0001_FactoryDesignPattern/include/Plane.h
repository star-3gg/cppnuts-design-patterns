#ifndef TOY
#define TOY

#include "Toy.h"

#endif // !TOY

namespace FDP {
class Plane : public Toy {
public:
  // Plane();
  // Plane(Plane &&) = default;
  // Plane(const Plane &) = default;
  // Plane &operator=(Plane &&) = default;
  // Plane &operator=(const Plane &) = default;
  void prepareParts();
  void combineParts();
  void assembleParts();
  void applyLabel();
  void showProduct();
  // ~Plane();

private:
};

} // namespace FDP
