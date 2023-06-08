#include <iostream>

int fullPyramid() {

  // full  pyramid(extra space at end)
  int n = 6;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      std::cout << " ";
    }
    for (int k = 0; k < i + 1; k++) {
      std::cout << "* ";
      // uncomment below line to see extra space at end
      // std::cout << "*.";
    }
    std::cout << std::endl;
  }
}