#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> plusOne(vector<int> &digits) {
    if (not digits.empty()) {
      ++digits.back();
      for (int i = digits.size() - 1; 0 < i; --i) {
        if (9 < digits[i]) {
          digits[i] %= 10;
          ++digits[i - 1];
        } else { break; }
      }

      if (9 < digits.front()) {
        digits[0] %= 10;
        digits.insert(digits.begin(), 1);
      }
    }

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
  {
    vector<int> digits{1,2,9,9};
    assert((vector<int>{1,3,0,0}) == s.plusOne(digits));
  }
}

int main() {
  TestPlusOne();
  std::cout << "Ok!" << std::endl;
  return 0;
}
