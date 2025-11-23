#include <iostream>
#include <string>
#include "src/TriangleNumberCalculator.hpp"

using namespace std;

int main() {
  TriangleNumberCalculator calculator;

  cout << calculator.value(1) << endl;
  cout << calculator.value(2) << endl;
  cout << calculator.value(4) << endl;

  cout << calculator.add(1, 1) << endl;
  cout << calculator.add(2, 3) << endl;
  cout << calculator.add(4, 2) << endl;

  cout << calculator.subtract(1, 1) << endl;
  cout << calculator.subtract(2, 3) << endl;
  cout << calculator.subtract(4, 2) << endl;

}
