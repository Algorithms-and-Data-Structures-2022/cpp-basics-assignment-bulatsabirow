#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy
namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int diff = left - right;
    diff *= diff;
    return diff;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    return mask >= 0 && bit_pos >= 0 && (mask >> bit_pos) % 2 == 1 ? true : false;

  }

  // Task 3
  int max3(int left, int middle, int right) {
    int max = left;

    if (max < middle) {
      max = middle;
    }
    if (max < right){
      max = right;
    }

    return max;
  }

  // Task 4
  void swap_args(int* left, int* right){
    if (left != nullptr && right != nullptr){
        int tmp = *left;
        *left = *right;
        *right = tmp;
      }

  }

  // Task 5
  int arr_sum(int* arr, int length) {
    int sum = 0;
    if (arr == nullptr || length <= 0){
      return 0;
    };
    for (int i = 0;i < length;i++){
      sum += arr[i];
    }

    return sum;
  }

  // Task 6
  int *find_max_elem(int* arr, int length) {
    int* maxElem = arr;
    if (arr == nullptr || length <= 0){
      return nullptr;

    };
    for (int i = 0;i < length;i++) {
      if (arr[i] > *maxElem) {
        maxElem = arr + i;
      };
    };
    return maxElem;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length <= 0) {
      return nullptr;
    };
    int *pointer = new int [length]{};
    std::fill(pointer, pointer + length, init_value);
    return pointer;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (length <= 0 || arr_in == nullptr){
      return nullptr;
    };

    int *arr = new int[length]{};

    std::copy(arr_in, arr_in+ length, arr);

    return arr;

  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr){
      os << "Invalid argument: arr\n";
      return;
    }
    if (length <= 0){
      os << "Invalid argument: length\n";
      return;
    };
    if (k <= 0){
      os << "Invalid argument: k\n";
      return;
    };

      for (int i = 0; i < length; i += k) {
        os << arr[i] << "\t";
      }
  }

}  // namespace assignment
