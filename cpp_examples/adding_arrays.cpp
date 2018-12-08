#include <iostream>
using namespace std;

int main(){

  int arr[2] = {2, 3};
  int accumulator = 0;

  for(int i = 0; i < 2; i++) {
    accumulator += arr[i];
  }

  cout << "a + b is: "  << accumulator;

  cout << "size of int" << sizeof(int);
  return 0;
}
