#include <iomanip>

#include "Complex.h"

using std::cin;
using std::cout;
using std::endl;
using namespace Complex_numbers;

int main(int argc, char* argv[]) {
  Complex A(2, 3);
  Complex B(1, 6);
  Complex C;
  cout << (A + B).to_string() << endl;
  cout << (A - B).to_string() << endl;
  cout << (A * B).to_string() << endl;
  cout << (A / B).to_string() << endl;
  cout << A.conjugate().to_string() << endl;
  cout << (A == B) << endl;
  cin >> C;
  cout << endl;
  cout << C << endl;
}