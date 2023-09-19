#pragma once
#include <iostream>
#include <sstream>
#include <string>

typedef double* dbp;

namespace Complex_numbers {
class Complex {
 private:
  dbp _real;
  dbp _imag;

 public:
  Complex();
  Complex(const double&, const double&);
  Complex(const Complex&);
  ~Complex();

  std::string to_string() const;
  std::string to_string(const int& precision) const;
  Complex conjugate() const;

  Complex& operator=(const Complex&);
  Complex operator+(const Complex&) const;
  Complex operator-(const Complex&) const;
  Complex operator*(const Complex&) const;
  Complex operator/(const Complex&) const;
  bool operator==(const Complex& other) const;

  friend std::ostream& operator<<(std::ostream&, const Complex&);
  friend std::istream& operator>>(std::istream&, const Complex&);
};
}  // namespace Complex_numbers
