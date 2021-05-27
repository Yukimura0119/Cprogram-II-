#include "TwoD.h"

#include <iostream>

using namespace std;
using namespace TD;

TwoD::TwoD() {
    r = 0;
    c = 0;
}
TwoD::TwoD(TwoD const& b) {
    r = b.r;
    c = b.c;
    arr = new int*[r];
    for (int i = 0; i < r; i++) {
        arr[i] = new int[c];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr[i][j] = b.arr[i][j];
        }
    }
}
TwoD::TwoD(int Row, int Col) {
    r = Row;
    c = Col;
    arr = new int*[Row];
    for (int i = 0; i < Row; i++) {
        arr[i] = new int[Col];
    }
}

TwoD::~TwoD() {
    for (int i = 0; i < r; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

void TwoD ::set() {
    cout << "Enter " << r << " rows of " << c << " intergers each\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
}
void TwoD ::show() {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}
void TwoD ::operator=(TwoD b) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr[i][j] = b.arr[i][j];
        }
    }
}
TwoD TwoD ::operator+(TwoD const& b) {
    TwoD tmp(b.r, b.c);
    for (int i = 0; i < tmp.r; i++) {
        for (int j = 0; j < tmp.c; j++) {
            tmp.arr[i][j] = this->arr[i][j] + b.arr[i][j];
        }
    }
    return tmp;
}
