#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int cal(int num, vector<int> sums) {
      vector<int> dp(num + 1, 0);
      dp[0] = 0;
      dp[1] = 1;
      for (int i = 0; i <= num; i++) {
          for (int j = 0; j < sums.size(); j++) {
              if (i + sums[j] <= num) {
                  dp[i + sums[j]] += dp[i];
              }
          }
      }
      return dp[num];
  }
};

int main() {
    //1, 3, 4
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    Solution* s = new Solution();
    cout << s->cal(5, v) << endl;
    return 0;
}
