#include <iostream>
#include "ring.h"
#include "josex.h"

using namespace std;

void Jose::Initial() {
    int num, begin, m;
    cout << "please input the number of boys,"
            "begin postion, interval per count: \n";
    cin >> num >> begin >> m;

    numOfBoys = num;
    beginPos = begin;
    interval = m;
}

void Jose::GetWinner() {
    Ring x(numOfBoys);
    x.Count(beginPos);
    
    for (int i = 1; i < numOfBoys; i++) {
        x.Count(interval);
        x.PutBoy();
        x.ClearBoy();
    }

    cout << "\n the winner is ";
    x.PutBoy();
}
