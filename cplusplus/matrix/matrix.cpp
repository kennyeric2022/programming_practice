/*
   matrix add, substract, multi, divide
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Matrix {
public:
    int row;
    int col;
    int** data;
    Matrix(int row, int col) {
        this->row = row;
        this->col = col;
        data = new int*[row];
        for (int i = 0; i < row; i++) {
            data[i] = new int[col];
        }
    }

    void add(const Matrix& m) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++)
                cout << this->data[i][j] + m.data[i][j] << " ";
            cout << endl;
        }
    }

    void fill() {
        srand((unsigned)time(NULL));
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                this->data[i][j] = rand();
                cout << this->data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    cout << "Matrix computation" << endl;
    Matrix m(3,3);
    Matrix n(3,3);
    m.fill();
    n.fill();
    m.add(n);
    return 0;
}
