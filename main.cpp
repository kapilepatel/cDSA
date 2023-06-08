
//#include <bits/stdc++.h>
#include <iostream>
//#include <math.h>
//#include <string>
#include <vector>
using namespace std;

// void fn1(int arr[]);

int main() {
  // move all negative to one side
  // we will put all negatives in left
  int arr2[] = {1, 2, -3, 4, -5, 6};
  int arrLength2 = sizeof(arr2) / sizeof(int);
  // print 2 D array
  for (int i1 = 0; i1 < arrLength2; i1++) {
    cout << arr2[i1] << " ";
  }

  int postivePoint = 0;
  int negativePoint = 0;
  while (true) {
    if (arr2[postivePoint] >= 0) {
      // in case we get a positive number
      // do nothing keep hold of positivePoint
      // and move negative to right side to search for any negative number
      negativePoint++;
    } else {
      // in case we get a negative number
      postivePoint++;
    }
  }

  return 0;

  // in-place sort , three pointer approach
  int arr1[] = {1, 2, 0, 2, 2, 1, 2};
  int arrLength1 = sizeof(arr1) / sizeof(int);
  // print 2 D array
  for (int i1 = 0; i1 < arrLength1; i1++) {
    cout << arr1[i1] << " ";
  }
  cout << endl;
  int l = 0;
  int m = 0;
  int h = arrLength1 - 1;
  while (m <= h) {
    if (arr1[m] == 0) {
      swap(arr1[l], arr1[m]);
      m++;
    } else if (arr1[m] == 1) {
      m++;
    } else {
      // case of 2
      swap(arr1[m], arr1[h]);
      h--;
    }
  }

  // print 2 D array
  for (int i1 = 0; i1 < arrLength1; i1++) {
    cout << arr1[i1] << " ";
  }

  return 0;
  //
  int arr[] = {1, 2, 0, 2, 2, 1, 2};
  int arrLength = sizeof(arr) / sizeof(int);
  // print 2 D array
  for (int i = 0; i < arrLength; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // first way, compare first element in array with rest of the elements and
  // swap first elemnt with smallest element. second way, simply swap with first
  // now move to second element and repeat
  // occurance of smaller element and then start from first emelment again
  // untill end of the array.
  // then move to second element and repeat

  for (int i = 0; i < arrLength; i++) {
    int current = arr[i];
    int smallest = arr[i];
    int index;
    // find smallest in rest of the array
    for (int j = i + 1; j < arrLength; j++) {
      if (arr[j] < current && arr[j] < smallest) {
        smallest = arr[j];
        index = j;
      }
    }
    if (smallest < current) {
      // swap
      arr[i] = smallest;
      arr[index] = current;
    }
  }

  for (int i = 0; i < arrLength; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// transpose, rows to columns and columns to rows
// from
// 2 4 6
// 1 3 5
// 9 11 13
// to
// 2 1 9
// 4 3 11
// 6 5 13
// 2 D array
// int arr[3][3];

// cout << "enter values for 2 D array(3*3), first row values, then second row "
//         "values";
// for (int i = 0; i < 3; i++) {
//   for (int j = 0; j < 3; j++) {
//     cin >> arr[i][j];
//   }
// }
// print 2 D array
// for (int i = 0; i < 3; i++) {
//   for (int j = 0; j < 3; j++) {
//     cout << arr[i][j] << " ";
//   }
//   cout << endl;
// }

// for (int row = 0; row < 3; row++) {
//   for (int column = row + 0; column < 3; column++) {
//     int swapValue = arr[row][column];
//     cout << "arr " << row << " " << column << " " << arr[row][column] <<
//     endl; arr[row][column] = arr[column][row]; cout << "arr " << row << " "
//     << column << " " << arr[row][column] << endl; arr[column][row] =
//     swapValue;
//   }
// }
// print 2 D array
// for (int i = 0; i < 3; i++) {
//   for (int j = 0; j < 3; j++) {
//     cout << arr[i][j] << " ";
//   }
//   cout << endl;
// }

// // 2 D array
// int arr[2][2];

// cout << "enter values for 2 D array(2*2), first row values, then second row
// "
//         "values";
// for (int i = 0; i < 2; i++) {
//   for (int j = 0; j < 2; j++) {
//     cin >> arr[i][j];
//   }
// }

// cout << endl;

// // print 2 D array
// for (int i = 0; i < 2; i++) {
//   for (int j = 0; j < 2; j++) {
//     cout << arr[i][j] << " i = " << i << " j= " << j << endl;
//   }
// }

// print sum of rows

// for (int i = 0; i < 2; i++) {
//   int rowSum = 0;
//   for (int j = 0; j < 2; j++) {
//     rowSum += arr[i][j];
//   }
//   cout << rowSum << endl;
// }

// find unique in array
// int arr[] = {1, 5, 1, 9, 8, 9, 8};
// int arr[] = {1, 9, 1, 9, 8, 5, 8};
// int arrLength = sizeof(arr) / sizeof(int);
// int result = 0;
// for (int i = 0; i < arrLength; i++) {
//   result = result ^ arr[i];
//   cout << i << " iteration, result= " << result << endl;
// }
// cout << result;
// int a = 1;
// int b = 1;

// cout << "a ^ b = " << (a ^ b) << endl;

// int n;
// cout << "enter n";
// cin >> n;
// cout << "Value of n is: " << n;

// vector<int> vctr;

// vctr.push_back(1);
// vctr.push_back(7);
// vctr.push_back(9);

// cout << vctr.size() << endl;
// cout << vctr.capacity()<< endl;

// vector<int> vctr2(3);
// cout << vctr2.size() << endl;
// cout << vctr2.capacity() << endl;
// for (int i = 0; i < vctr2.size(); i++) {
//   cout << vctr2[i] << " ";
// }
// cout << endl;
// vctr2.push_back(1);
// vctr2.push_back(7);
// vctr2.push_back(9);
// vctr2.push_back(1);

// cout << vctr2.size() << endl;
// cout << vctr2.capacity() << endl;

// for (int i = 0; i < vctr2.size(); i++) {
//   cout << vctr2[i] << " ";
// }

// reverse an array
// int arr[] = {10, 20, 30, 50, 15, 16}; // even input
// int arr[] = {10, 20, 30, 50, 15};//odd input
// int arrLength = sizeof(arr) / sizeof(int);
// int start = 0;
// int end = arrLength - 1;
// int swapHolder;
// while (start < end) {
//   swapHolder = arr[end];
//   arr[end] = arr[start];
//   arr[start] = swapHolder;
//   start++;
//   end--;
// }
// for (int i = 0; i < arrLength; i++) {
//   cout << arr[i] << " ";
// }

// print extreme ends of an array
// int arr[] = {10, 20, 30, 50, 99, 5, 11, 13, 66,5};
// int start = 0;
// int arrLength = sizeof(arr) / sizeof(int);
// int end = arrLength - 1;

// while (start <= end) {
//   if (start == end) {
//     cout << arr[start] << " ";
//   } else {
//     cout << arr[start] << " ";
//     cout << arr[end] << " ";
//   }
//   start++;
//   end--;
// }

// int arr[2] = {5, 6};
// cout << "value in main function before call" << arr[0] << endl;

// fn1(arr);

// cout << "value in main function" << arr[0] << endl;

// memset works with 0 and -1 only
//  int arr2[5];
//  memset(arr2, -1, sizeof(arr2));
//  for (int i = 0; i < sizeof(arr2)/sizeof(int); i++) {
//    cout << arr2[i] << endl;
//  }

// below would print random numbers
//  int arr2[5];
//  for (int i = 0; i < sizeof(arr2)/sizeof(int); i++) {
//    cout << arr2[i] << endl;
//  }

// int arr1 [3];
// cin >> arr1[0];
// cin >> arr1[2];
// cout << "First element is: " << arr1[0] << endl;
// cout << "Second element is: " << arr1[2] << endl;

// shows random value/garbage values
//  int arrEmpty[5];
//  cout << arrEmpty[5];

// works fine
//  int arr[]={1,4,8};
//  cout << arr[0] << endl;
//  cout << arr[1] << endl;

//   int n;
//   cin>>n;
//   int8_t sum=0;
//   for(int i=0; i<n; ++i){
//       sum += i;
//   }
//   cout << (int)sum << endl;
// return 0;

// int num = 3;
// int count = 0;
// while(num != 0)
//   {
//     if(num & 1)
//     {
//       count++;
//     }
//     num = num >> 1;
//   }
// cout << count << endl;

// string s = "6541";
// int num = 0;
// int j = s.length() - 1;
// for (int i = 0; i < s.length(); i++) {
//   cout << s[i] << " s[" << i << "] ";
//   cout << " j " << j;
//   num = num * 10 + int(s[i] - '0')  ;
//   cout << " num " << num << endl;
//   j--;
// }
// cout << num << endl;

// cout << typeid(num).name();

// string s = "6541";
// int num = 0;
// int j = s.length() - 1;
// for (int i = 0; i < s.length(); i++) {
//   cout << s[i] << " s[" << i << "] ";
//   cout << " j " << j;
//   num += int(s[i] - '0') * pow(10, j);
//   cout << " num " << num << endl;
//   j--;
// }
// cout << num << endl;

// cout << typeid(num).name();

// int number = 589;
// while (number > 0) {
//   cout << number % 10 << " single number " << endl;
//   number = number / 10;
//   // cout << number << " number "<< endl;
// }

/// return;

// int aa = 5;

// cout << (++aa)*(++aa);
// cout << endl;

// int b = 12;
// b = b << 1;
// std::cout << b << endl;

// bool a = false;
// std::cout << a;
// std::cout << ~a;
// std::cout << ~(a);
// std::cout << (~a);

// std::cout<< "Namaste Bharat!" << std::endl;

// int score;

// std::cout << "Enter score"<< std::endl;

// std::cin >> score;

// std::cout << "Score is : " << score;

// fullPyramid();

// for (int i = 0; i < 5; i = i + 1) {
//  std::cout<<"0----5 "<< i << std::endl;
// }

// for (int i = 5; i > 0; i = i - 1) {
//   // std::cout<<"5-----0 "<< i << std::endl;
// }

// for (int i = 1; i <= 10; i = i + 1) {
//   // std::cout<<"1---5*2 "<< i*2 << std::endl;
// }

// for (int i = 1; i < 10; i = i * 2) {
//   // std::cout<< i << std::endl;
// }
// for(int i=5; (i>=0 && i<=10) ; i=i+1)
// {
// std::cout<< i << std::endl;
//  }
// int i;
// if(std::cin>>i)
//{
//  std::cout <<"cccccc"<< i;
//}
// int size = 5;
// for (int row = 0; row < size; row++) {
//   // std::cout << "*";
//   if (row == 0 || row == size - 1) {
//     for (int col = 0; col < size; col++) {
//       std::cout << "*";
//     }
//   } else {
//     std::cout << "*";
//     for (int col = 0; col < size - 2; col++) {
//       std::cout << " ";
//     }
//     std::cout << "*";
//   }

//   std::cout << std::endl;
// }

// int pyramidSize = 5;

// for (int row = 0; row < pyramidSize; row++) {

//   for (int col = 0; col < row + 1; col++) {
//     std::cout << "*";
//   }

//   std::cout << std::endl;
// }

// std::cout << "starting inverted half pyramid" << std::endl;
// for (int row = 0; row < pyramidSize; row++) {

//   for (int col = 0; col < pyramidSize - row; col++) {
//     std::cout << "*";
//   }

//   std::cout << std::endl;
// }

// std::cout << "starting numeric half pyramid" << std::endl;
// for (int row = 0; row < pyramidSize; row++) {
//   for (int col = 0; col < row + 1; col++) {
//     std::cout << col + 1;
//   }

//   std::cout << std::endl;
// }

// std::cout << "-----------";

// Numeric Hollow Pyramid
// int n = 5;
// for (int i = 0; i < n - 1; i++) {

//   for (int whiteSpace = 0; whiteSpace < n - 1; whiteSpace++) {
//     std::cout << " ";
//   }
//   std::cout << std::endl;
// }

// half  pyramid
// n = 6;
// for (int i = 0; i < n; i++) {
//   for (int j = 0; j < n - i; j++) {
//     std::cout << " ";
//   }
//   for (int k = 0; k < i + 1; k++) {
//     std::cout << "*";
//   }
//   std::cout << std::endl;
// }
// full  pyramid(extra space at end)
// n = 6;
// for (int i = 0; i < n; i++) {
//   for (int j = 0; j < n - i; j++) {
//     std::cout << " ";
//   }
//   for (int k = 0; k < i + 1; k++) {
//     std::cout << "* ";
//     // uncomment below line to see extra space at end
//     // std::cout << "*.";
//   }
//   std::cout << std::endl;
// }

// full pyramid, no space at end
// n = 6;
// for (int i = 0; i < n; i++) {
//   for (int j = 0; j < n - i; j++) {
//     std::cout << " ";
//   }
//   for (int k = 0; k < i + 1; k++) {
//     std::cout << "*";
//     if (k < i) {
//       std::cout << " ";
//     }
//   }
//   std::cout << std::endl;
// }
//}

// void fn1(int inputArr[2]) {
//   cout << "value in local function before update" << inputArr[0] << endl;
//   inputArr[0] = 99;
//   cout << "value in local function after update" << inputArr[0] << endl;
// }