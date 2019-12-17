#include <iostream>
#include <iomanip>
#include "ring.h"

using namespace std;

Ring::Ring(int n) {
    pBegin = new Boy[n];
    pCurrent = pBegin;

    for (int i = 1; i <= n; i++, pCurrent = pCurrent -> next) {
      pCurrent -> next = pBegin + i % n;      
      pCurrent -> code = i;
      PutBoy();
    }
    cout << endl;
    pCurrent = &pBegin[n - 1];
}

void Ring::Count(int m) {
    for (int i = 0; i < m; i++) {
        pivot = pCurrent;
        pCurrent = pivot -> next;
    }
}

void Ring::PutBoy() {
    static int numInLine;
    if (numInLine++ % 10 == 0)
        cout << endl;
    cout << setw(4) << pCurrent -> code;
}

void Ring::ClearBoy() {
    pivot -> next = pCurrent -> next;
    pCurrent = pivot;
}

Ring::~Ring() {
    delete[] pBegin;
}
