#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> plusOne(vector<int> &digits) {
    // FIXME
    return digits;
  }
};

void TestPlusOne() {
  Solution s;
  {
    vector<int> digits{1, 2, 3};
    assert((vector<int>{1, 2, 4}) == s.plusOne(digits));
  }
  {
    vector<int> digits{4, 3, 2, 1};
    assert((vector<int>{4, 3, 2, 2}) == s.plusOne(digits));
  }
  {
    vector<int> digits{9};
    assert((vector<int>{1, 0}) == s.plusOne(digits));
  }
}

int main() {
  TestPlusOne();
  std::cout << "Ok!" << std::endl;
  return 0;
}
