#include <iostream>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int w;
    cin >> w;

    if (w >= 1 && w <= 100) {
        if (w % 2 == 0) {
            if (w == 2) {
                cout << "NO";
            } else {
                cout << "YES";
            }
        } else {
            cout << "NO";
        }
    }

    return 0;
}
