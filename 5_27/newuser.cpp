#include "newuser.h"

#include <iostream>
#define pi acos(-1)
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define MaxN 1005

typedef long long ll;
using namespace std;

string username;
string userpassword;

void newuser::inputusername() {
    cout << "Please enter your name :\n";
    string str;
    while (cin >> str) {
        if (str.size() < 5) {
            cout << "Please enter new name again.\n";
        } else {
            break;
        }
    }
    username = str;
}
void newuser::inputpassword() {
    cout << "Please enter your password :\n";
    string str;
    while (cin >> str) {
        if (str.size() < 5) {
            cout << "Please enter new password again.\n";
        } else {
            break;
        }
    }
    userpassword = str;
}
string newuser::getusername() { return username; }
string newuser::getpassword() { return userpassword; }