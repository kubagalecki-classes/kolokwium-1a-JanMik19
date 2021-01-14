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
  double ileMaki(double P) const { return P; }
};

// tutaj definicja metody gotujMakaron
Makaron* Makaron::gotujMakaron(const string& obj) const
{
  Makaron* wsk;

  if (obj.front() == obj.back())
    wsk = new Tagliatelle(3.14,0.42,0.1);
  else
    wsk = new Penne;  
  
  return wsk;
}