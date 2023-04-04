#include <iostream>

int main() {
  // std::cout<< "Namaste Bharat!" << std::endl;

  // int score;

  // std::cout << "Enter score"<< std::endl;

  // std::cin >> score;

  // std::cout << "Score is : " << score;

  for (int i = 0; i < 5; i = i + 1) {
    // std::cout<<"0----5 "<< i << std::endl;
  }

  for (int i = 5; i > 0; i = i - 1) {
    // std::cout<<"5-----0 "<< i << std::endl;
  }

  for (int i = 1; i <= 10; i = i + 1) {
    // std::cout<<"1---5*2 "<< i*2 << std::endl;
  }

  for (int i = 1; i < 10; i = i * 2) {
    // std::cout<< i << std::endl;
  }
  // for(int i=5; (i>=0 && i<=10) ; i=i+1)
  // {
  // std::cout<< i << std::endl;
  //  }
  // int i;
  // if(std::cin>>i)
  //{
  //  std::cout <<"cccccc"<< i;
  //}
  int size = 5;
  for (int row = 0; row < size; row++) {
    // std::cout << "*";
    if (row == 0 || row == size - 1) {
      for (int col = 0; col < size; col++) {
        std::cout << "*";
      }
    } else {
      std::cout << "*";
      for (int col = 0; col < size - 2; col++) {
        std::cout << " ";
      }
      std::cout << "*";
    }

    std::cout << std::endl;
  }

  int pyramidSize = 5;

  for (int row = 0; row < pyramidSize; row++) {

    for (int col = 0; col < row + 1; col++) {
      std::cout << "*";
    }

    std::cout << std::endl;
  }

  std::cout << "starting inverted half pyramid" << std::endl;
  for (int row = 0; row < pyramidSize; row++) {

    for (int col = 0; col < pyramidSize - row; col++) {
      std::cout << "*";
    }

    std::cout << std::endl;
  }

  std::cout << "starting numeric half pyramid" << std::endl;
  for (int row = 0; row < pyramidSize; row++) {
    for (int col = 0; col < row + 1; col++) {
      std::cout << col + 1;
    }

    std::cout << std::endl;
  }

  std::cout << "-----------";

  // Numeric Hollow Pyramid
  int n = 5;
  for (int i = 0; i < n - 1; i++) {

    for (int whiteSpace = 0; whiteSpace < n - 1; whiteSpace++) {
      std::cout << " ";
    }
    std::cout << std::endl;
  }

  // half  pyramid
  n = 6;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      std::cout << " ";
    }
    for (int k = 0; k < i + 1; k++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  // full  pyramid(extra space at end)
  n = 6;
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

  // full pyramid, no space at end
  n = 6;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      std::cout << " ";
    }
    for (int k = 0; k < i + 1; k++) {
      std::cout << "*";
      if(k<i)
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
}