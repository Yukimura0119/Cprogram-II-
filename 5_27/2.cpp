#include <iostream>

#include "TwoD.h"

#define pi acos(-1)
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define MaxN 1005

typedef long long ll;
using namespace std;
using namespace TD;

int main() {
    int r, c;
    cout << "Enter the row and column dimensions of the array\n";
    cin >> r >> c;
    TwoD matrix1(r, c);
    matrix1.set();
    cout << "Enter the row and column dimensions of the array\n";
    cin >> r >> c;
    TwoD matrix2(r, c);
    matrix2.set();
    cout << "\nmatrix3 = matrix2\nmatrix3 =\n";
    TwoD matrix3 = matrix2;
    matrix3.show();
    cout << "matrix3 = matrix1 + matrix2\nmatrix3 =\n";
    matrix3 = (matrix1 + matrix2);
    matrix3.show();
    return 0;
}