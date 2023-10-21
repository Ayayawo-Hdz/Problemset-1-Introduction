#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, c, p, temp;
    bool selec;

    while (cin >> n && n > 0) {
        vector<int> pole(n, 0);

        selec = true;

        for (int i = 0; i < n; i++) {
            cin >> c >> p;
            temp = i + p;
            if (temp >= 0 && temp < n && pole[temp] == 0) {
                pole[temp] = c;
            } else {
                selec = false;
            }
        }
        if (selec) {
            cout << pole[0];
            for (int i = 1; i < n; i++) {
                cout << " " << pole[i];
            }
            cout << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
