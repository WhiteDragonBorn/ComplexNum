#pragma once
#include <string>

typedef double* dbp;

namespace Complex_numbers {
class Complex {
 private:
  dbp _real;
  dbp _imag;

 public:
  Complex();
  ~Complex();

  std::string to_string();

  Complex operator+(const Complex&);
  Complex operator-(const Complex&);
  Complex operator*(const Complex&);
  Complex operator/(const Complex&);
};
}  // namespace Complex_numbers
