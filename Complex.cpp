#include "Complex.h"

// using namespace Complex_numbers;

Complex_numbers::Complex::Complex() {
  _real = new double;
  _imag = new double;

  *_real = 0.0;
  *_imag = 0.0;
}

Complex_numbers::Complex::~Complex() {
  delete _real;
  delete _imag;
}

std::string Complex_numbers::Complex::to_string() {
  return "( " + std::to_string(*(_real)) + " , " + std::to_string(*(_imag)) +
         " )";
}