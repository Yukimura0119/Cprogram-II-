#include <iostream>

typedef long long ll;
using namespace std;

namespace TD {
class TwoD {
    int r, c;
    int** arr;

   public:
    TwoD();
    TwoD(TwoD const&);
    TwoD(int, int);
    ~TwoD();
    void set();
    void show();
    void operator=(TwoD);
    TwoD operator+(TwoD const&);
};
}  // namespace TD