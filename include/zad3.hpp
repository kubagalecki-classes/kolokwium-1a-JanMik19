#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template<typename T>
size_t polejSosem(const Tagliatelle& obj, const T& t)
{
  return t.polej(obj);
}