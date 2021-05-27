#include <iostream>
#include <vector>

#define pi acos(-1)
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define MaxN 1005

typedef long long ll;
using namespace std;
vector<string> vc;

void Display() {
    for (int i = 0; i < vc.size(); i++) {
        cout << ' ' << i << ": " << vc[i] << '\n';
    }
}

int main() {
    vc.push_back("Frink");
    vc.push_back("Wiggum");
    vc.push_back("Allen");
    vc.push_back("Quimby");
    vc.push_back("Flanders");

    cout << "Intial list:\n";
    Display();

    string cmd, name;
    while (cout << "\nPlease enter add , delete or exit :\n") {
        cin >> cmd;
        if (cmd == "add") {
            cout << "Please enter a name :\n";
            cin >> name;
            vc.push_back(name);
            cout << "After adding a name :\n";
            Display();
        } else if (cmd == "delete") {
            cout << "Please choose a name :\n";
            cin >> name;
            for (int i = 0; i < vc.size(); i++) {
                if (vc[i] == name) {
                    vc.erase(vc.begin() + i);
                    cout << "After removing a name :\n";
                    Display();
                    break;
                } else if (i == vc.size() - 1) {
                    cout << "The name isn't on the list\n";
                }
            }
        } else {
            break;
        }
    }
    return 0;
}