#include <string>
using std::string;

namespace FDP {

class Toy {
public:
  Toy();
  Toy(string, float);
  // Toy(Toy &&) = default;
  // Toy(const Toy &) = default;
  // Toy &operator=(Toy &&) = default;
  // Toy &operator=(const Toy &) = default;
  virtual void prepareParts();
  virtual void combineParts();
  virtual void assembleParts();
  virtual void applyLabel();
  virtual void showProduct();
  virtual ~Toy();

private:
protected:
  string name;
  float price;
};
} // namespace FDP
