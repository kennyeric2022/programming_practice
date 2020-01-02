class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        if (n == 0) return res;
        vector<string> s(n, string(n, '.'));
        solveQueen(n, 0, s, res);
        return res;
    }
    
    void solveQueen(int n, int layer, vector<string> s, vector<vector<string>>& res) {
        if (n == layer) {
            // cout << "layer:" << layer << endl;
            // cout << "s size " << s.size() << endl;
            // cout << "s 0 " << s[0] << endl;
            res.push_back(s);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (canPut(n, layer, i, s)) {
                s[layer][i] = 'Q';
                solveQueen(n, layer + 1, s, res);
                s[layer][i] = '.';
            }
        }
    }
    
    bool canPut(int n, int x, int y, vector<string> s) {
        for (int i = 0; i < n; i++) {
            if (s[i][y] == 'Q')
                return false;
        }
        for (int i = 0; i < n; i++) {
            if (s[x][i] == 'Q')
                return false;
        }
        int xr = x, yc = y;
        while (xr >= 0 && yc >= 0) {
            if (s[xr][yc] == 'Q') {
                return false;
            }
            xr--, yc--;
        }
        xr = x, yc = y;
        while (xr < n && yc < n) {
            if (s[xr][yc] == 'Q') {
                return false;
            }
            xr++, yc++;
        }
        xr = x, yc = y;
        while (xr < n && yc >= 0) {
            if (s[xr][yc] == 'Q') {
                return false;
            }
            xr++, yc--;
        }
        xr = x, yc = y;
        while (xr >= 0 && yc < n) {
            if (s[xr][yc] == 'Q') {
                return false;
            }
            xr--, yc++;
        }
        return true;
    }
};
