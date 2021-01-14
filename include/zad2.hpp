#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron
{
public:
  Penne() {}
  ~Penne() {}
  double ileMaki(double P) const { return (double)P; }
};

// tutaj definicja metody gotujMakaron
Makaron* Makaron::gotujMakaron(const std::string& obj)
{
  if (obj.front() == obj.back())
  {
    Makaron* wsk = new Tagliatelle(3.14,0.42,0.1);
    return wsk;
  }
  else
  {
    Makaron* wsk = new Penne;
    return wsk;
  }
}