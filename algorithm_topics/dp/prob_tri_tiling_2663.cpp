/*
   [ref]https://www.cnblogs.com/guohaoyu110/p/6379925.html
*/
#include <iostream>

using namespace std;

class Solution {
public:
    int[] num;
    void init() {
        num = num[32];
        int i;
        num[0] = 1;
        num[2] = 3;
        for(i = 4;i < 32;i = i+2)
            num[i] = 4 * num[i - 2] - num[i - 4];
    }
    int cal(int n) {
        return num[n];
    }
};
int main() {
    Solution* s = new Solution();
    int n;
    while(cin >> n) {
        if (n == -1) break;
        if (n % 2 == 1) {
            cout << 0 << endl;
        } else {
            cout << s->cal(n) << endl;
        }
    }
    return 0;
}
