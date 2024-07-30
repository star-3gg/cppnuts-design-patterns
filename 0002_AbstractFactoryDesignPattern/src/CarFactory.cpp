#include "Car.cpp"
using AFDP::LuxuryBody;
using AFDP::LuxuryTire;
using AFDP::SimpleBody;
using AFDP::SimpleTire;

namespace AFDP {

class CarFactory {
public:
  virtual Car *buildWholeCar() = 0;

protected:
  virtual Tire *buildTire() = 0;
  virtual Body *buildBody() = 0;

private:
  Car *car;
};

class SimpleCarFactory : public CarFactory {
public:
  Car *buildWholeCar() {
    Car *car = new Car((string) "SimpleCar");
    car->setTire(buildTire());
    car->setBody(buildBody());
    return car;
  };

protected:
  Tire *buildTire() { return new SimpleTire(); };
  Body *buildBody() { return new SimpleBody(); };

private:
};

class LuxuryCarFactory : public CarFactory {
public:
  Car *buildWholeCar() {
    Car *car = new Car((string) "LuxuryCar");
    car->setTire(buildTire());
    car->setBody(buildBody());
    return car;
  };

protected:
  Tire *buildTire() { return new LuxuryTire(); };
  Body *buildBody() { return new LuxuryBody(); };

private:
};

} // namespace AFDP
