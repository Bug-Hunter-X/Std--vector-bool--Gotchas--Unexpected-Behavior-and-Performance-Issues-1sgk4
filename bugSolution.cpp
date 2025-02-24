#include <iostream>
#include <vector>
#include <bitset>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
  // Using std::vector<bool> (Potential Performance Issue)
  auto start = high_resolution_clock::now();
  std::vector<bool> boolVec(10000000);
  for (int i = 0; i < 10000000; ++i) {
    boolVec[i] = i % 2 == 0;
  }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << "std::vector<bool> Time: " << duration.count() << "ms" << endl;

  // Using std::vector<char> (More Efficient)
  start = high_resolution_clock::now();
  std::vector<char> charVec(10000000);
  for (int i = 0; i < 10000000; ++i) {
    charVec[i] = i % 2 == 0;
  }
  stop = high_resolution_clock::now();
  duration = duration_cast<milliseconds>(stop - start);
  cout << "std::vector<char> Time: " << duration.count() << "ms" << endl;

  // Using std::bitset (Memory Efficient)
  start = high_resolution_clock::now();
  std::bitset<10000000> bitsetVec;
  for (int i = 0; i < 10000000; ++i) {
    bitsetVec[i] = i % 2 == 0;
  }
  stop = high_resolution_clock::now();
  duration = duration_cast<milliseconds>(stop - start);
  cout << "std::bitset Time: " << duration.count() << "ms" << endl;

  return 0;
}
