#include <iostream>

#include "newuser.h"
#define pi acos(-1)
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define MaxN 1005

typedef long long ll;
using namespace std;
using namespace newuser;

int main() {
    inputusername();
    inputpassword();
    cout << "Your account is : " << getusername() << '\n';
    cout << "Your password is : " << getpassword() << '\n';
    return 0;
}