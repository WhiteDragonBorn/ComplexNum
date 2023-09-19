#include <iomanip>

#include "Complex.h"

using std::cin;
using std::cout;
using std::endl;
using namespace Complex_numbers;

int main(int argc, char* argv[]) {
  Complex A(2, 3);
  Complex C = A;
  Complex B(1, 6);

  cout << C.to_string(2) << endl;

  cout << (A + B).to_string() << endl;
  cout << (A - B).to_string() << endl;
  cout << (A * B).to_string() << endl;
  cout << (A / B).to_string() << endl;
  cout << A.conjugate().to_string() << endl;
  cout << (A == B) << endl;

  cout << C;
  cin >> C;
  cout << endl;
  cout << C << endl;
}