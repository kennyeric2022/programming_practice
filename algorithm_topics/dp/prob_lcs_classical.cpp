#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lcs(string x, string y) {
        //cout << x.length() << " " << y.length() << endl;
        vector<vector<int> > dp(x.length() + 1, vector<int>(y.length() + 1, 0));
        for (int i = 1; i <= x.length(); i++)
            for (int j = 1; j <= y.length(); j++) {
                if (x[i] == y[j]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        return dp[x.length()][y.length()];
    }
};

int main() {
    Solution* s = new Solution();
    cout << s->lcs("ABCBDAB", "BDCABC") << endl;
    return 0;
}
