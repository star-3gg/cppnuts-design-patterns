#ifndef __io__
#define __io__
#include <iostream>
using std::cout;
using std::endl;
#endif // !__io__

#include <string>

using std::string;

namespace AFDP {

class Tire {
protected:
  string name;
  int pressure;

public:
  Tire(string n, int pressure) : name(n), pressure(pressure){};
  virtual string getName() { return name; }
  virtual int getPressure() { return pressure; }
};

class SimpleTire : public Tire {
public:
  SimpleTire() : Tire("SimpleTire", 75) {}
};

class LuxuryTire : public Tire {
public:
  LuxuryTire() : Tire("LuxuryTire", 100) {}
};

class Body {
protected:
  string name;
  int strength;

public:
  Body(string n, int strength) : name(n), strength(strength){};
  virtual string getName() { return name; }
  virtual int getStrength() { return strength; }
};

class SimpleBody : public Body {
public:
  SimpleBody() : Body("SimpleBody", 75) {}
};

class LuxuryBody : public Body {
public:
  LuxuryBody() : Body("LuxuryBody", 100) {}
};

class Car {
public:
  Car(string type) : name(type) {}

  void setTire(Tire *tire) {
    this->tire = tire;
    return;
  }
  void setBody(Body *body) {
    this->body = body;
    return;
  }

  void printDetails() {
    cout << endl << "Car: " << name << endl;
    cout << "Tire: " << tire->getName() << " Pressure: " << tire->getPressure()
         << endl;
    cout << "Body: " << body->getName() << " Strength: " << body->getStrength()
         << endl
         << endl;
    return;
  }

protected:
  string name;
  Tire *tire;
  Body *body;

private:
};

} // namespace AFDP
