#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int ship, i = 0, d = 0, l = 0, r = 0, c = 0, coord = 0, k;
    bool inter = false;
    vector<int> coords;

    cin >> ship;

    if (ship < 1 || ship > 100) {
        return 0;
    }

    while (i < ship) {
        d = 0; l = 0; r = 0; c = 0, k = 0;
        cin >> d >> l >> r >> c;

        if (l >= 1 && l <= 5 && r >= 1 && r <= 10 && c >= 1 && c <= 10) {
            if (d == 0) {
                for (int k = c; k <= c + l - 1; k++) {
                    coord = r * 10 + k;
                    if (coord > (r * 10) + 10) {
                        inter = true;
                        break;
                    }
                    coords.push_back(coord);
                }
            } else if (d == 1) {
                for (int k = r; k <= r + l - 1; k++) {
                    coord = k * 10 + c;
                    if (coord > 100 + c) {
                        inter = true;
                        break;
                    }
                    coords.push_back(coord);
                }
            } else {return 0;}
        } else {return 0;}
        i++;
    }
    sort(coords.begin(), coords.end());
    for (int i = 0; i < coords.size(); i++) {
        if (coords[i] == coords[i + 1] || coords[i] < 11) {inter = true; break;}
    }
    if (inter) {cout << "N";} else if (inter == false) {cout << "Y";}
    return 0;
}
