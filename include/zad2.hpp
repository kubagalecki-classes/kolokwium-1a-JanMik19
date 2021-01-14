#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public gotujMakaron
{
public:
  double ileMaki(double P) const { return P; }

};

// tutaj definicja metody gotujMakaron
const 