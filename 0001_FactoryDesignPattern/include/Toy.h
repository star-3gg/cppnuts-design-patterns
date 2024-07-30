#include <string>
using std::string;
namespace FDP {
class Toy {
public:
  Toy();
  Toy(string, float);
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
