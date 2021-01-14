#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle
{
  double L, W, R; 
  const double C;
public:
  Tagliatelle() : L(0.5), W(0.5), R(0.5) {} 
  Tagliatelle(double L_, double W_, double R_) : L(L_), W(W_), R(R_) {} 
  ~Tagliatelle() {} 
  double ileMaki(unsigned P) const
  {
    return P * L * W * (1. - R) * C; 
  }
};