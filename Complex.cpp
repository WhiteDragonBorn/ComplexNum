#include "Complex.h"

Complex_numbers::Complex::Complex() {
  _real = new double(0.0);
  _imag = new double(0.0);
}

Complex_numbers::Complex::Complex(const double& x, const double& y) {
  _real = new double(x);
  _imag = new double(y);
}

Complex_numbers::Complex::Complex(const Complex& other) {
  _real = new double(*(other._real));
  _imag = new double(*(other._imag));
}

Complex_numbers::Complex::~Complex() {
  *(_real) = NULL;
  *(_imag) = NULL;
  delete _real;
  delete _imag;
  _real = nullptr;
  _imag = nullptr;
}

std::string Complex_numbers::Complex::to_string() const {
  std::string strToReturn =
      "( " + std::to_string(*(_real)) + " , " + std::to_string(*(_imag)) + " )";
  return strToReturn;
}

Complex_numbers::Complex Complex_numbers::Complex::conjugate() const {
  Complex toReturn(*(this->_real), (-1.0) * *(this->_imag));
  return toReturn;
}

Complex_numbers::Complex& Complex_numbers::Complex::operator=(
    const Complex& num) {
  *_real = *(num._real);
  *_imag = *(num._imag);
  return *this;
}

Complex_numbers::Complex Complex_numbers::Complex::operator+(
    const Complex& other) const {
  Complex toReturn(*(this->_real) + *(other._real),
                   *(this->_imag) + *(other._imag));
  return toReturn;
}

Complex_numbers::Complex Complex_numbers::Complex::operator-(
    const Complex& other) const {
  Complex toReturn(*(this->_real) - *(other._real),
                   *(this->_imag) - *(other._imag));
  return toReturn;
}

Complex_numbers::Complex Complex_numbers::Complex::operator*(
    const Complex& other) const {
  double a = *(this->_real);
  double b = *(this->_imag);

  double c = *(other._real);
  double d = *(other._imag);

  Complex toReturn(a * c - b * d, a * d + b * c);
  return toReturn;
}

Complex_numbers::Complex Complex_numbers::Complex::operator/(
    const Complex& other) const {
  double a = *(this->_real);
  double b = *(this->_imag);

  double c = *(other._real);
  double d = *(other._imag);

  Complex toReturn((a * c + b * d) / double(c * c + d * d),
                   (b * c - a * d) / double(c * c + d * d));
  return toReturn;
}

bool Complex_numbers::Complex::operator==(const Complex& other) const {
  return *_real == *(other._real) && *_imag == *(other._imag);
}

std::ostream& Complex_numbers::operator<<(std::ostream& os,
                                          const Complex_numbers::Complex& num) {
  os << num.to_string();
  return os;
}

std::istream& Complex_numbers::operator>>(std::istream& os,
                                          const Complex_numbers::Complex& num) {
  os >> *(num._real) >> *(num._imag);
  return os;
}

// Complex_numbers::Complex::Complex(const dbp& _real, const dbp& _imag)
//     : _real(_real), _imag(_imag) {}
